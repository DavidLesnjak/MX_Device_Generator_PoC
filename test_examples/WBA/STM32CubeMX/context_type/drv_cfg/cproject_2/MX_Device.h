/******************************************************************************
 * File Name   : MX_Device.h
 * Date        : 05/12/2023 10:01:00
 * Description : STM32Cube MX parameter definitions
 * Note        : This file is generated with a generator out of the 
 *               STM32CubeMX project and its generated files (DO NOT EDIT!)
 ******************************************************************************/

 #ifndef __MX_DEVICE_H
 #define __MX_DEVICE_H

 
/*------------------------------ SPI3           -----------------------------*/
#define MX_SPI3                                1

/* Pins */

/* SPI3_SCK */
#define MX_SPI3_SCK_Pin                        PA0
#define MX_SPI3_SCK_GPIO_Pin                   GPIO_PIN_0
#define MX_SPI3_SCK_GPIOx                      GPIOA
#define MX_SPI3_SCK_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_SPI3_SCK_GPIO_PuPd                  GPIO_NOPULL
#define MX_SPI3_SCK_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_SPI3_SCK_GPIO_AF                    GPIO_AF6_SPI3

/* SPI3_MOSI */
#define MX_SPI3_MOSI_Pin                       PB8
#define MX_SPI3_MOSI_GPIO_Pin                  GPIO_PIN_8
#define MX_SPI3_MOSI_GPIOx                     GPIOB
#define MX_SPI3_MOSI_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_SPI3_MOSI_GPIO_PuPd                 GPIO_NOPULL
#define MX_SPI3_MOSI_GPIO_Speed                GPIO_SPEED_FREQ_LOW
#define MX_SPI3_MOSI_GPIO_AF                   GPIO_AF6_SPI3

/* SPI3_MISO */
#define MX_SPI3_MISO_Pin                       PB9
#define MX_SPI3_MISO_GPIO_Pin                  GPIO_PIN_9
#define MX_SPI3_MISO_GPIOx                     GPIOB
#define MX_SPI3_MISO_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_SPI3_MISO_GPIO_PuPd                 GPIO_NOPULL
#define MX_SPI3_MISO_GPIO_Speed                GPIO_SPEED_FREQ_LOW
#define MX_SPI3_MISO_GPIO_AF                   GPIO_AF6_SPI3

/*------------------------------ USART2         -----------------------------*/
#define MX_USART2                              1

/* Virtual mode */
#define MX_USART2_VM                           VM_ASYNC
#define MX_USART2_VM_ASYNC                     1

/* Pins */

/* USART2_RX */
#define MX_USART2_RX_Pin                       PA11
#define MX_USART2_RX_GPIO_Pin                  GPIO_PIN_11
#define MX_USART2_RX_GPIOx                     GPIOA
#define MX_USART2_RX_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_USART2_RX_GPIO_PuPd                 GPIO_NOPULL
#define MX_USART2_RX_GPIO_Speed                GPIO_SPEED_FREQ_LOW
#define MX_USART2_RX_GPIO_AF                   GPIO_AF3_USART2

/* USART2_TX */
#define MX_USART2_TX_Pin                       PA14
#define MX_USART2_TX_GPIO_Pin                  GPIO_PIN_14
#define MX_USART2_TX_GPIOx                     GPIOA
#define MX_USART2_TX_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_USART2_TX_GPIO_PuPd                 GPIO_NOPULL
#define MX_USART2_TX_GPIO_Speed                GPIO_SPEED_FREQ_LOW
#define MX_USART2_TX_GPIO_AF                   GPIO_AF3_USART2

/*------------------------------ I2C3           -----------------------------*/
#define MX_I2C3                                1

/* Pins */

/* I2C3_SCL */
#define MX_I2C3_SCL_Pin                        PA6
#define MX_I2C3_SCL_GPIO_Pin                   GPIO_PIN_6
#define MX_I2C3_SCL_GPIOx                      GPIOA
#define MX_I2C3_SCL_GPIO_Mode                  GPIO_MODE_AF_OD
#define MX_I2C3_SCL_GPIO_PuPd                  GPIO_NOPULL
#define MX_I2C3_SCL_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_I2C3_SCL_GPIO_AF                    GPIO_AF4_I2C3

/* I2C3_SDA */
#define MX_I2C3_SDA_Pin                        PA7
#define MX_I2C3_SDA_GPIO_Pin                   GPIO_PIN_7
#define MX_I2C3_SDA_GPIOx                      GPIOA
#define MX_I2C3_SDA_GPIO_Mode                  GPIO_MODE_AF_OD
#define MX_I2C3_SDA_GPIO_PuPd                  GPIO_NOPULL
#define MX_I2C3_SDA_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_I2C3_SDA_GPIO_AF                    GPIO_AF4_I2C3

#endif  /* __MX_DEVICE_H */
