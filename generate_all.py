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

import subprocess
import os
# find all .ioc file
def find_ioc_files(start_dir):
    ioc_files = []
    for dirpath, dirnames, filenames in os.walk(start_dir):
        for filename in filenames:
            if filename.endswith('.ioc'):
                ioc_files.append(os.path.join(dirpath, filename))
                
    return ioc_files

# # parse arguments
# def parse_arguments():
#     formatter = lambda prog: argparse.HelpFormatter(prog,max_help_position=60)
#     parser = argparse.ArgumentParser(description="MX_Device_generator",
#                                      formatter_class=formatter)
#     parser.add_argument("dir", metavar="<Start directory>", type=validate_file)
#     return parser.parse_args()

# main
def main():
    ioc_list = find_ioc_files(os.getcwd())
    for ioc in ioc_list:
        print(f"**** {ioc}\n")
        command = ['python', 'MX_Device_Generator_PoC.py', ioc]
        subprocess.run(command)

# main
if __name__ == '__main__':
    print("Press Ctrl+C to exit.\n")
    main()
