/******************************************************************************
 * File Name   : MX_Device.h
 * Date        : 11/12/2023 14:20:46
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
#define MX_I2C1_SDA_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_I2C1_SDA_GPIO_AF                    GPIO_AF6_I2C1

/* I2C1_SCL */
#define MX_I2C1_SCL_Pin                        PA9
#define MX_I2C1_SCL_GPIO_Pin                   GPIO_PIN_9
#define MX_I2C1_SCL_GPIOx                      GPIOA
#define MX_I2C1_SCL_GPIO_Mode                  GPIO_MODE_AF_OD
#define MX_I2C1_SCL_GPIO_PuPd                  GPIO_NOPULL
#define MX_I2C1_SCL_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_I2C1_SCL_GPIO_AF                    GPIO_AF6_I2C1

/*------------------------------ I2C3           -----------------------------*/
#define MX_I2C3                                1

/* Pins */

/* I2C3_SMBA */
#define MX_I2C3_SMBA_Pin                       PB2
#define MX_I2C3_SMBA_GPIO_Pin                  GPIO_PIN_2
#define MX_I2C3_SMBA_GPIOx                     GPIOB
#define MX_I2C3_SMBA_GPIO_Mode                 GPIO_MODE_AF_OD
#define MX_I2C3_SMBA_GPIO_PuPd                 GPIO_NOPULL
#define MX_I2C3_SMBA_GPIO_Speed                GPIO_SPEED_FREQ_VERY_HIGH
#define MX_I2C3_SMBA_GPIO_AF                   GPIO_AF7_I2C3

/* I2C3_SCL */
#define MX_I2C3_SCL_Pin                        PC0
#define MX_I2C3_SCL_GPIO_Pin                   GPIO_PIN_0
#define MX_I2C3_SCL_GPIOx                      GPIOC
#define MX_I2C3_SCL_GPIO_Mode                  GPIO_MODE_AF_OD
#define MX_I2C3_SCL_GPIO_PuPd                  GPIO_NOPULL
#define MX_I2C3_SCL_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_I2C3_SCL_GPIO_AF                    GPIO_AF7_I2C3

/* I2C3_SDA */
#define MX_I2C3_SDA_Pin                        PC1
#define MX_I2C3_SDA_GPIO_Pin                   GPIO_PIN_1
#define MX_I2C3_SDA_GPIOx                      GPIOC
#define MX_I2C3_SDA_GPIO_Mode                  GPIO_MODE_AF_OD
#define MX_I2C3_SDA_GPIO_PuPd                  GPIO_NOPULL
#define MX_I2C3_SDA_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_I2C3_SDA_GPIO_AF                    GPIO_AF7_I2C3

/*------------------------------ LPUART1        -----------------------------*/
#define MX_LPUART1                             1

/* Pins */

/* LPUART1_TX */
#define MX_LPUART1_TX_Pin                      PA2
#define MX_LPUART1_TX_GPIO_Pin                 GPIO_PIN_2
#define MX_LPUART1_TX_GPIOx                    GPIOA
#define MX_LPUART1_TX_GPIO_Mode                GPIO_MODE_AF_PP
#define MX_LPUART1_TX_GPIO_PuPd                GPIO_NOPULL
#define MX_LPUART1_TX_GPIO_Speed               GPIO_SPEED_FREQ_VERY_HIGH
#define MX_LPUART1_TX_GPIO_AF                  GPIO_AF6_LPUART1

/* LPUART1_RX */
#define MX_LPUART1_RX_Pin                      PA3
#define MX_LPUART1_RX_GPIO_Pin                 GPIO_PIN_3
#define MX_LPUART1_RX_GPIOx                    GPIOA
#define MX_LPUART1_RX_GPIO_Mode                GPIO_MODE_AF_PP
#define MX_LPUART1_RX_GPIO_PuPd                GPIO_NOPULL
#define MX_LPUART1_RX_GPIO_Speed               GPIO_SPEED_FREQ_VERY_HIGH
#define MX_LPUART1_RX_GPIO_AF                  GPIO_AF6_LPUART1

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
#define MX_SPI1_SCK_GPIO_AF                    GPIO_AF0_SPI1

/* SPI1_MISO */
#define MX_SPI1_MISO_Pin                       PA6
#define MX_SPI1_MISO_GPIO_Pin                  GPIO_PIN_6
#define MX_SPI1_MISO_GPIOx                     GPIOA
#define MX_SPI1_MISO_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_SPI1_MISO_GPIO_PuPd                 GPIO_NOPULL
#define MX_SPI1_MISO_GPIO_Speed                GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SPI1_MISO_GPIO_AF                   GPIO_AF0_SPI1

/* SPI1_MOSI */
#define MX_SPI1_MOSI_Pin                       PA7
#define MX_SPI1_MOSI_GPIO_Pin                  GPIO_PIN_7
#define MX_SPI1_MOSI_GPIOx                     GPIOA
#define MX_SPI1_MOSI_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_SPI1_MOSI_GPIO_PuPd                 GPIO_NOPULL
#define MX_SPI1_MOSI_GPIO_Speed                GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SPI1_MOSI_GPIO_AF                   GPIO_AF0_SPI1

/*------------------------------ USART1         -----------------------------*/
#define MX_USART1                              1

/* Virtual mode */
#define MX_USART1_VM                           VM_ASYNC
#define MX_USART1_VM_ASYNC                     1

/* Pins */

/* USART1_TX */
#define MX_USART1_TX_Pin                       PB6
#define MX_USART1_TX_GPIO_Pin                  GPIO_PIN_6
#define MX_USART1_TX_GPIOx                     GPIOB
#define MX_USART1_TX_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_USART1_TX_GPIO_PuPd                 GPIO_NOPULL
#define MX_USART1_TX_GPIO_Speed                GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USART1_TX_GPIO_AF                   GPIO_AF0_USART1

/* USART1_RX */
#define MX_USART1_RX_Pin                       PB7
#define MX_USART1_RX_GPIO_Pin                  GPIO_PIN_7
#define MX_USART1_RX_GPIOx                     GPIOB
#define MX_USART1_RX_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_USART1_RX_GPIO_PuPd                 GPIO_NOPULL
#define MX_USART1_RX_GPIO_Speed                GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USART1_RX_GPIO_AF                   GPIO_AF0_USART1

/*------------------------------ USB            -----------------------------*/
#define MX_USB                                 1

/* Pins */

/* USB_DM */
#define MX_USB_DM_Pin                          PA11

/* USB_DP */
#define MX_USB_DP_Pin                          PA12

#endif  /* __MX_DEVICE_H */
