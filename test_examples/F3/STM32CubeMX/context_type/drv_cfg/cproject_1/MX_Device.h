/******************************************************************************
 * File Name   : MX_Device.h
 * Date        : 05/12/2023 10:00:57
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
#define MX_CAN_RX_GPIO_Speed                   GPIO_SPEED_FREQ_HIGH
#define MX_CAN_RX_GPIO_AF                      GPIO_AF7_CAN

/* CAN_TX */
#define MX_CAN_TX_Pin                          PD1
#define MX_CAN_TX_GPIO_Pin                     GPIO_PIN_1
#define MX_CAN_TX_GPIOx                        GPIOD
#define MX_CAN_TX_GPIO_Mode                    GPIO_MODE_AF_PP
#define MX_CAN_TX_GPIO_PuPd                    GPIO_NOPULL
#define MX_CAN_TX_GPIO_Speed                   GPIO_SPEED_FREQ_HIGH
#define MX_CAN_TX_GPIO_AF                      GPIO_AF7_CAN

/*------------------------------ I2C1           -----------------------------*/
#define MX_I2C1                                1

/* Pins */

/* I2C1_SDA */
#define MX_I2C1_SDA_Pin                        PA14
#define MX_I2C1_SDA_GPIO_Pin                   GPIO_PIN_14
#define MX_I2C1_SDA_GPIOx                      GPIOA
#define MX_I2C1_SDA_GPIO_Mode                  GPIO_MODE_AF_OD
#define MX_I2C1_SDA_GPIO_PuPd                  GPIO_NOPULL
#define MX_I2C1_SDA_GPIO_Speed                 GPIO_SPEED_FREQ_HIGH
#define MX_I2C1_SDA_GPIO_AF                    GPIO_AF4_I2C1

/* I2C1_SCL */
#define MX_I2C1_SCL_Pin                        PA15
#define MX_I2C1_SCL_GPIO_Pin                   GPIO_PIN_15
#define MX_I2C1_SCL_GPIOx                      GPIOA
#define MX_I2C1_SCL_GPIO_Mode                  GPIO_MODE_AF_OD
#define MX_I2C1_SCL_GPIO_PuPd                  GPIO_NOPULL
#define MX_I2C1_SCL_GPIO_Speed                 GPIO_SPEED_FREQ_HIGH
#define MX_I2C1_SCL_GPIO_AF                    GPIO_AF4_I2C1

/*------------------------------ USB            -----------------------------*/
#define MX_USB                                 1

/* Pins */

/* USB_DM */
#define MX_USB_DM_Pin                          PA11
#define MX_USB_DM_GPIO_Pin                     GPIO_PIN_11
#define MX_USB_DM_GPIOx                        GPIOA
#define MX_USB_DM_GPIO_Mode                    GPIO_MODE_AF_PP
#define MX_USB_DM_GPIO_PuPd                    GPIO_NOPULL
#define MX_USB_DM_GPIO_Speed                   GPIO_SPEED_FREQ_HIGH
#define MX_USB_DM_GPIO_AF                      GPIO_AF14_USB

/* USB_DP */
#define MX_USB_DP_Pin                          PA12
#define MX_USB_DP_GPIO_Pin                     GPIO_PIN_12
#define MX_USB_DP_GPIOx                        GPIOA
#define MX_USB_DP_GPIO_Mode                    GPIO_MODE_AF_PP
#define MX_USB_DP_GPIO_PuPd                    GPIO_NOPULL
#define MX_USB_DP_GPIO_Speed                   GPIO_SPEED_FREQ_HIGH
#define MX_USB_DP_GPIO_AF                      GPIO_AF14_USB

/*------------------------------ I2C2           -----------------------------*/
#define MX_I2C2                                1

/* Pins */

