/******************************************************************************
 * File Name   : MX_Device.h
 * Date        : 11/12/2023 14:20:48
 * Description : STM32Cube MX parameter definitions
 * Note        : This file is generated with a generator out of the
 *               STM32CubeMX project and its generated files (DO NOT EDIT!)
 ******************************************************************************/

 #ifndef __MX_DEVICE_H
 #define __MX_DEVICE_H

 
/*------------------------------ CAN1           -----------------------------*/
#define MX_CAN1                                1

/* Pins */

/* CAN1_RX */
#define MX_CAN1_RX_Pin                         PD0
#define MX_CAN1_RX_GPIO_Pin                    GPIO_PIN_0
#define MX_CAN1_RX_GPIOx                       GPIOD
#define MX_CAN1_RX_GPIO_Mode                   GPIO_MODE_AF_PP
#define MX_CAN1_RX_GPIO_PuPd                   GPIO_NOPULL
#define MX_CAN1_RX_GPIO_Speed                  GPIO_SPEED_FREQ_VERY_HIGH
#define MX_CAN1_RX_GPIO_AF                     GPIO_AF9_CAN1

/* CAN1_TX */
#define MX_CAN1_TX_Pin                         PD1
#define MX_CAN1_TX_GPIO_Pin                    GPIO_PIN_1
#define MX_CAN1_TX_GPIOx                       GPIOD
#define MX_CAN1_TX_GPIO_Mode                   GPIO_MODE_AF_PP
#define MX_CAN1_TX_GPIO_PuPd                   GPIO_NOPULL
#define MX_CAN1_TX_GPIO_Speed                  GPIO_SPEED_FREQ_VERY_HIGH
#define MX_CAN1_TX_GPIO_AF                     GPIO_AF9_CAN1

/*------------------------------ CAN2           -----------------------------*/
#define MX_CAN2                                1

/* Pins */

/* CAN2_RX */
#define MX_CAN2_RX_Pin                         PB12
#define MX_CAN2_RX_GPIO_Pin                    GPIO_PIN_12
#define MX_CAN2_RX_GPIOx                       GPIOB
#define MX_CAN2_RX_GPIO_Mode                   GPIO_MODE_AF_PP
#define MX_CAN2_RX_GPIO_PuPd                   GPIO_NOPULL
#define MX_CAN2_RX_GPIO_Speed                  GPIO_SPEED_FREQ_VERY_HIGH
#define MX_CAN2_RX_GPIO_AF                     GPIO_AF10_CAN2

/* CAN2_TX */
#define MX_CAN2_TX_Pin                         PB13
#define MX_CAN2_TX_GPIO_Pin                    GPIO_PIN_13
#define MX_CAN2_TX_GPIOx                       GPIOB
#define MX_CAN2_TX_GPIO_Mode                   GPIO_MODE_AF_PP
#define MX_CAN2_TX_GPIO_PuPd                   GPIO_NOPULL
#define MX_CAN2_TX_GPIO_Speed                  GPIO_SPEED_FREQ_VERY_HIGH
#define MX_CAN2_TX_GPIO_AF                     GPIO_AF10_CAN2

/*------------------------------ UART4          -----------------------------*/
#define MX_UART4                               1

/* Pins */

/* UART4_TX */
#define MX_UART4_TX_Pin                        PA0
#define MX_UART4_TX_GPIO_Pin                   GPIO_PIN_0
#define MX_UART4_TX_GPIOx                      GPIOA
#define MX_UART4_TX_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_UART4_TX_GPIO_PuPd                  GPIO_NOPULL
#define MX_UART4_TX_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_UART4_TX_GPIO_AF                    GPIO_AF8_UART4

/* UART4_RX */
#define MX_UART4_RX_Pin                        PA1
#define MX_UART4_RX_GPIO_Pin                   GPIO_PIN_1
#define MX_UART4_RX_GPIOx                      GPIOA
#define MX_UART4_RX_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_UART4_RX_GPIO_PuPd                  GPIO_NOPULL
#define MX_UART4_RX_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_UART4_RX_GPIO_AF                    GPIO_AF8_UART4

/*------------------------------ USART2         -----------------------------*/
#define MX_USART2                              1

/* Virtual mode */
#define MX_USART2_VM                           VM_ASYNC
#define MX_USART2_VM_ASYNC                     1

/* Pins */

/* USART2_TX */
#define MX_USART2_TX_Pin                       PA2
#define MX_USART2_TX_GPIO_Pin                  GPIO_PIN_2
#define MX_USART2_TX_GPIOx                     GPIOA
#define MX_USART2_TX_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_USART2_TX_GPIO_PuPd                 GPIO_NOPULL
#define MX_USART2_TX_GPIO_Speed                GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USART2_TX_GPIO_AF                   GPIO_AF7_USART2

