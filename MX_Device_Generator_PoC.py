# Copyright (c) 2023 Arm Limited. All rights reserved.
#
# SPDX-License-Identifier: Apache-2.0
#
# Licensed under the Apache License, Version 2.0 (the License); you may
# not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
# www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an AS IS BASIS, WITHOUT
# WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

import sys
import argparse
import os
import os.path as path
import datetime

PERIPHERALS = ["USART", "UART", "LPUART", "SPI", "I2C", "ETH", "SDMMC", "CAN", "USB", "SDIO", "FDCAN"]
MSP_FOLDER = {
    "CortexM33S" : "Secure",
    "CortexM33NS": "NonSecure",
    "CortexM4"   : "CM4",
    "CortexM7"   : "CM7",
}

# # Get DMA configuration
# def get_dma_cfg(f_ioc, peripheral):
#     dma_list = []
#     try:
#         f_ioc.seek(0)
#         for line in f_ioc.readlines():
#             line = line.rstrip()

#             # GPDMA Handling (STM32U5): GPDMA_Channelx
#             if line.startswith("GPDMA"):
#                 if line.find("_REQUEST_") != -1 and line.find(peripheral) != -1:
#                     dma = {}

#                     # *_DMA_INSTANCE
#                     key = line.split("_REQUEST_")[1] + "_DMA_INSTANCE"
#                     tmp_str1 = line.split(".")[0]
#                     tmp_str2 = line.split("REQUEST_GPDMACH")[1]
#                     tmp_str2 = tmp_str2.split("=")[0]
#                     val = f"{tmp_str1}_Channel{tmp_str2}"
#                     dma[key] = val

#                     # *_DMA_REQUEST
#                     key = line.split("_REQUEST_")[1] + "_DMA_REQUEST"
#                     val = line.split("=")[1]
#                     dma[key] = val

#                     dma_list.append(dma)

#             # BDMA Handling (STM32H7): BDMA_Channelx or DMAx_Streamy
#             elif line.startswith("Bdma.") or line.startswith("Dma."):
#                 if line.find(".Instance") != -1:
#                     if line.find(peripheral) != -1:

#                         dma = {}

#                         dma_base = line.split(".")[0].upper()

#                         # *_DMA_INSTANCE
#                         key = line.split(".")[1] + "_DMA_INSTANCE"
#                         val = line.split("=")[1]
#                         dma[key] = val

#                         # *_DMA_REQUEST
#                         key = line.split(".")[1] + "_DMA_REQUEST"
#                         tmp_str = line.split(".")[1]
#                         val = f"{dma_base}_REQUEST_{tmp_str}"
#                         dma[key] = val

#                         dma_list.append(dma)
#     except Exception as e:
#         sys.exit(f"Error: {e}")

#     return dma_list


# Return digit at the end of string
def get_digit_at_end (str):
    digit = ""
    for i in range(len(str) - 1, -1, -1):
        if str[i].isdigit():
            digit = str[i:]

    return digit


# Get virtual mode
def get_virtual_mode(f_ioc, peripheral):
    vmode = ""
    try:
        f_ioc.seek(0)
        find_phrase = f"{peripheral}.VirtualMode"
        for line in f_ioc.readlines():
            line = line.rstrip()
            if line.startswith(find_phrase):
                vmode = line.split("=")[1]
    except Exception as e:
        sys.exit(f"Error: {e}")

    return vmode

# Get pin extended configuration
def get_pin_configuration (f_msp, peripheral, pin, label):
    peripheral_root = ""
    info_empty = {}
    info = {
        "Pin"       : "",
        "Port"      : "",
        "Mode"      : "",
        "Pull"      : "",
        "Speed"     : "",
        "Alternate" : ""
    }

    try:
        f_msp.seek(0)
        for p in PERIPHERALS:
            if peripheral.find(p) == 0:
                peripheral_root = p
                break

        pin_num = get_digit_at_end(pin)
        gpio_pin = f"GPIO_PIN_{pin_num}"
        port = pin.split("P")[1].split(pin_num)[0]
        gpio_port = f"GPIO{port}"

        # # Find *mspInit function:
        # #   Example: void HAL_I2C_MspInit(I2C_HandleTypeDef* hi2c)
        # str = f"HAL_{peripheral_root}_MspInit"
        # for line in f_msp.readlines():
        #     if line.find(str) != -1:
        #         break

        # Find *->Instance==....:
        #   Example: if(hi2c->Instance==I2C1)
        valid_section = False
        value_in_additional_line = False
        for line in f_msp.readlines():
            line = line.rstrip()
            if line.find("->Instance") != -1:
                if line.find(peripheral) != -1:
                    valid_section = True
                else:
                    valid_section = False

            if valid_section == True:
                if line.find("HAL_GPIO_Init") != -1:
                    if line.find(gpio_port) != -1 or line.find(f"{label}_GPIO_Port"):
                        values = info["Pin"].split("|")
                        for val in values:
                            val = val.lstrip().rstrip()
                            if val == gpio_pin or val == f"{label}_Pin":
                                info["Pin"] = gpio_pin
                                info["Port"] = gpio_port
                                # Pin info is valid -> return
                                return info

                if value_in_additional_line == True:
                    value += line.lstrip()
                    if value.find(";") != -1:
                        info["Pin"] = value.split(";")[0]
                        value_in_additional_line = False

                else:
                    for inf in info:
                        if line.find(f".{inf}") != -1:
                            value = line.split("=")[1].lstrip()
                            if value.find(";") != -1:
                                info[inf] = value.split(";")[0]
                            else:
                                value_in_additional_line = True
    except Exception as e:
        sys.exit(f"Error: {e}")

    return info_empty


