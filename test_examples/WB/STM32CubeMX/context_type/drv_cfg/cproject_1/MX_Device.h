/******************************************************************************
 * File Name   : MX_Device.h
 * Date        : 12/12/2023 10:12:24
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
#define MX_I2C1_SCL_Pin                        PB8
#define MX_I2C1_SCL_GPIO_Pin                   GPIO_PIN_8
#define MX_I2C1_SCL_GPIOx                      GPIOB
#define MX_I2C1_SCL_GPIO_Mode                  GPIO_MODE_AF_OD
#define MX_I2C1_SCL_GPIO_PuPd                  GPIO_NOPULL
#define MX_I2C1_SCL_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_I2C1_SCL_GPIO_AF                    GPIO_AF4_I2C1

/* I2C1_SDA */
#define MX_I2C1_SDA_Pin                        PB9
#define MX_I2C1_SDA_GPIO_Pin                   GPIO_PIN_9
#define MX_I2C1_SDA_GPIOx                      GPIOB
#define MX_I2C1_SDA_GPIO_Mode                  GPIO_MODE_AF_OD
#define MX_I2C1_SDA_GPIO_PuPd                  GPIO_NOPULL
#define MX_I2C1_SDA_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_I2C1_SDA_GPIO_AF                    GPIO_AF4_I2C1

/*------------------------------ I2C3           -----------------------------*/
#define MX_I2C3                                1

/* Pins */

/* I2C3_SCL */
#define MX_I2C3_SCL_Pin                        PC0
#define MX_I2C3_SCL_GPIO_Pin                   GPIO_PIN_0
#define MX_I2C3_SCL_GPIOx                      GPIOC
#define MX_I2C3_SCL_GPIO_Mode                  GPIO_MODE_AF_OD
#define MX_I2C3_SCL_GPIO_PuPd                  GPIO_NOPULL
#define MX_I2C3_SCL_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_I2C3_SCL_GPIO_AF                    GPIO_AF4_I2C3

/* I2C3_SDA */
#define MX_I2C3_SDA_Pin                        PC1
#define MX_I2C3_SDA_GPIO_Pin                   GPIO_PIN_1
#define MX_I2C3_SDA_GPIOx                      GPIOC
#define MX_I2C3_SDA_GPIO_Mode                  GPIO_MODE_AF_OD
#define MX_I2C3_SDA_GPIO_PuPd                  GPIO_NOPULL
#define MX_I2C3_SDA_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_I2C3_SDA_GPIO_AF                    GPIO_AF4_I2C3

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
#define MX_LPUART1_TX_Pin                      PA2
#define MX_LPUART1_TX_GPIO_Pin                 GPIO_PIN_2
#define MX_LPUART1_TX_GPIOx                    GPIOA
#define MX_LPUART1_TX_GPIO_Mode                GPIO_MODE_AF_PP
#define MX_LPUART1_TX_GPIO_PuPd                GPIO_NOPULL
#define MX_LPUART1_TX_GPIO_Speed               GPIO_SPEED_FREQ_LOW
#define MX_LPUART1_TX_GPIO_AF                  GPIO_AF8_LPUART1

/* LPUART1_RX */
#define MX_LPUART1_RX_Pin                      PA3
#define MX_LPUART1_RX_GPIO_Pin                 GPIO_PIN_3
#define MX_LPUART1_RX_GPIOx                    GPIOA
#define MX_LPUART1_RX_GPIO_Mode                GPIO_MODE_AF_PP
#define MX_LPUART1_RX_GPIO_PuPd                GPIO_NOPULL
#define MX_LPUART1_RX_GPIO_Speed               GPIO_SPEED_FREQ_LOW
#define MX_LPUART1_RX_GPIO_AF                  GPIO_AF8_LPUART1

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
#define MX_SPI1_SCK_GPIO_AF                    GPIO_AF5_SPI1

/* SPI1_MISO */
#define MX_SPI1_MISO_Pin                       PA6
#define MX_SPI1_MISO_GPIO_Pin                  GPIO_PIN_6
#define MX_SPI1_MISO_GPIOx                     GPIOA
#define MX_SPI1_MISO_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_SPI1_MISO_GPIO_PuPd                 GPIO_NOPULL
#define MX_SPI1_MISO_GPIO_Speed                GPIO_SPEED_FREQ_LOW
#define MX_SPI1_MISO_GPIO_AF                   GPIO_AF5_SPI1

/* SPI1_MOSI */
#define MX_SPI1_MOSI_Pin                       PA7
#define MX_SPI1_MOSI_GPIO_Pin                  GPIO_PIN_7
#define MX_SPI1_MOSI_GPIOx                     GPIOA
#define MX_SPI1_MOSI_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_SPI1_MOSI_GPIO_PuPd                 GPIO_NOPULL
#define MX_SPI1_MOSI_GPIO_Speed                GPIO_SPEED_FREQ_LOW
#define MX_SPI1_MOSI_GPIO_AF                   GPIO_AF5_SPI1

/*------------------------------ SPI2           -----------------------------*/
#define MX_SPI2                                1

/* Pins */

/* SPI2_SCK */
#define MX_SPI2_SCK_Pin                        PB10
#define MX_SPI2_SCK_GPIO_Pin                   GPIO_PIN_10
#define MX_SPI2_SCK_GPIOx                      GPIOB
#define MX_SPI2_SCK_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_SPI2_SCK_GPIO_PuPd                  GPIO_NOPULL
#define MX_SPI2_SCK_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_SPI2_SCK_GPIO_AF                    GPIO_AF5_SPI2

/* SPI2_MISO */
#define MX_SPI2_MISO_Pin                       PC2
#define MX_SPI2_MISO_GPIO_Pin                  GPIO_PIN_2
#define MX_SPI2_MISO_GPIOx                     GPIOC
#define MX_SPI2_MISO_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_SPI2_MISO_GPIO_PuPd                 GPIO_NOPULL
#define MX_SPI2_MISO_GPIO_Speed                GPIO_SPEED_FREQ_LOW
#define MX_SPI2_MISO_GPIO_AF                   GPIO_AF5_SPI2

/* SPI2_MOSI */
#define MX_SPI2_MOSI_Pin                       PC3
#define MX_SPI2_MOSI_GPIO_Pin                  GPIO_PIN_3
#define MX_SPI2_MOSI_GPIOx                     GPIOC
#define MX_SPI2_MOSI_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_SPI2_MOSI_GPIO_PuPd                 GPIO_NOPULL
#define MX_SPI2_MOSI_GPIO_Speed                GPIO_SPEED_FREQ_LOW
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
#define MX_USART1_RX_GPIO_Speed                GPIO_SPEED_FREQ_LOW
#define MX_USART1_RX_GPIO_AF                   GPIO_AF7_USART1

/* USART1_TX */
#define MX_USART1_TX_Pin                       PA9
#define MX_USART1_TX_GPIO_Pin                  GPIO_PIN_9
#define MX_USART1_TX_GPIOx                     GPIOA
#define MX_USART1_TX_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_USART1_TX_GPIO_PuPd                 GPIO_NOPULL
#define MX_USART1_TX_GPIO_Speed                GPIO_SPEED_FREQ_LOW
#define MX_USART1_TX_GPIO_AF                   GPIO_AF7_USART1

#endif  /* __MX_DEVICE_H */