/* USART2_RX */
#define MX_USART2_RX_Pin                       PA3
#define MX_USART2_RX_GPIO_Pin                  GPIO_PIN_3
#define MX_USART2_RX_GPIOx                     GPIOA
#define MX_USART2_RX_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_USART2_RX_GPIO_PuPd                 GPIO_NOPULL
#define MX_USART2_RX_GPIO_Speed                GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USART2_RX_GPIO_AF                   GPIO_AF7_USART2

/*------------------------------ USB_OTG_FS     -----------------------------*/
#define MX_USB_OTG_FS                          1

/* Virtual mode */
#define MX_USB_OTG_FS_VM                       Device_Only
#define MX_USB_OTG_FS_Device_Only              1

/* Pins */

/* USB_OTG_FS_DM */
#define MX_USB_OTG_FS_DM_Pin                   PA11
#define MX_USB_OTG_FS_DM_GPIO_Pin              GPIO_PIN_11
#define MX_USB_OTG_FS_DM_GPIOx                 GPIOA
#define MX_USB_OTG_FS_DM_GPIO_Mode             GPIO_MODE_AF_PP
#define MX_USB_OTG_FS_DM_GPIO_PuPd             GPIO_NOPULL
#define MX_USB_OTG_FS_DM_GPIO_Speed            GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USB_OTG_FS_DM_GPIO_AF               GPIO_AF10_OTG_FS

/* USB_OTG_FS_DP */
#define MX_USB_OTG_FS_DP_Pin                   PA12
#define MX_USB_OTG_FS_DP_GPIO_Pin              GPIO_PIN_12
#define MX_USB_OTG_FS_DP_GPIOx                 GPIOA
#define MX_USB_OTG_FS_DP_GPIO_Mode             GPIO_MODE_AF_PP
#define MX_USB_OTG_FS_DP_GPIO_PuPd             GPIO_NOPULL
#define MX_USB_OTG_FS_DP_GPIO_Speed            GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USB_OTG_FS_DP_GPIO_AF               GPIO_AF10_OTG_FS

/*------------------------------ I2C1           -----------------------------*/
#define MX_I2C1                                1

/* Pins */

/* I2C1_SDA */
#define MX_I2C1_SDA_Pin                        PG13
#define MX_I2C1_SDA_GPIO_Pin                   GPIO_PIN_13
#define MX_I2C1_SDA_GPIOx                      GPIOG
#define MX_I2C1_SDA_GPIO_Mode                  GPIO_MODE_AF_OD
#define MX_I2C1_SDA_GPIO_PuPd                  GPIO_NOPULL
#define MX_I2C1_SDA_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_I2C1_SDA_GPIO_AF                    GPIO_AF4_I2C1

/* I2C1_SCL */
#define MX_I2C1_SCL_Pin                        PG14
#define MX_I2C1_SCL_GPIO_Pin                   GPIO_PIN_14
#define MX_I2C1_SCL_GPIOx                      GPIOG
#define MX_I2C1_SCL_GPIO_Mode                  GPIO_MODE_AF_OD
#define MX_I2C1_SCL_GPIO_PuPd                  GPIO_NOPULL
#define MX_I2C1_SCL_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_I2C1_SCL_GPIO_AF                    GPIO_AF4_I2C1

/*------------------------------ LPUART1        -----------------------------*/
#define MX_LPUART1                             1

/* Pins */

/* LPUART1_RX */
#define MX_LPUART1_RX_Pin                      PC0
#define MX_LPUART1_RX_GPIO_Pin                 GPIO_PIN_0
#define MX_LPUART1_RX_GPIOx                    GPIOC
#define MX_LPUART1_RX_GPIO_Mode                GPIO_MODE_AF_PP
#define MX_LPUART1_RX_GPIO_PuPd                GPIO_NOPULL
#define MX_LPUART1_RX_GPIO_Speed               GPIO_SPEED_FREQ_VERY_HIGH
#define MX_LPUART1_RX_GPIO_AF                  GPIO_AF8_LPUART1

/* LPUART1_TX */
#define MX_LPUART1_TX_Pin                      PC1
#define MX_LPUART1_TX_GPIO_Pin                 GPIO_PIN_1
#define MX_LPUART1_TX_GPIOx                    GPIOC
#define MX_LPUART1_TX_GPIO_Mode                GPIO_MODE_AF_PP
#define MX_LPUART1_TX_GPIO_PuPd                GPIO_NOPULL
#define MX_LPUART1_TX_GPIO_Speed               GPIO_SPEED_FREQ_VERY_HIGH
#define MX_LPUART1_TX_GPIO_AF                  GPIO_AF8_LPUART1

/*------------------------------ SDMMC1         -----------------------------*/
#define MX_SDMMC1                              1

/* Pins */

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