# Get pins
def get_pins(f_ioc, f_msp, peripheral):
    pins_name={}
    pins_label = {}
    pins_info = {}
    try:
        
        # Find peripheral Pins signal in .ioc.
        # Example: PA11.Signal=USART1_TX
        f_ioc.seek(0)
        find_phrase = f".Signal={peripheral}"
        for line in f_ioc.readlines():
            line = line.rstrip()
            if line.find(find_phrase) != -1 and not line.startswith("VP_"):
                pin = line.split(".Signal=")
                pins_name[pin[0]] = pin[1]
                
        # Check if pin has a label and save the label
        # Example: PA11.GPIO_Label=label
        f_ioc.seek(0)        
        for line in f_ioc.readlines():
            line = line.rstrip()
            for pin in pins_name:
                if line.find(f"{pin}.GPIO_Label") != -1:
                    value = line.split("=")[1].lstrip().split(" ")[0]
                    pins_label[pin] = value
                    
        # Get additional information for the pin
        for pin in pins_name:
            # Pin name: Remove right part, that starts with: " ", "\\", "_" or "-"
            p = pin.split("\\")[0]
            p = p.split(" ")[0]
            p = p.split("_")[0]
            p = p.split("-")[0]    
                
            if len(pins_label) != 0:
                label = pins_label.get(pin, "")
            else:
                label = ""

            info = get_pin_configuration(f_msp, peripheral, p, label)
            pins_info[pins_name[pin]] = [p, info]

    except Exception as e:
        sys.exit(f"Error: {e}")

    return pins_info

# Get Peripherals
def get_peripherals(f_ioc, context):
    peripherals = []
    context_ips_line = ""
    try:
        if context:
            f_ioc.seek(0)
            for line in f_ioc.readlines():
                line = line.rstrip()
                if line.startswith(f"{context}.IPs"):
                    context_ips_line = line
                    break

        if not context or context_ips_line != "":
            f_ioc.seek(0)
            for line in f_ioc.readlines():
                line = line.rstrip()
                if line.startswith("Mcu.IP"):
                    peripheral = line.split('=')[1]
                    if not context or context_ips_line.find(peripheral) != -1:
                        for p in PERIPHERALS:
                            if peripheral.startswith(p):
                                if peripherals.count(peripheral) == 0:
                                    peripherals.append(peripheral)
    except Exception as e:
        sys.exit(f"Error: {e}")

    return peripherals

# Get contexts
def get_contexts(f_ioc):
    contexts = []
    try:
        f_ioc.seek(0)
        for line in f_ioc.readlines():
            line = line.rstrip()
            if line.startswith("Mcu.Context"):
                lsplit = line.split('=')
                if lsplit[0][-1].isdigit():
                    contexts.append(lsplit[1])
    except Exception as e:
        sys.exit(f"Error: {e}")

    return contexts

# Create Define
def create_define(name, value):
    invalid_chars = ['=', ' ', '/', '(', ')', '[', ']', '\\', '-']

    for ch in invalid_chars:
        name = name.replace(ch, '_')
        value =value.replace(ch, '_')

    name = f"MX_{name}"
    name = name.ljust(39)
    define = f"#define {name}{value}"

    return define

# Write Header to mx device
def mx_device_write_header (f_mx_device, file_name):
    try:
        now = datetime.datetime.now()
        dt_string = now.strftime("%d/%m/%Y %H:%M:%S")

        str  = f"""/******************************************************************************
 * File Name   : {file_name}
 * Date        : {dt_string}
 * Description : STM32Cube MX parameter definitions
 * Note        : This file is generated by STM32CubeMX (DO NOT EDIT!)
 ******************************************************************************/
 
 #ifndef __MX_DEVICE_H
 #define __MX_DEVICE_H
   
 """

        f_mx_device.write(str)

    except Exception as e:
        sys.exit(f"Error: {e}")