/* I2C2_SDA */
#define MX_I2C2_SDA_Pin                        PA10
#define MX_I2C2_SDA_GPIO_Pin                   GPIO_PIN_10
#define MX_I2C2_SDA_GPIOx                      GPIOA
#define MX_I2C2_SDA_GPIO_Mode                  GPIO_MODE_AF_OD
#define MX_I2C2_SDA_GPIO_PuPd                  GPIO_NOPULL
#define MX_I2C2_SDA_GPIO_Speed                 GPIO_SPEED_FREQ_HIGH
#define MX_I2C2_SDA_GPIO_AF                    GPIO_AF4_I2C2

/* I2C2_SCL */
#define MX_I2C2_SCL_Pin                        PA9
#define MX_I2C2_SCL_GPIO_Pin                   GPIO_PIN_9
#define MX_I2C2_SCL_GPIOx                      GPIOA
#define MX_I2C2_SCL_GPIO_Mode                  GPIO_MODE_AF_OD
#define MX_I2C2_SCL_GPIO_PuPd                  GPIO_NOPULL
#define MX_I2C2_SCL_GPIO_Speed                 GPIO_SPEED_FREQ_HIGH
#define MX_I2C2_SCL_GPIO_AF                    GPIO_AF4_I2C2

/* I2C2_SMBA */
#define MX_I2C2_SMBA_Pin                       PF2
#define MX_I2C2_SMBA_GPIO_Pin                  GPIO_PIN_2
#define MX_I2C2_SMBA_GPIOx                     GPIOF
#define MX_I2C2_SMBA_GPIO_Mode                 GPIO_MODE_AF_OD
#define MX_I2C2_SMBA_GPIO_PuPd                 GPIO_NOPULL
#define MX_I2C2_SMBA_GPIO_Speed                GPIO_SPEED_FREQ_HIGH
#define MX_I2C2_SMBA_GPIO_AF                   GPIO_AF4_I2C2

/*------------------------------ SPI1           -----------------------------*/
#define MX_SPI1                                1

/* Pins */

/* SPI1_SCK */
#define MX_SPI1_SCK_Pin                        PA5
#define MX_SPI1_SCK_GPIO_Pin                   GPIO_PIN_5
#define MX_SPI1_SCK_GPIOx                      GPIOA
#define MX_SPI1_SCK_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_SPI1_SCK_GPIO_PuPd                  GPIO_NOPULL
#define MX_SPI1_SCK_GPIO_Speed                 GPIO_SPEED_FREQ_HIGH
#define MX_SPI1_SCK_GPIO_AF                    GPIO_AF5_SPI1

/* SPI1_MISO */
#define MX_SPI1_MISO_Pin                       PA6
#define MX_SPI1_MISO_GPIO_Pin                  GPIO_PIN_6
#define MX_SPI1_MISO_GPIOx                     GPIOA
#define MX_SPI1_MISO_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_SPI1_MISO_GPIO_PuPd                 GPIO_NOPULL
#define MX_SPI1_MISO_GPIO_Speed                GPIO_SPEED_FREQ_HIGH
#define MX_SPI1_MISO_GPIO_AF                   GPIO_AF5_SPI1

/* SPI1_MOSI */
#define MX_SPI1_MOSI_Pin                       PA7
#define MX_SPI1_MOSI_GPIO_Pin                  GPIO_PIN_7
#define MX_SPI1_MOSI_GPIOx                     GPIOA
#define MX_SPI1_MOSI_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_SPI1_MOSI_GPIO_PuPd                 GPIO_NOPULL
#define MX_SPI1_MOSI_GPIO_Speed                GPIO_SPEED_FREQ_HIGH
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
#define MX_SPI2_SCK_GPIO_Speed                 GPIO_SPEED_FREQ_HIGH
#define MX_SPI2_SCK_GPIO_AF                    GPIO_AF5_SPI2

/* SPI2_MISO */
#define MX_SPI2_MISO_Pin                       PC2
#define MX_SPI2_MISO_GPIO_Pin                  GPIO_PIN_2
#define MX_SPI2_MISO_GPIOx                     GPIOC
#define MX_SPI2_MISO_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_SPI2_MISO_GPIO_PuPd                 GPIO_NOPULL
#define MX_SPI2_MISO_GPIO_Speed                GPIO_SPEED_FREQ_HIGH
#define MX_SPI2_MISO_GPIO_AF                   GPIO_AF5_SPI2

