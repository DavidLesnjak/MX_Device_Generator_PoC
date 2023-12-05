/******************************************************************************
 * File Name   : MX_Device.h
 * Date        : 05/12/2023 10:00:59
 * Description : STM32Cube MX parameter definitions
 * Note        : This file is generated with a generator out of the 
 *               STM32CubeMX project and its generated files (DO NOT EDIT!)
 ******************************************************************************/

 #ifndef __MX_DEVICE_H
 #define __MX_DEVICE_H

 
/*------------------------------ UART4          -----------------------------*/
#define MX_UART4                               1

/* Pins */

/* UART4_TX */
#define MX_UART4_TX_Pin                        PA0
#define MX_UART4_TX_GPIO_Pin                   GPIO_PIN_0
#define MX_UART4_TX_GPIOx                      GPIOA
#define MX_UART4_TX_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_UART4_TX_GPIO_PuPd                  GPIO_NOPULL
#define MX_UART4_TX_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_UART4_TX_GPIO_AF                    GPIO_AF8_UART4

/* UART4_RX */
#define MX_UART4_RX_Pin                        PA1
#define MX_UART4_RX_GPIO_Pin                   GPIO_PIN_1
#define MX_UART4_RX_GPIOx                      GPIOA
#define MX_UART4_RX_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_UART4_RX_GPIO_PuPd                  GPIO_NOPULL
#define MX_UART4_RX_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_UART4_RX_GPIO_AF                    GPIO_AF8_UART4

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
#define MX_I2C2_SCL_Pin                        PF1
#define MX_I2C2_SCL_GPIO_Pin                   GPIO_PIN_1
#define MX_I2C2_SCL_GPIOx                      GPIOF
#define MX_I2C2_SCL_GPIO_Mode                  GPIO_MODE_AF_OD
#define MX_I2C2_SCL_GPIO_PuPd                  GPIO_NOPULL
#define MX_I2C2_SCL_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_I2C2_SCL_GPIO_AF                    GPIO_AF4_I2C2

/*------------------------------ SDMMC1         -----------------------------*/
#define MX_SDMMC1                              1

/* Pins */

/* SDMMC1_CKIN */
#define MX_SDMMC1_CKIN_Pin                     PB8
#define MX_SDMMC1_CKIN_GPIO_Pin                GPIO_PIN_8
#define MX_SDMMC1_CKIN_GPIOx                   GPIOB
#define MX_SDMMC1_CKIN_GPIO_Mode               GPIO_MODE_AF_PP
#define MX_SDMMC1_CKIN_GPIO_PuPd               GPIO_NOPULL
#define MX_SDMMC1_CKIN_GPIO_Speed              GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDMMC1_CKIN_GPIO_AF                 GPIO_AF8_SDMMC1

/* SDMMC1_CDIR */
#define MX_SDMMC1_CDIR_Pin                     PB9
#define MX_SDMMC1_CDIR_GPIO_Pin                GPIO_PIN_9
#define MX_SDMMC1_CDIR_GPIOx                   GPIOB
#define MX_SDMMC1_CDIR_GPIO_Mode               GPIO_MODE_AF_PP
#define MX_SDMMC1_CDIR_GPIO_PuPd               GPIO_NOPULL
#define MX_SDMMC1_CDIR_GPIO_Speed              GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDMMC1_CDIR_GPIO_AF                 GPIO_AF8_SDMMC1

/* SDMMC1_D2 */
#define MX_SDMMC1_D2_Pin                       PC10
#define MX_SDMMC1_D2_GPIO_Pin                  GPIO_PIN_10
#define MX_SDMMC1_D2_GPIOx                     GPIOC
#define MX_SDMMC1_D2_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_SDMMC1_D2_GPIO_PuPd                 GPIO_NOPULL
#define MX_SDMMC1_D2_GPIO_Speed                GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDMMC1_D2_GPIO_AF                   GPIO_AF12_SDMMC1

