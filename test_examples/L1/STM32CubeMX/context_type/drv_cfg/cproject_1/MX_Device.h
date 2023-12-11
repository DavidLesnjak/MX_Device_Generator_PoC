/******************************************************************************
 * File Name   : MX_Device.h
 * Date        : 11/12/2023 14:20:47
 * Description : STM32Cube MX parameter definitions
 * Note        : This file is generated with a generator out of the
 *               STM32CubeMX project and its generated files (DO NOT EDIT!)
 ******************************************************************************/

 #ifndef __MX_DEVICE_H
 #define __MX_DEVICE_H

 
/*------------------------------ I2C1           -----------------------------*/
#define MX_I2C1                                1

/* Pins */

/* I2C1_SCL */
#define MX_I2C1_SCL_Pin                        PB6
#define MX_I2C1_SCL_GPIO_Pin                   GPIO_PIN_6
#define MX_I2C1_SCL_GPIOx                      GPIOB
#define MX_I2C1_SCL_GPIO_Mode                  GPIO_MODE_AF_OD
#define MX_I2C1_SCL_GPIO_PuPd                  GPIO_NOPULL
#define MX_I2C1_SCL_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_I2C1_SCL_GPIO_AF                    GPIO_AF4_I2C1

/* I2C1_SDA */
#define MX_I2C1_SDA_Pin                        PB7
#define MX_I2C1_SDA_GPIO_Pin                   GPIO_PIN_7
#define MX_I2C1_SDA_GPIOx                      GPIOB
#define MX_I2C1_SDA_GPIO_Mode                  GPIO_MODE_AF_OD
#define MX_I2C1_SDA_GPIO_PuPd                  GPIO_NOPULL
#define MX_I2C1_SDA_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_I2C1_SDA_GPIO_AF                    GPIO_AF4_I2C1

/*------------------------------ SDIO           -----------------------------*/
#define MX_SDIO                                1

/* Pins */

/* SDIO_D2 */
#define MX_SDIO_D2_Pin                         PC10
#define MX_SDIO_D2_GPIO_Pin                    GPIO_PIN_10
#define MX_SDIO_D2_GPIOx                       GPIOC
#define MX_SDIO_D2_GPIO_Mode                   GPIO_MODE_AF_PP
#define MX_SDIO_D2_GPIO_PuPd                   GPIO_NOPULL
#define MX_SDIO_D2_GPIO_Speed                  GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDIO_D2_GPIO_AF                     GPIO_AF12_SDIO

/* SDIO_D3 */
#define MX_SDIO_D3_Pin                         PC11
#define MX_SDIO_D3_GPIO_Pin                    GPIO_PIN_11
#define MX_SDIO_D3_GPIOx                       GPIOC
#define MX_SDIO_D3_GPIO_Mode                   GPIO_MODE_AF_PP
#define MX_SDIO_D3_GPIO_PuPd                   GPIO_NOPULL
#define MX_SDIO_D3_GPIO_Speed                  GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDIO_D3_GPIO_AF                     GPIO_AF12_SDIO

/* SDIO_CK */
#define MX_SDIO_CK_Pin                         PC12
#define MX_SDIO_CK_GPIO_Pin                    GPIO_PIN_12
#define MX_SDIO_CK_GPIOx                       GPIOC
#define MX_SDIO_CK_GPIO_Mode                   GPIO_MODE_AF_PP
#define MX_SDIO_CK_GPIO_PuPd                   GPIO_NOPULL
#define MX_SDIO_CK_GPIO_Speed                  GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDIO_CK_GPIO_AF                     GPIO_AF12_SDIO

/* SDIO_D0 */
#define MX_SDIO_D0_Pin                         PC8
#define MX_SDIO_D0_GPIO_Pin                    GPIO_PIN_8
#define MX_SDIO_D0_GPIOx                       GPIOC
#define MX_SDIO_D0_GPIO_Mode                   GPIO_MODE_AF_PP
#define MX_SDIO_D0_GPIO_PuPd                   GPIO_NOPULL
#define MX_SDIO_D0_GPIO_Speed                  GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDIO_D0_GPIO_AF                     GPIO_AF12_SDIO

