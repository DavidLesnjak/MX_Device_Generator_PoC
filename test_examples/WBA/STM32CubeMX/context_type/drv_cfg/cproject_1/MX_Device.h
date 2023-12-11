/******************************************************************************
 * File Name   : MX_Device.h
 * Date        : 11/12/2023 14:20:52
 * Description : STM32Cube MX parameter definitions
 * Note        : This file is generated with a generator out of the
 *               STM32CubeMX project and its generated files (DO NOT EDIT!)
 ******************************************************************************/

 #ifndef __MX_DEVICE_H
 #define __MX_DEVICE_H

 
/*------------------------------ SPI1           -----------------------------*/
#define MX_SPI1                                1

/* Pins */

/* SPI1_MOSI */
#define MX_SPI1_MOSI_Pin                       PA15
#define MX_SPI1_MOSI_GPIO_Pin                  GPIO_PIN_15
#define MX_SPI1_MOSI_GPIOx                     GPIOA
#define MX_SPI1_MOSI_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_SPI1_MOSI_GPIO_PuPd                 GPIO_NOPULL
#define MX_SPI1_MOSI_GPIO_Speed                GPIO_SPEED_FREQ_LOW
#define MX_SPI1_MOSI_GPIO_AF                   GPIO_AF5_SPI1

/* SPI1_MISO */
#define MX_SPI1_MISO_Pin                       PB3
#define MX_SPI1_MISO_GPIO_Pin                  GPIO_PIN_3
#define MX_SPI1_MISO_GPIOx                     GPIOB
#define MX_SPI1_MISO_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_SPI1_MISO_GPIO_PuPd                 GPIO_NOPULL
#define MX_SPI1_MISO_GPIO_Speed                GPIO_SPEED_FREQ_LOW
#define MX_SPI1_MISO_GPIO_AF                   GPIO_AF5_SPI1

/* SPI1_SCK */
#define MX_SPI1_SCK_Pin                        PB4
#define MX_SPI1_SCK_GPIO_Pin                   GPIO_PIN_4
#define MX_SPI1_SCK_GPIOx                      GPIOB
#define MX_SPI1_SCK_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_SPI1_SCK_GPIO_PuPd                  GPIO_NOPULL
#define MX_SPI1_SCK_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_SPI1_SCK_GPIO_AF                    GPIO_AF5_SPI1

/*------------------------------ USART1         -----------------------------*/
#define MX_USART1                              1

/* Virtual mode */
#define MX_USART1_VM                           VM_ASYNC
#define MX_USART1_VM_ASYNC                     1

/* Pins */

/* USART1_RX */
#define MX_USART1_RX_Pin                       PA8
#define MX_USART1_RX_GPIO_Pin                  GPIO_PIN_8
#define MX_USART1_RX_GPIOx                     GPIOA
#define MX_USART1_RX_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_USART1_RX_GPIO_PuPd                 GPIO_NOPULL
#define MX_USART1_RX_GPIO_Speed                GPIO_SPEED_FREQ_LOW
#define MX_USART1_RX_GPIO_AF                   GPIO_AF7_USART1

/* USART1_TX */
#define MX_USART1_TX_Pin                       PB12
#define MX_USART1_TX_GPIO_Pin                  GPIO_PIN_12
#define MX_USART1_TX_GPIOx                     GPIOB
#define MX_USART1_TX_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_USART1_TX_GPIO_PuPd                 GPIO_NOPULL
#define MX_USART1_TX_GPIO_Speed                GPIO_SPEED_FREQ_LOW
#define MX_USART1_TX_GPIO_AF                   GPIO_AF7_USART1

/*------------------------------ I2C1           -----------------------------*/
#define MX_I2C1                                1

/* Pins */

/* I2C1_SDA */
#define MX_I2C1_SDA_Pin                        PB1
#define MX_I2C1_SDA_GPIO_Pin                   GPIO_PIN_1
#define MX_I2C1_SDA_GPIOx                      GPIOB
#define MX_I2C1_SDA_GPIO_Mode                  GPIO_MODE_AF_OD
#define MX_I2C1_SDA_GPIO_PuPd                  GPIO_NOPULL
#define MX_I2C1_SDA_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_I2C1_SDA_GPIO_AF                    GPIO_AF4_I2C1

/* I2C1_SCL */
#define MX_I2C1_SCL_Pin                        PB2
#define MX_I2C1_SCL_GPIO_Pin                   GPIO_PIN_2
#define MX_I2C1_SCL_GPIOx                      GPIOB
#define MX_I2C1_SCL_GPIO_Mode                  GPIO_MODE_AF_OD
#define MX_I2C1_SCL_GPIO_PuPd                  GPIO_NOPULL
#define MX_I2C1_SCL_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_I2C1_SCL_GPIO_AF                    GPIO_AF4_I2C1

/*------------------------------ LPUART1        -----------------------------*/
#define MX_LPUART1                             1

/* Pins */

/* LPUART1_RX */
#define MX_LPUART1_RX_Pin                      PA1
#define MX_LPUART1_RX_GPIO_Pin                 GPIO_PIN_1
#define MX_LPUART1_RX_GPIOx                    GPIOA
#define MX_LPUART1_RX_GPIO_Mode                GPIO_MODE_AF_PP
#define MX_LPUART1_RX_GPIO_PuPd                GPIO_NOPULL
#define MX_LPUART1_RX_GPIO_Speed               GPIO_SPEED_FREQ_LOW
#define MX_LPUART1_RX_GPIO_AF                  GPIO_AF8_LPUART1

/* LPUART1_TX */
#define MX_LPUART1_TX_Pin                      PB11
#define MX_LPUART1_TX_GPIO_Pin                 GPIO_PIN_11
#define MX_LPUART1_TX_GPIOx                    GPIOB
#define MX_LPUART1_TX_GPIO_Mode                GPIO_MODE_AF_PP
#define MX_LPUART1_TX_GPIO_PuPd                GPIO_NOPULL
#define MX_LPUART1_TX_GPIO_Speed               GPIO_SPEED_FREQ_LOW
#define MX_LPUART1_TX_GPIO_AF                  GPIO_AF8_LPUART1

#endif  /* __MX_DEVICE_H */
