/******************************************************************************
 * File Name   : MX_Device.h
 * Date        : 11/12/2023 14:20:36
 * Description : STM32Cube MX parameter definitions
 * Note        : This file is generated with a generator out of the
 *               STM32CubeMX project and its generated files (DO NOT EDIT!)
 ******************************************************************************/

 #ifndef __MX_DEVICE_H
 #define __MX_DEVICE_H

 
/*------------------------------ CAN            -----------------------------*/
#define MX_CAN                                 1

/* Pins */

/* CAN_RX */
#define MX_CAN_RX_Pin                          PD0
#define MX_CAN_RX_GPIO_Pin                     GPIO_PIN_0
#define MX_CAN_RX_GPIOx                        GPIOD
#define MX_CAN_RX_GPIO_Mode                    GPIO_MODE_AF_PP
#define MX_CAN_RX_GPIO_PuPd                    GPIO_NOPULL
#define MX_CAN_RX_GPIO_Speed                   GPIO_SPEED_FREQ_LOW
#define MX_CAN_RX_GPIO_AF                      GPIO_AF0_CAN

/* CAN_TX */
#define MX_CAN_TX_Pin                          PD1
#define MX_CAN_TX_GPIO_Pin                     GPIO_PIN_1
#define MX_CAN_TX_GPIOx                        GPIOD
#define MX_CAN_TX_GPIO_Mode                    GPIO_MODE_AF_PP
#define MX_CAN_TX_GPIO_PuPd                    GPIO_NOPULL
#define MX_CAN_TX_GPIO_Speed                   GPIO_SPEED_FREQ_LOW
#define MX_CAN_TX_GPIO_AF                      GPIO_AF0_CAN

/*------------------------------ USART1         -----------------------------*/
#define MX_USART1                              1

/* Virtual mode */
#define MX_USART1_VM                           VM_SMARTCARD
#define MX_USART1_VM_SMARTCARD                 1

/* Pins */

/* USART1_CK */
#define MX_USART1_CK_Pin                       PA8
#define MX_USART1_CK_GPIO_Pin                  GPIO_PIN_8
#define MX_USART1_CK_GPIOx                     GPIOA
#define MX_USART1_CK_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_USART1_CK_GPIO_PuPd                 GPIO_NOPULL
#define MX_USART1_CK_GPIO_Speed                GPIO_SPEED_FREQ_LOW
#define MX_USART1_CK_GPIO_AF                   GPIO_AF1_USART1

/* USART1_TX */
#define MX_USART1_TX_Pin                       PA9
#define MX_USART1_TX_GPIO_Pin                  GPIO_PIN_9
#define MX_USART1_TX_GPIOx                     GPIOA
#define MX_USART1_TX_GPIO_Mode                 GPIO_MODE_AF_OD
#define MX_USART1_TX_GPIO_PuPd                 GPIO_PULLUP
#define MX_USART1_TX_GPIO_Speed                GPIO_SPEED_FREQ_LOW
#define MX_USART1_TX_GPIO_AF                   GPIO_AF1_USART1

/*------------------------------ USART2         -----------------------------*/
#define MX_USART2                              1

/* Virtual mode */
#define MX_USART2_VM                           VM_ASYNC
#define MX_USART2_VM_ASYNC                     1

/* Pins */

/* USART2_CTS */
#define MX_USART2_CTS_Pin                      PD3
#define MX_USART2_CTS_GPIO_Pin                 GPIO_PIN_3
#define MX_USART2_CTS_GPIOx                    GPIOD
#define MX_USART2_CTS_GPIO_Mode                GPIO_MODE_AF_PP
#define MX_USART2_CTS_GPIO_PuPd                GPIO_NOPULL
#define MX_USART2_CTS_GPIO_Speed               GPIO_SPEED_FREQ_LOW
#define MX_USART2_CTS_GPIO_AF                  GPIO_AF0_USART2

/* USART2_RTS */
#define MX_USART2_RTS_Pin                      PD4
#define MX_USART2_RTS_GPIO_Pin                 GPIO_PIN_4
#define MX_USART2_RTS_GPIOx                    GPIOD
#define MX_USART2_RTS_GPIO_Mode                GPIO_MODE_AF_PP
#define MX_USART2_RTS_GPIO_PuPd                GPIO_NOPULL
#define MX_USART2_RTS_GPIO_Speed               GPIO_SPEED_FREQ_LOW
#define MX_USART2_RTS_GPIO_AF                  GPIO_AF0_USART2