# Write peripheral configuration to mx device
def mx_device_write_peripheral_cfg (f_mx_device, peripheral, vmode, pins):
    try:
        str = f"\n/*------------------------------ {peripheral}"
        str = str.ljust(49)
        str += "-----------------------------*/\n"
        str += create_define(peripheral, "1") + "\n\n"
        if vmode != "":
            str += "/* Virtual mode */\n"
            peripheral_vm = f"{peripheral}_VM"
            str += create_define(peripheral_vm, vmode) + "\n\n"

        if len(pins) != 0:
            str += "/* Pins */\n"
            for pin in pins:
                str += f"\n/* {pin} */\n"
                str += create_define(pin, pins[pin][0]) + "\n"
                for pin_info in pins[pin][1]:
                    str += create_define(f"{pin}_{pin_info}", pins[pin][1][pin_info]) + "\n"
        f_mx_device.write(str)

    except Exception as e:
        sys.exit(f"Error: {e}")


# find *_hal_msp.c files
def find_hal_msp_files(start_dir):
    msp_files = []
    for dirpath, dirnames, filenames in os.walk(start_dir):
        for filename in filenames:
            if filename.endswith('_hal_msp.c'):
                msp_files.append(path.relpath( path.join(dirpath, filename)))

    return msp_files


# Validate file
def validate_file(file):
    if path.isfile(file):
        return file
    else:
        raise argparse.ArgumentTypeError(f"Invalid file: {file}!")

# parse arguments
def parse_arguments():
    formatter = lambda prog: argparse.HelpFormatter(prog,max_help_position=60)
    parser = argparse.ArgumentParser(description="MX_Device_generator",
                                     formatter_class=formatter)
    parser.add_argument("ioc", metavar="<STM32CubeMX project file>",
                         help="<*.ioc>", type=validate_file)

    return parser.parse_args()

# main
def main():
    args = parse_arguments()

    ioc = path.normpath(f"{args.ioc}")
    work_dir = path.dirname(ioc)
    work_dir_abs = path.abspath(work_dir)
    msp_list = find_hal_msp_files(work_dir_abs)

    try:
        # Open STM32CubeMx project file
        f_ioc = open(ioc, "r")
    except Exception as e:
        sys.exit(f"Error: {e}")

    contexts = get_contexts(f_ioc)

    project_index = 1
    if contexts:
        for context  in contexts:
            try:
                # Find and open hal_msp
                msp = ""
                for msp_x in msp_list:
                    folders = msp_x.split(os.sep)
                    for folder in folders:
                        if folder == MSP_FOLDER[context]:
                            msp = msp_x
                            break
                    if msp != "":
                        break

                f_msp = open(msp, "r")

                # Open MX_Device.h
                f_name = "MX_Device.h" 
                f_path = path.join(path.dirname(work_dir), "drv_cfg")
                f_path = path.join(f_path, f"cproject_{project_index}")
                if path.exists(f_path) == False:
                    os.makedirs(f_path)
                f_path = path.join(f_path, f_name)
                f_mx_device = open(f_path, "w")
                
                project_index += 1
            except Exception as e:
                sys.exit(f"Error: {e}")

            mx_device_write_header(f_mx_device, f_name)

            peripherals =  get_peripherals(f_ioc, context)
            for peripheral in peripherals:
                vmode = get_virtual_mode(f_ioc, peripheral)
                pins = get_pins(f_ioc, f_msp, peripheral)
                mx_device_write_peripheral_cfg(f_mx_device, peripheral, vmode, pins)

            f_mx_device.write("\n#endif  /* __MX_DEVICE_H */\n")
            f_mx_device.close()

    else:
        try:
            # Find and open hal_msp
            f_msp = open(msp_list[0], "r")
           
            # Open MX_Device.h
            f_name = "MX_Device.h" 
            f_path = path.join(path.dirname(work_dir), "drv_cfg")
            f_path = path.join(f_path, f"cproject_{project_index}")
            if path.exists(f_path) == False:
                os.makedirs(f_path)
            f_path = path.join(f_path, f_name)
            f_mx_device = open(f_path, "w")
        except Exception as e:
            sys.exit(f"Error: {e}")

        mx_device_write_header(f_mx_device, f_name)
        peripherals =  get_peripherals(f_ioc, [])
        for peripheral in peripherals:
            vmode = get_virtual_mode(f_ioc, peripheral)
            pins = get_pins(f_ioc, f_msp, peripheral)
            mx_device_write_peripheral_cfg(f_mx_device, peripheral, vmode, pins)

        f_mx_device.write("\n#endif  /* __MX_DEVICE_H */\n")
        f_mx_device.close()

# main
if __name__ == '__main__':
    print("Press Ctrl+C to exit.\n")
    main()