/* SDMMC1_D3 */
#define MX_SDMMC1_D3_Pin                       PC11
#define MX_SDMMC1_D3_GPIO_Pin                  GPIO_PIN_11
#define MX_SDMMC1_D3_GPIOx                     GPIOC
#define MX_SDMMC1_D3_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_SDMMC1_D3_GPIO_PuPd                 GPIO_NOPULL
#define MX_SDMMC1_D3_GPIO_Speed                GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDMMC1_D3_GPIO_AF                   GPIO_AF12_SDMMC1

/* SDMMC1_CK */
#define MX_SDMMC1_CK_Pin                       PC12
#define MX_SDMMC1_CK_GPIO_Pin                  GPIO_PIN_12
#define MX_SDMMC1_CK_GPIOx                     GPIOC
#define MX_SDMMC1_CK_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_SDMMC1_CK_GPIO_PuPd                 GPIO_NOPULL
#define MX_SDMMC1_CK_GPIO_Speed                GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDMMC1_CK_GPIO_AF                   GPIO_AF12_SDMMC1

/* SDMMC1_D0DIR */
#define MX_SDMMC1_D0DIR_Pin                    PC6
#define MX_SDMMC1_D0DIR_GPIO_Pin               GPIO_PIN_6
#define MX_SDMMC1_D0DIR_GPIOx                  GPIOC
#define MX_SDMMC1_D0DIR_GPIO_Mode              GPIO_MODE_AF_PP
#define MX_SDMMC1_D0DIR_GPIO_PuPd              GPIO_NOPULL
#define MX_SDMMC1_D0DIR_GPIO_Speed             GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDMMC1_D0DIR_GPIO_AF                GPIO_AF8_SDMMC1

/* SDMMC1_D123DIR */
#define MX_SDMMC1_D123DIR_Pin                  PC7
#define MX_SDMMC1_D123DIR_GPIO_Pin             GPIO_PIN_7
#define MX_SDMMC1_D123DIR_GPIOx                GPIOC
#define MX_SDMMC1_D123DIR_GPIO_Mode            GPIO_MODE_AF_PP
#define MX_SDMMC1_D123DIR_GPIO_PuPd            GPIO_NOPULL
#define MX_SDMMC1_D123DIR_GPIO_Speed           GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDMMC1_D123DIR_GPIO_AF              GPIO_AF8_SDMMC1

/* SDMMC1_D0 */
#define MX_SDMMC1_D0_Pin                       PC8
#define MX_SDMMC1_D0_GPIO_Pin                  GPIO_PIN_8
#define MX_SDMMC1_D0_GPIOx                     GPIOC
#define MX_SDMMC1_D0_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_SDMMC1_D0_GPIO_PuPd                 GPIO_NOPULL
#define MX_SDMMC1_D0_GPIO_Speed                GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDMMC1_D0_GPIO_AF                   GPIO_AF8_SDMMC1

/* SDMMC1_D1 */
#define MX_SDMMC1_D1_Pin                       PC9
#define MX_SDMMC1_D1_GPIO_Pin                  GPIO_PIN_9
#define MX_SDMMC1_D1_GPIOx                     GPIOC
#define MX_SDMMC1_D1_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_SDMMC1_D1_GPIO_PuPd                 GPIO_NOPULL
#define MX_SDMMC1_D1_GPIO_Speed                GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDMMC1_D1_GPIO_AF                   GPIO_AF8_SDMMC1

/* SDMMC1_CMD */
#define MX_SDMMC1_CMD_Pin                      PD2
#define MX_SDMMC1_CMD_GPIO_Pin                 GPIO_PIN_2
#define MX_SDMMC1_CMD_GPIOx                    GPIOD
#define MX_SDMMC1_CMD_GPIO_Mode                GPIO_MODE_AF_PP
#define MX_SDMMC1_CMD_GPIO_PuPd                GPIO_NOPULL
#define MX_SDMMC1_CMD_GPIO_Speed               GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDMMC1_CMD_GPIO_AF                  GPIO_AF12_SDMMC1

#endif  /* __MX_DEVICE_H */