/* USART2_TX */
#define MX_USART2_TX_Pin                       PD5
#define MX_USART2_TX_GPIO_Pin                  GPIO_PIN_5
#define MX_USART2_TX_GPIOx                     GPIOD
#define MX_USART2_TX_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_USART2_TX_GPIO_PuPd                 GPIO_NOPULL
#define MX_USART2_TX_GPIO_Speed                GPIO_SPEED_FREQ_LOW
#define MX_USART2_TX_GPIO_AF                   GPIO_AF0_USART2

/* USART2_RX */
#define MX_USART2_RX_Pin                       PD6
#define MX_USART2_RX_GPIO_Pin                  GPIO_PIN_6
#define MX_USART2_RX_GPIOx                     GPIOD
#define MX_USART2_RX_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_USART2_RX_GPIO_PuPd                 GPIO_NOPULL
#define MX_USART2_RX_GPIO_Speed                GPIO_SPEED_FREQ_LOW
#define MX_USART2_RX_GPIO_AF                   GPIO_AF0_USART2

/*------------------------------ USB            -----------------------------*/
#define MX_USB                                 1

/* Pins */

/* USB_DM */
#define MX_USB_DM_Pin                          PA11

/* USB_DP */
#define MX_USB_DP_Pin                          PA12

/*------------------------------ I2C1           -----------------------------*/
#define MX_I2C1                                1

/* Pins */

/* I2C1_SCL */
#define MX_I2C1_SCL_Pin                        PB6

/* I2C1_SDA */
#define MX_I2C1_SDA_Pin                        PB7

/*------------------------------ I2C2           -----------------------------*/
#define MX_I2C2                                1

/* Pins */

/* I2C2_SCL */
#define MX_I2C2_SCL_Pin                        PB13
#define MX_I2C2_SCL_GPIO_Pin                   GPIO_PIN_13
#define MX_I2C2_SCL_GPIOx                      GPIOB
#define MX_I2C2_SCL_GPIO_Mode                  GPIO_MODE_AF_OD
#define MX_I2C2_SCL_GPIO_PuPd                  GPIO_PULLUP
#define MX_I2C2_SCL_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_I2C2_SCL_GPIO_AF                    GPIO_AF5_I2C2

/* I2C2_SDA */
#define MX_I2C2_SDA_Pin                        PB14
#define MX_I2C2_SDA_GPIO_Pin                   GPIO_PIN_14
#define MX_I2C2_SDA_GPIOx                      GPIOB
#define MX_I2C2_SDA_GPIO_Mode                  GPIO_MODE_AF_OD
#define MX_I2C2_SDA_GPIO_PuPd                  GPIO_PULLUP
#define MX_I2C2_SDA_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_I2C2_SDA_GPIO_AF                    GPIO_AF5_I2C2

/*------------------------------ SPI1           -----------------------------*/
#define MX_SPI1                                1

/* Pins */

/* SPI1_SCK */
#define MX_SPI1_SCK_Pin                        PB3
#define MX_SPI1_SCK_GPIO_Pin                   GPIO_PIN_3
#define MX_SPI1_SCK_GPIOx                      GPIOB
#define MX_SPI1_SCK_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_SPI1_SCK_GPIO_PuPd                  GPIO_NOPULL
#define MX_SPI1_SCK_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_SPI1_SCK_GPIO_AF                    GPIO_AF0_SPI1

/* SPI1_MISO */
#define MX_SPI1_MISO_Pin                       PE14
#define MX_SPI1_MISO_GPIO_Pin                  GPIO_PIN_14
#define MX_SPI1_MISO_GPIOx                     GPIOE
#define MX_SPI1_MISO_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_SPI1_MISO_GPIO_PuPd                 GPIO_NOPULL
#define MX_SPI1_MISO_GPIO_Speed                GPIO_SPEED_FREQ_LOW
#define MX_SPI1_MISO_GPIO_AF                   GPIO_AF1_SPI1

/* SPI1_MOSI */
#define MX_SPI1_MOSI_Pin                       PE15
#define MX_SPI1_MOSI_GPIO_Pin                  GPIO_PIN_15
#define MX_SPI1_MOSI_GPIOx                     GPIOE
#define MX_SPI1_MOSI_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_SPI1_MOSI_GPIO_PuPd                 GPIO_NOPULL
#define MX_SPI1_MOSI_GPIO_Speed                GPIO_SPEED_FREQ_LOW
#define MX_SPI1_MOSI_GPIO_AF                   GPIO_AF1_SPI1

#endif  /* __MX_DEVICE_H */
