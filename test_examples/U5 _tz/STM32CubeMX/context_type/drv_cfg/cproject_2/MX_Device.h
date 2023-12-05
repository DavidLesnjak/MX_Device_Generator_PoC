/******************************************************************************
 * File Name   : MX_Device.h
 * Date        : 05/12/2023 10:00:59
 * Description : STM32Cube MX parameter definitions
 * Note        : This file is generated with a generator out of the 
 *               STM32CubeMX project and its generated files (DO NOT EDIT!)
 ******************************************************************************/

 #ifndef __MX_DEVICE_H
 #define __MX_DEVICE_H

 
/*------------------------------ SDMMC2         -----------------------------*/
#define MX_SDMMC2                              1

/* Pins */

/* SDMMC2_D0 */
#define MX_SDMMC2_D0_Pin                       PB14
#define MX_SDMMC2_D0_GPIO_Pin                  GPIO_PIN_14
#define MX_SDMMC2_D0_GPIOx                     GPIOB
#define MX_SDMMC2_D0_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_SDMMC2_D0_GPIO_PuPd                 GPIO_NOPULL
#define MX_SDMMC2_D0_GPIO_Speed                GPIO_SPEED_FREQ_HIGH
#define MX_SDMMC2_D0_GPIO_AF                   GPIO_AF12_SDMMC2

/* SDMMC2_D1 */
#define MX_SDMMC2_D1_Pin                       PB15
#define MX_SDMMC2_D1_GPIO_Pin                  GPIO_PIN_15
#define MX_SDMMC2_D1_GPIOx                     GPIOB
#define MX_SDMMC2_D1_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_SDMMC2_D1_GPIO_PuPd                 GPIO_NOPULL
#define MX_SDMMC2_D1_GPIO_Speed                GPIO_SPEED_FREQ_HIGH
#define MX_SDMMC2_D1_GPIO_AF                   GPIO_AF12_SDMMC2

/* SDMMC2_D2 */
#define MX_SDMMC2_D2_Pin                       PB3
#define MX_SDMMC2_D2_GPIO_Pin                  GPIO_PIN_3
#define MX_SDMMC2_D2_GPIOx                     GPIOB
#define MX_SDMMC2_D2_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_SDMMC2_D2_GPIO_PuPd                 GPIO_NOPULL
#define MX_SDMMC2_D2_GPIO_Speed                GPIO_SPEED_FREQ_HIGH
#define MX_SDMMC2_D2_GPIO_AF                   GPIO_AF12_SDMMC2

/* SDMMC2_D3 */
#define MX_SDMMC2_D3_Pin                       PB4
#define MX_SDMMC2_D3_GPIO_Pin                  GPIO_PIN_4
#define MX_SDMMC2_D3_GPIOx                     GPIOB
#define MX_SDMMC2_D3_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_SDMMC2_D3_GPIO_PuPd                 GPIO_NOPULL
#define MX_SDMMC2_D3_GPIO_Speed                GPIO_SPEED_FREQ_HIGH
#define MX_SDMMC2_D3_GPIO_AF                   GPIO_AF12_SDMMC2

/* SDMMC2_CK */
#define MX_SDMMC2_CK_Pin                       PD6
#define MX_SDMMC2_CK_GPIO_Pin                  GPIO_PIN_6
#define MX_SDMMC2_CK_GPIOx                     GPIOD
#define MX_SDMMC2_CK_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_SDMMC2_CK_GPIO_PuPd                 GPIO_NOPULL
#define MX_SDMMC2_CK_GPIO_Speed                GPIO_SPEED_FREQ_HIGH
#define MX_SDMMC2_CK_GPIO_AF                   GPIO_AF11_SDMMC2

/* SDMMC2_CMD */
#define MX_SDMMC2_CMD_Pin                      PD7
#define MX_SDMMC2_CMD_GPIO_Pin                 GPIO_PIN_7
#define MX_SDMMC2_CMD_GPIOx                    GPIOD
#define MX_SDMMC2_CMD_GPIO_Mode                GPIO_MODE_AF_PP
#define MX_SDMMC2_CMD_GPIO_PuPd                GPIO_NOPULL
#define MX_SDMMC2_CMD_GPIO_Speed               GPIO_SPEED_FREQ_HIGH
#define MX_SDMMC2_CMD_GPIO_AF                  GPIO_AF11_SDMMC2

/*------------------------------ USART2         -----------------------------*/
#define MX_USART2                              1

/* Virtual mode */
#define MX_USART2_VM                           VM_ASYNC
#define MX_USART2_VM_ASYNC                     1

/* Pins */

/* USART2_RX */
#define MX_USART2_RX_Pin                       PA15
#define MX_USART2_RX_GPIO_Pin                  GPIO_PIN_15
#define MX_USART2_RX_GPIOx                     GPIOA
#define MX_USART2_RX_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_USART2_RX_GPIO_PuPd                 GPIO_NOPULL
#define MX_USART2_RX_GPIO_Speed                GPIO_SPEED_FREQ_LOW
#define MX_USART2_RX_GPIO_AF                   GPIO_AF3_USART2

/* USART2_TX */
#define MX_USART2_TX_Pin                       PD5
#define MX_USART2_TX_GPIO_Pin                  GPIO_PIN_5
#define MX_USART2_TX_GPIOx                     GPIOD
#define MX_USART2_TX_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_USART2_TX_GPIO_PuPd                 GPIO_NOPULL
#define MX_USART2_TX_GPIO_Speed                GPIO_SPEED_FREQ_LOW
#define MX_USART2_TX_GPIO_AF                   GPIO_AF7_USART2

/*------------------------------ I2C2           -----------------------------*/
#define MX_I2C2                                1

/* Pins */

/* I2C2_SDA */
#define MX_I2C2_SDA_Pin                        PF0
#define MX_I2C2_SDA_GPIO_Pin                   GPIO_PIN_0
#define MX_I2C2_SDA_GPIOx                      GPIOF
#define MX_I2C2_SDA_GPIO_Mode                  GPIO_MODE_AF_OD
#define MX_I2C2_SDA_GPIO_PuPd                  GPIO_NOPULL
#define MX_I2C2_SDA_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_I2C2_SDA_GPIO_AF                    GPIO_AF4_I2C2

/* I2C2_SCL */
#define MX_I2C2_SCL_Pin                        PH4
#define MX_I2C2_SCL_GPIO_Pin                   GPIO_PIN_4
#define MX_I2C2_SCL_GPIOx                      GPIOH
#define MX_I2C2_SCL_GPIO_Mode                  GPIO_MODE_AF_OD
#define MX_I2C2_SCL_GPIO_PuPd                  GPIO_NOPULL
#define MX_I2C2_SCL_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_I2C2_SCL_GPIO_AF                    GPIO_AF4_I2C2

#endif  /* __MX_DEVICE_H */