/* SPI2_NSS */
#define MX_SPI2_NSS_Pin                        PD6
#define MX_SPI2_NSS_GPIO_Pin                   GPIO_PIN_6
#define MX_SPI2_NSS_GPIOx                      GPIOD
#define MX_SPI2_NSS_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_SPI2_NSS_GPIO_PuPd                  GPIO_NOPULL
#define MX_SPI2_NSS_GPIO_Speed                 GPIO_SPEED_FREQ_HIGH
#define MX_SPI2_NSS_GPIO_AF                    GPIO_AF5_SPI2

/*------------------------------ USART1         -----------------------------*/
#define MX_USART1                              1

/* Virtual mode */
#define MX_USART1_VM                           VM_SYNC
#define MX_USART1_VM_SYNC                      1

/* Pins */

/* USART1_CK */
#define MX_USART1_CK_Pin                       PA8
#define MX_USART1_CK_GPIO_Pin                  GPIO_PIN_8
#define MX_USART1_CK_GPIOx                     GPIOA
#define MX_USART1_CK_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_USART1_CK_GPIO_PuPd                 GPIO_NOPULL
#define MX_USART1_CK_GPIO_Speed                GPIO_SPEED_FREQ_HIGH
#define MX_USART1_CK_GPIO_AF                   GPIO_AF7_USART1

/* USART1_TX */
#define MX_USART1_TX_Pin                       PC4
#define MX_USART1_TX_GPIO_Pin                  GPIO_PIN_4
#define MX_USART1_TX_GPIOx                     GPIOC
#define MX_USART1_TX_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_USART1_TX_GPIO_PuPd                 GPIO_NOPULL
#define MX_USART1_TX_GPIO_Speed                GPIO_SPEED_FREQ_HIGH
#define MX_USART1_TX_GPIO_AF                   GPIO_AF7_USART1

/* USART1_RX */
#define MX_USART1_RX_Pin                       PC5
#define MX_USART1_RX_GPIO_Pin                  GPIO_PIN_5
#define MX_USART1_RX_GPIOx                     GPIOC
#define MX_USART1_RX_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_USART1_RX_GPIO_PuPd                 GPIO_NOPULL
#define MX_USART1_RX_GPIO_Speed                GPIO_SPEED_FREQ_HIGH
#define MX_USART1_RX_GPIO_AF                   GPIO_AF7_USART1

/*------------------------------ USART3         -----------------------------*/
#define MX_USART3                              1

/* Virtual mode */
#define MX_USART3_VM                           VM_ASYNC
#define MX_USART3_VM_ASYNC                     1

/* Pins */

/* USART3_TX */
#define MX_USART3_TX_Pin                       PD8
#define MX_USART3_TX_GPIO_Pin                  GPIO_PIN_8
#define MX_USART3_TX_GPIOx                     GPIOD
#define MX_USART3_TX_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_USART3_TX_GPIO_PuPd                 GPIO_NOPULL
#define MX_USART3_TX_GPIO_Speed                GPIO_SPEED_FREQ_HIGH
#define MX_USART3_TX_GPIO_AF                   GPIO_AF7_USART3

/* USART3_RX */
#define MX_USART3_RX_Pin                       PE15
#define MX_USART3_RX_GPIO_Pin                  GPIO_PIN_15
#define MX_USART3_RX_GPIOx                     GPIOE
#define MX_USART3_RX_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_USART3_RX_GPIO_PuPd                 GPIO_NOPULL
#define MX_USART3_RX_GPIO_Speed                GPIO_SPEED_FREQ_HIGH
#define MX_USART3_RX_GPIO_AF                   GPIO_AF7_USART3

#endif  /* __MX_DEVICE_H */