/* SDIO_D1 */
#define MX_SDIO_D1_Pin                         PC9
#define MX_SDIO_D1_GPIO_Pin                    GPIO_PIN_9
#define MX_SDIO_D1_GPIOx                       GPIOC
#define MX_SDIO_D1_GPIO_Mode                   GPIO_MODE_AF_PP
#define MX_SDIO_D1_GPIO_PuPd                   GPIO_NOPULL
#define MX_SDIO_D1_GPIO_Speed                  GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDIO_D1_GPIO_AF                     GPIO_AF12_SDIO

/* SDIO_CMD */
#define MX_SDIO_CMD_Pin                        PD2
#define MX_SDIO_CMD_GPIO_Pin                   GPIO_PIN_2
#define MX_SDIO_CMD_GPIOx                      GPIOD
#define MX_SDIO_CMD_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_SDIO_CMD_GPIO_PuPd                  GPIO_NOPULL
#define MX_SDIO_CMD_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDIO_CMD_GPIO_AF                    GPIO_AF12_SDIO

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

/*------------------------------ SPI2           -----------------------------*/
#define MX_SPI2                                1

/* Pins */

/* SPI2_SCK */
#define MX_SPI2_SCK_Pin                        PB13
#define MX_SPI2_SCK_GPIO_Pin                   GPIO_PIN_13
#define MX_SPI2_SCK_GPIOx                      GPIOB
#define MX_SPI2_SCK_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_SPI2_SCK_GPIO_PuPd                  GPIO_NOPULL
#define MX_SPI2_SCK_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SPI2_SCK_GPIO_AF                    GPIO_AF5_SPI2

/* SPI2_MISO */
#define MX_SPI2_MISO_Pin                       PB14
#define MX_SPI2_MISO_GPIO_Pin                  GPIO_PIN_14
#define MX_SPI2_MISO_GPIOx                     GPIOB
#define MX_SPI2_MISO_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_SPI2_MISO_GPIO_PuPd                 GPIO_NOPULL
#define MX_SPI2_MISO_GPIO_Speed                GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SPI2_MISO_GPIO_AF                   GPIO_AF5_SPI2

/* SPI2_MOSI */
#define MX_SPI2_MOSI_Pin                       PB15
#define MX_SPI2_MOSI_GPIO_Pin                  GPIO_PIN_15
#define MX_SPI2_MOSI_GPIOx                     GPIOB
#define MX_SPI2_MOSI_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_SPI2_MOSI_GPIO_PuPd                 GPIO_NOPULL
#define MX_SPI2_MOSI_GPIO_Speed                GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SPI2_MOSI_GPIO_AF                   GPIO_AF5_SPI2

/*------------------------------ USART1         -----------------------------*/
#define MX_USART1                              1

/* Virtual mode */
#define MX_USART1_VM                           VM_ASYNC
#define MX_USART1_VM_ASYNC                     1

/* Pins */

/* USART1_RX */
#define MX_USART1_RX_Pin                       PA10
#define MX_USART1_RX_GPIO_Pin                  GPIO_PIN_10
#define MX_USART1_RX_GPIOx                     GPIOA
#define MX_USART1_RX_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_USART1_RX_GPIO_PuPd                 GPIO_NOPULL
#define MX_USART1_RX_GPIO_Speed                GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USART1_RX_GPIO_AF                   GPIO_AF7_USART1

/* USART1_TX */
#define MX_USART1_TX_Pin                       PA9
#define MX_USART1_TX_GPIO_Pin                  GPIO_PIN_9
#define MX_USART1_TX_GPIOx                     GPIOA
#define MX_USART1_TX_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_USART1_TX_GPIO_PuPd                 GPIO_NOPULL
#define MX_USART1_TX_GPIO_Speed                GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USART1_TX_GPIO_AF                   GPIO_AF7_USART1

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

/*------------------------------ USB            -----------------------------*/
#define MX_USB                                 1

/* Pins */

/* USB_DM */
#define MX_USB_DM_Pin                          PA11

/* USB_DP */
#define MX_USB_DP_Pin                          PA12

#endif  /* __MX_DEVICE_H */
