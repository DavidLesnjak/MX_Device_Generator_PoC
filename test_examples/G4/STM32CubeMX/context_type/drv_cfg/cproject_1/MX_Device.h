/******************************************************************************
 * File Name   : MX_Device.h
 * Date        : 05/12/2023 10:00:58
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
#define MX_FDCAN1_TX_GPIO_PuPd                 GPIO_PULLUP
#define MX_FDCAN1_TX_GPIO_Speed                GPIO_SPEED_FREQ_VERY_HIGH
#define MX_FDCAN1_TX_GPIO_AF                   GPIO_AF9_FDCAN1

/*------------------------------ FDCAN2         -----------------------------*/
#define MX_FDCAN2                              1

/* Pins */

/* FDCAN2_RX */
#define MX_FDCAN2_RX_Pin                       PB5
#define MX_FDCAN2_RX_GPIO_Pin                  GPIO_PIN_5
#define MX_FDCAN2_RX_GPIOx                     GPIOB
#define MX_FDCAN2_RX_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_FDCAN2_RX_GPIO_PuPd                 GPIO_NOPULL
#define MX_FDCAN2_RX_GPIO_Speed                GPIO_SPEED_FREQ_LOW
#define MX_FDCAN2_RX_GPIO_AF                   GPIO_AF9_FDCAN2

/* FDCAN2_TX */
#define MX_FDCAN2_TX_Pin                       PB6
#define MX_FDCAN2_TX_GPIO_Pin                  GPIO_PIN_6
#define MX_FDCAN2_TX_GPIOx                     GPIOB
#define MX_FDCAN2_TX_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_FDCAN2_TX_GPIO_PuPd                 GPIO_NOPULL
#define MX_FDCAN2_TX_GPIO_Speed                GPIO_SPEED_FREQ_LOW
#define MX_FDCAN2_TX_GPIO_AF                   GPIO_AF9_FDCAN2

/*------------------------------ UART4          -----------------------------*/
#define MX_UART4                               1

/* Pins */

/* UART4_TX */
#define MX_UART4_TX_Pin                        PC10
#define MX_UART4_TX_GPIO_Pin                   GPIO_PIN_10
#define MX_UART4_TX_GPIOx                      GPIOC
#define MX_UART4_TX_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_UART4_TX_GPIO_PuPd                  GPIO_NOPULL
#define MX_UART4_TX_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_UART4_TX_GPIO_AF                    GPIO_AF5_UART4

/* UART4_RX */
#define MX_UART4_RX_Pin                        PC11
#define MX_UART4_RX_GPIO_Pin                   GPIO_PIN_11
#define MX_UART4_RX_GPIOx                      GPIOC
#define MX_UART4_RX_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_UART4_RX_GPIO_PuPd                  GPIO_NOPULL
#define MX_UART4_RX_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_UART4_RX_GPIO_AF                    GPIO_AF5_UART4

/*------------------------------ USART1         -----------------------------*/
#define MX_USART1                              1

/* Virtual mode */
#define MX_USART1_VM                           VM_ASYNC
#define MX_USART1_VM_ASYNC                     1

/* Pins */

/* USART1_TX */
#define MX_USART1_TX_Pin                       PE0
#define MX_USART1_TX_GPIO_Pin                  GPIO_PIN_0
#define MX_USART1_TX_GPIOx                     GPIOE
#define MX_USART1_TX_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_USART1_TX_GPIO_PuPd                 GPIO_NOPULL
#define MX_USART1_TX_GPIO_Speed                GPIO_SPEED_FREQ_LOW
#define MX_USART1_TX_GPIO_AF                   GPIO_AF7_USART1

/* USART1_RX */
#define MX_USART1_RX_Pin                       PE1
#define MX_USART1_RX_GPIO_Pin                  GPIO_PIN_1
#define MX_USART1_RX_GPIOx                     GPIOE
#define MX_USART1_RX_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_USART1_RX_GPIO_PuPd                 GPIO_NOPULL
#define MX_USART1_RX_GPIO_Speed                GPIO_SPEED_FREQ_LOW
#define MX_USART1_RX_GPIO_AF                   GPIO_AF7_USART1

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
#define MX_I2C3_SCL_Pin                        PC8
#define MX_I2C3_SCL_GPIO_Pin                   GPIO_PIN_8
#define MX_I2C3_SCL_GPIOx                      GPIOC
#define MX_I2C3_SCL_GPIO_Mode                  GPIO_MODE_AF_OD
#define MX_I2C3_SCL_GPIO_PuPd                  GPIO_NOPULL
#define MX_I2C3_SCL_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_I2C3_SCL_GPIO_AF                    GPIO_AF8_I2C3

/* I2C3_SDA */
#define MX_I2C3_SDA_Pin                        PC9
#define MX_I2C3_SDA_GPIO_Pin                   GPIO_PIN_9
#define MX_I2C3_SDA_GPIOx                      GPIOC
#define MX_I2C3_SDA_GPIO_Mode                  GPIO_MODE_AF_OD
#define MX_I2C3_SDA_GPIO_PuPd                  GPIO_NOPULL
#define MX_I2C3_SDA_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_I2C3_SDA_GPIO_AF                    GPIO_AF8_I2C3

