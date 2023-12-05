/******************************************************************************
 * File Name   : MX_Device.h
 * Date        : 05/12/2023 10:00:59
 * Description : STM32Cube MX parameter definitions
 * Note        : This file is generated with a generator out of the 
 *               STM32CubeMX project and its generated files (DO NOT EDIT!)
 ******************************************************************************/

 #ifndef __MX_DEVICE_H
 #define __MX_DEVICE_H

 
/*------------------------------ FDCAN1         -----------------------------*/
#define MX_FDCAN1                              1

/* Pins */

/* FDCAN1_RX */
#define MX_FDCAN1_RX_Pin                       PD0
#define MX_FDCAN1_RX_GPIO_Pin                  GPIO_PIN_0
#define MX_FDCAN1_RX_GPIOx                     GPIOD
#define MX_FDCAN1_RX_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_FDCAN1_RX_GPIO_PuPd                 GPIO_NOPULL
#define MX_FDCAN1_RX_GPIO_Speed                GPIO_SPEED_FREQ_LOW
#define MX_FDCAN1_RX_GPIO_AF                   GPIO_AF9_FDCAN1

/* FDCAN1_TX */
#define MX_FDCAN1_TX_Pin                       PD1
#define MX_FDCAN1_TX_GPIO_Pin                  GPIO_PIN_1
#define MX_FDCAN1_TX_GPIOx                     GPIOD
#define MX_FDCAN1_TX_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_FDCAN1_TX_GPIO_PuPd                 GPIO_NOPULL
#define MX_FDCAN1_TX_GPIO_Speed                GPIO_SPEED_FREQ_LOW
#define MX_FDCAN1_TX_GPIO_AF                   GPIO_AF9_FDCAN1

/*------------------------------ I2C1           -----------------------------*/
#define MX_I2C1                                1

/* Pins */

/* I2C1_SCL */
#define MX_I2C1_SCL_Pin                        PB6
#define MX_I2C1_SCL_GPIO_Pin                   GPIO_PIN_6
#define MX_I2C1_SCL_GPIOx                      GPIOB
#define MX_I2C1_SCL_GPIO_Mode                  GPIO_MODE_AF_OD
#define MX_I2C1_SCL_GPIO_PuPd                  GPIO_NOPULL
#define MX_I2C1_SCL_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_I2C1_SCL_GPIO_AF                    GPIO_AF4_I2C1

/* I2C1_SDA */
#define MX_I2C1_SDA_Pin                        PB7
#define MX_I2C1_SDA_GPIO_Pin                   GPIO_PIN_7
#define MX_I2C1_SDA_GPIOx                      GPIOB
#define MX_I2C1_SDA_GPIO_Mode                  GPIO_MODE_AF_OD
#define MX_I2C1_SDA_GPIO_PuPd                  GPIO_NOPULL
#define MX_I2C1_SDA_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_I2C1_SDA_GPIO_AF                    GPIO_AF4_I2C1

/*------------------------------ USB            -----------------------------*/
#define MX_USB                                 1

/* Pins */

/* USB_DM */
#define MX_USB_DM_Pin                          PA11
#define MX_USB_DM_GPIO_Pin                     GPIO_PIN_11
#define MX_USB_DM_GPIOx                        GPIOA
#define MX_USB_DM_GPIO_Mode                    GPIO_MODE_AF_PP
#define MX_USB_DM_GPIO_PuPd                    GPIO_NOPULL
#define MX_USB_DM_GPIO_Speed                   GPIO_SPEED_FREQ_LOW
#define MX_USB_DM_GPIO_AF                      GPIO_AF10_USB

/* USB_DP */
#define MX_USB_DP_Pin                          PA12
#define MX_USB_DP_GPIO_Pin                     GPIO_PIN_12
#define MX_USB_DP_GPIOx                        GPIOA
#define MX_USB_DP_GPIO_Mode                    GPIO_MODE_AF_PP
#define MX_USB_DP_GPIO_PuPd                    GPIO_NOPULL
#define MX_USB_DP_GPIO_Speed                   GPIO_SPEED_FREQ_LOW
#define MX_USB_DP_GPIO_AF                      GPIO_AF10_USB

/*------------------------------ LPUART1        -----------------------------*/
#define MX_LPUART1                             1

/* Pins */

/* LPUART1_TX */
#define MX_LPUART1_TX_Pin                      PG7
#define MX_LPUART1_TX_GPIO_Pin                 GPIO_PIN_7
#define MX_LPUART1_TX_GPIOx                    GPIOG
#define MX_LPUART1_TX_GPIO_Mode                GPIO_MODE_AF_PP
#define MX_LPUART1_TX_GPIO_PuPd                GPIO_NOPULL
#define MX_LPUART1_TX_GPIO_Speed               GPIO_SPEED_FREQ_LOW
#define MX_LPUART1_TX_GPIO_AF                  GPIO_AF8_LPUART1

/* LPUART1_RX */
#define MX_LPUART1_RX_Pin                      PG8
#define MX_LPUART1_RX_GPIO_Pin                 GPIO_PIN_8
#define MX_LPUART1_RX_GPIOx                    GPIOG
#define MX_LPUART1_RX_GPIO_Mode                GPIO_MODE_AF_PP
#define MX_LPUART1_RX_GPIO_PuPd                GPIO_NOPULL
#define MX_LPUART1_RX_GPIO_Speed               GPIO_SPEED_FREQ_LOW
#define MX_LPUART1_RX_GPIO_AF                  GPIO_AF8_LPUART1

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

/*------------------------------ SPI3           -----------------------------*/
#define MX_SPI3                                1

/* Pins */

/* SPI3_MISO */
#define MX_SPI3_MISO_Pin                       PB4
#define MX_SPI3_MISO_GPIO_Pin                  GPIO_PIN_4
#define MX_SPI3_MISO_GPIOx                     GPIOB
#define MX_SPI3_MISO_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_SPI3_MISO_GPIO_PuPd                 GPIO_NOPULL
#define MX_SPI3_MISO_GPIO_Speed                GPIO_SPEED_FREQ_LOW
#define MX_SPI3_MISO_GPIO_AF                   GPIO_AF6_SPI3

/* SPI3_MOSI */
#define MX_SPI3_MOSI_Pin                       PD6
#define MX_SPI3_MOSI_GPIO_Pin                  GPIO_PIN_6
#define MX_SPI3_MOSI_GPIOx                     GPIOD
#define MX_SPI3_MOSI_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_SPI3_MOSI_GPIO_PuPd                 GPIO_NOPULL
#define MX_SPI3_MOSI_GPIO_Speed                GPIO_SPEED_FREQ_LOW
#define MX_SPI3_MOSI_GPIO_AF                   GPIO_AF5_SPI3

/* SPI3_SCK */
#define MX_SPI3_SCK_Pin                        PG9
#define MX_SPI3_SCK_GPIO_Pin                   GPIO_PIN_9
#define MX_SPI3_SCK_GPIOx                      GPIOG
#define MX_SPI3_SCK_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_SPI3_SCK_GPIO_PuPd                  GPIO_NOPULL
#define MX_SPI3_SCK_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_SPI3_SCK_GPIO_AF                    GPIO_AF6_SPI3

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

#endif  /* __MX_DEVICE_H */
