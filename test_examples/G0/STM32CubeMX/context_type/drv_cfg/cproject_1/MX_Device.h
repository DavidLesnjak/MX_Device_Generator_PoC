/******************************************************************************
 * File Name   : MX_Device.h
 * Date        : 12/12/2023 10:12:18
 * Description : STM32Cube MX parameter definitions
 * Note        : This file is generated with a generator out of the
 *               STM32CubeMX project and its generated files (DO NOT EDIT!)
 ******************************************************************************/

 #ifndef __MX_DEVICE_H
 #define __MX_DEVICE_H

 
/*------------------------------ I2C1           -----------------------------*/
#define MX_I2C1                                1

/* Pins */

/* I2C1_SDA */
#define MX_I2C1_SDA_Pin                        PA10
#define MX_I2C1_SDA_GPIO_Pin                   GPIO_PIN_10
#define MX_I2C1_SDA_GPIOx                      GPIOA
#define MX_I2C1_SDA_GPIO_Mode                  GPIO_MODE_AF_OD
#define MX_I2C1_SDA_GPIO_PuPd                  GPIO_NOPULL
#define MX_I2C1_SDA_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_I2C1_SDA_GPIO_AF                    GPIO_AF6_I2C1

/* I2C1_SCL */
#define MX_I2C1_SCL_Pin                        PA9
#define MX_I2C1_SCL_GPIO_Pin                   GPIO_PIN_9
#define MX_I2C1_SCL_GPIOx                      GPIOA
#define MX_I2C1_SCL_GPIO_Mode                  GPIO_MODE_AF_OD
#define MX_I2C1_SCL_GPIO_PuPd                  GPIO_NOPULL
#define MX_I2C1_SCL_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_I2C1_SCL_GPIO_AF                    GPIO_AF6_I2C1

/*------------------------------ SPI1           -----------------------------*/
#define MX_SPI1                                1

/* Pins */

/* SPI1_SCK */
#define MX_SPI1_SCK_Pin                        PA1
#define MX_SPI1_SCK_GPIO_Pin                   GPIO_PIN_1
#define MX_SPI1_SCK_GPIOx                      GPIOA
#define MX_SPI1_SCK_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_SPI1_SCK_GPIO_PuPd                  GPIO_NOPULL
#define MX_SPI1_SCK_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_SPI1_SCK_GPIO_AF                    GPIO_AF0_SPI1

/* SPI1_MOSI */
#define MX_SPI1_MOSI_Pin                       PA2
#define MX_SPI1_MOSI_GPIO_Pin                  GPIO_PIN_2
#define MX_SPI1_MOSI_GPIOx                     GPIOA
#define MX_SPI1_MOSI_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_SPI1_MOSI_GPIO_PuPd                 GPIO_NOPULL
#define MX_SPI1_MOSI_GPIO_Speed                GPIO_SPEED_FREQ_LOW
#define MX_SPI1_MOSI_GPIO_AF                   GPIO_AF0_SPI1

/*------------------------------ USART1         -----------------------------*/
#define MX_USART1                              1

/* Virtual mode */
#define MX_USART1_VM                           VM_SYNC
#define MX_USART1_VM_SYNC                      1

/* Pins */

/* USART1_CK */
#define MX_USART1_CK_Pin                       PA12
#define MX_USART1_CK_GPIO_Pin                  GPIO_PIN_12
#define MX_USART1_CK_GPIOx                     GPIOA
#define MX_USART1_CK_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_USART1_CK_GPIO_PuPd                 GPIO_NOPULL
#define MX_USART1_CK_GPIO_Speed                GPIO_SPEED_FREQ_LOW
#define MX_USART1_CK_GPIO_AF                   GPIO_AF1_USART1

/* USART1_TX */
#define MX_USART1_TX_Pin                       PC4
#define MX_USART1_TX_GPIO_Pin                  GPIO_PIN_4
#define MX_USART1_TX_GPIOx                     GPIOC
#define MX_USART1_TX_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_USART1_TX_GPIO_PuPd                 GPIO_NOPULL
#define MX_USART1_TX_GPIO_Speed                GPIO_SPEED_FREQ_LOW
#define MX_USART1_TX_GPIO_AF                   GPIO_AF1_USART1

/* USART1_RX */
#define MX_USART1_RX_Pin                       PC5
#define MX_USART1_RX_GPIO_Pin                  GPIO_PIN_5
#define MX_USART1_RX_GPIOx                     GPIOC
#define MX_USART1_RX_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_USART1_RX_GPIO_PuPd                 GPIO_NOPULL
#define MX_USART1_RX_GPIO_Speed                GPIO_SPEED_FREQ_LOW
#define MX_USART1_RX_GPIO_AF                   GPIO_AF1_USART1

/*------------------------------ USART2         -----------------------------*/
#define MX_USART2                              1

/* Virtual mode */
#define MX_USART2_VM                           VM_IRDA
#define MX_USART2_VM_IRDA                      1

/* Pins */

/* USART2_TX */
#define MX_USART2_TX_Pin                       PA14
#define MX_USART2_TX_GPIO_Pin                  GPIO_PIN_14
#define MX_USART2_TX_GPIOx                     GPIOA
#define MX_USART2_TX_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_USART2_TX_GPIO_PuPd                 GPIO_NOPULL
#define MX_USART2_TX_GPIO_Speed                GPIO_SPEED_FREQ_LOW
#define MX_USART2_TX_GPIO_AF                   GPIO_AF1_USART2

/* USART2_RX */
#define MX_USART2_RX_Pin                       PA3
#define MX_USART2_RX_GPIO_Pin                  GPIO_PIN_3
#define MX_USART2_RX_GPIOx                     GPIOA
#define MX_USART2_RX_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_USART2_RX_GPIO_PuPd                 GPIO_NOPULL
#define MX_USART2_RX_GPIO_Speed                GPIO_SPEED_FREQ_LOW
#define MX_USART2_RX_GPIO_AF                   GPIO_AF1_USART2

#endif  /* __MX_DEVICE_H */