/*------------------------------ LPUART1        -----------------------------*/
#define MX_LPUART1                             1

/* Pins */

/* LPUART1_RX */
#define MX_LPUART1_RX_Pin                      PC0
#define MX_LPUART1_RX_GPIO_Pin                 GPIO_PIN_0
#define MX_LPUART1_RX_GPIOx                    GPIOC
#define MX_LPUART1_RX_GPIO_Mode                GPIO_MODE_AF_PP
#define MX_LPUART1_RX_GPIO_PuPd                GPIO_NOPULL
#define MX_LPUART1_RX_GPIO_Speed               GPIO_SPEED_FREQ_LOW
#define MX_LPUART1_RX_GPIO_AF                  GPIO_AF8_LPUART1

/* LPUART1_TX */
#define MX_LPUART1_TX_Pin                      PC1
#define MX_LPUART1_TX_GPIO_Pin                 GPIO_PIN_1
#define MX_LPUART1_TX_GPIOx                    GPIOC
#define MX_LPUART1_TX_GPIO_Mode                GPIO_MODE_AF_PP
#define MX_LPUART1_TX_GPIO_PuPd                GPIO_NOPULL
#define MX_LPUART1_TX_GPIO_Speed               GPIO_SPEED_FREQ_LOW
#define MX_LPUART1_TX_GPIO_AF                  GPIO_AF8_LPUART1

/*------------------------------ SPI1           -----------------------------*/
#define MX_SPI1                                1

/* Pins */

/* SPI1_MOSI */
#define MX_SPI1_MOSI_Pin                       PA7
#define MX_SPI1_MOSI_GPIO_Pin                  GPIO_PIN_7
#define MX_SPI1_MOSI_GPIOx                     GPIOA
#define MX_SPI1_MOSI_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_SPI1_MOSI_GPIO_PuPd                 GPIO_NOPULL
#define MX_SPI1_MOSI_GPIO_Speed                GPIO_SPEED_FREQ_LOW
#define MX_SPI1_MOSI_GPIO_AF                   GPIO_AF5_SPI1

/* SPI1_SCK */
#define MX_SPI1_SCK_Pin                        PB3
#define MX_SPI1_SCK_GPIO_Pin                   GPIO_PIN_3
#define MX_SPI1_SCK_GPIOx                      GPIOB
#define MX_SPI1_SCK_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_SPI1_SCK_GPIO_PuPd                  GPIO_NOPULL
#define MX_SPI1_SCK_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_SPI1_SCK_GPIO_AF                    GPIO_AF5_SPI1

/* SPI1_MISO */
#define MX_SPI1_MISO_Pin                       PB4
#define MX_SPI1_MISO_GPIO_Pin                  GPIO_PIN_4
#define MX_SPI1_MISO_GPIOx                     GPIOB
#define MX_SPI1_MISO_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_SPI1_MISO_GPIO_PuPd                 GPIO_NOPULL
#define MX_SPI1_MISO_GPIO_Speed                GPIO_SPEED_FREQ_LOW
#define MX_SPI1_MISO_GPIO_AF                   GPIO_AF5_SPI1

/*------------------------------ SPI4           -----------------------------*/
#define MX_SPI4                                1

/* Pins */

/* SPI4_SCK */
#define MX_SPI4_SCK_Pin                        PE2
#define MX_SPI4_SCK_GPIO_Pin                   GPIO_PIN_2
#define MX_SPI4_SCK_GPIOx                      GPIOE
#define MX_SPI4_SCK_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_SPI4_SCK_GPIO_PuPd                  GPIO_PULLUP
#define MX_SPI4_SCK_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_SPI4_SCK_GPIO_AF                    GPIO_AF5_SPI4

/* SPI4_MISO */
#define MX_SPI4_MISO_Pin                       PE5
#define MX_SPI4_MISO_GPIO_Pin                  GPIO_PIN_5
#define MX_SPI4_MISO_GPIOx                     GPIOE
#define MX_SPI4_MISO_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_SPI4_MISO_GPIO_PuPd                 GPIO_NOPULL
#define MX_SPI4_MISO_GPIO_Speed                GPIO_SPEED_FREQ_LOW
#define MX_SPI4_MISO_GPIO_AF                   GPIO_AF5_SPI4

/* SPI4_MOSI */
#define MX_SPI4_MOSI_Pin                       PE6
#define MX_SPI4_MOSI_GPIO_Pin                  GPIO_PIN_6
#define MX_SPI4_MOSI_GPIOx                     GPIOE
#define MX_SPI4_MOSI_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_SPI4_MOSI_GPIO_PuPd                 GPIO_NOPULL
#define MX_SPI4_MOSI_GPIO_Speed                GPIO_SPEED_FREQ_LOW
#define MX_SPI4_MOSI_GPIO_AF                   GPIO_AF5_SPI4

#endif  /* __MX_DEVICE_H */