/* SDMMC1_D0 */
#define MX_SDMMC1_D0_Pin                       PC8
#define MX_SDMMC1_D0_GPIO_Pin                  GPIO_PIN_8
#define MX_SDMMC1_D0_GPIOx                     GPIOC
#define MX_SDMMC1_D0_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_SDMMC1_D0_GPIO_PuPd                 GPIO_NOPULL
#define MX_SDMMC1_D0_GPIO_Speed                GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDMMC1_D0_GPIO_AF                   GPIO_AF12_SDMMC1

/* SDMMC1_D1 */
#define MX_SDMMC1_D1_Pin                       PC9
#define MX_SDMMC1_D1_GPIO_Pin                  GPIO_PIN_9
#define MX_SDMMC1_D1_GPIOx                     GPIOC
#define MX_SDMMC1_D1_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_SDMMC1_D1_GPIO_PuPd                 GPIO_NOPULL
#define MX_SDMMC1_D1_GPIO_Speed                GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDMMC1_D1_GPIO_AF                   GPIO_AF12_SDMMC1

/* SDMMC1_CMD */
#define MX_SDMMC1_CMD_Pin                      PD2
#define MX_SDMMC1_CMD_GPIO_Pin                 GPIO_PIN_2
#define MX_SDMMC1_CMD_GPIOx                    GPIOD
#define MX_SDMMC1_CMD_GPIO_Mode                GPIO_MODE_AF_PP
#define MX_SDMMC1_CMD_GPIO_PuPd                GPIO_NOPULL
#define MX_SDMMC1_CMD_GPIO_Speed               GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDMMC1_CMD_GPIO_AF                  GPIO_AF12_SDMMC1

/*------------------------------ SPI1           -----------------------------*/
#define MX_SPI1                                1

/* Pins */

/* SPI1_SCK */
#define MX_SPI1_SCK_Pin                        PA5
#define MX_SPI1_SCK_GPIO_Pin                   GPIO_PIN_5
#define MX_SPI1_SCK_GPIOx                      GPIOA
#define MX_SPI1_SCK_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_SPI1_SCK_GPIO_PuPd                  GPIO_NOPULL
#define MX_SPI1_SCK_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SPI1_SCK_GPIO_AF                    GPIO_AF5_SPI1

/* SPI1_MISO */
#define MX_SPI1_MISO_Pin                       PA6
#define MX_SPI1_MISO_GPIO_Pin                  GPIO_PIN_6
#define MX_SPI1_MISO_GPIOx                     GPIOA
#define MX_SPI1_MISO_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_SPI1_MISO_GPIO_PuPd                 GPIO_NOPULL
#define MX_SPI1_MISO_GPIO_Speed                GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SPI1_MISO_GPIO_AF                   GPIO_AF5_SPI1

/* SPI1_MOSI */
#define MX_SPI1_MOSI_Pin                       PA7
#define MX_SPI1_MOSI_GPIO_Pin                  GPIO_PIN_7
#define MX_SPI1_MOSI_GPIOx                     GPIOA
#define MX_SPI1_MOSI_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_SPI1_MOSI_GPIO_PuPd                 GPIO_NOPULL
#define MX_SPI1_MOSI_GPIO_Speed                GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SPI1_MOSI_GPIO_AF                   GPIO_AF5_SPI1

/*------------------------------ SPI3           -----------------------------*/
#define MX_SPI3                                1

/* Pins */

/* SPI3_MISO */
#define MX_SPI3_MISO_Pin                       PG10
#define MX_SPI3_MISO_GPIO_Pin                  GPIO_PIN_10
#define MX_SPI3_MISO_GPIOx                     GPIOG
#define MX_SPI3_MISO_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_SPI3_MISO_GPIO_PuPd                 GPIO_NOPULL
#define MX_SPI3_MISO_GPIO_Speed                GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SPI3_MISO_GPIO_AF                   GPIO_AF6_SPI3

/* SPI3_MOSI */
#define MX_SPI3_MOSI_Pin                       PG11
#define MX_SPI3_MOSI_GPIO_Pin                  GPIO_PIN_11
#define MX_SPI3_MOSI_GPIOx                     GPIOG
#define MX_SPI3_MOSI_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_SPI3_MOSI_GPIO_PuPd                 GPIO_NOPULL
#define MX_SPI3_MOSI_GPIO_Speed                GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SPI3_MOSI_GPIO_AF                   GPIO_AF6_SPI3

/* SPI3_SCK */
#define MX_SPI3_SCK_Pin                        PG9
#define MX_SPI3_SCK_GPIO_Pin                   GPIO_PIN_9
#define MX_SPI3_SCK_GPIOx                      GPIOG
#define MX_SPI3_SCK_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_SPI3_SCK_GPIO_PuPd                  GPIO_NOPULL
#define MX_SPI3_SCK_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SPI3_SCK_GPIO_AF                    GPIO_AF6_SPI3

#endif  /* __MX_DEVICE_H */
