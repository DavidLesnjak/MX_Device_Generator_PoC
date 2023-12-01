/******************************************************************************
 * File Name   : MX_Device.h
 * Date        : 01/12/2023 15:44:54
 * Description : STM32Cube MX parameter definitions
 * Note        : This file is generated by STM32CubeMX (DO NOT EDIT!)
 ******************************************************************************/
 
 #ifndef __MX_DEVICE_H
 #define __MX_DEVICE_H
   
 
/*------------------------------ CAN            -----------------------------*/
#define MX_CAN                                 1

/* Pins */

/* CAN_RX */
#define MX_CAN_RX                              PD0
#define MX_CAN_RX_Pin                          GPIO_PIN_0
#define MX_CAN_RX_Port                         GPIOD
#define MX_CAN_RX_Mode                         GPIO_MODE_AF_PP
#define MX_CAN_RX_Pull                         GPIO_NOPULL
#define MX_CAN_RX_Speed                        GPIO_SPEED_FREQ_HIGH
#define MX_CAN_RX_Alternate                    GPIO_AF7_CAN

/* CAN_TX */
#define MX_CAN_TX                              PD1
#define MX_CAN_TX_Pin                          GPIO_PIN_1
#define MX_CAN_TX_Port                         GPIOD
#define MX_CAN_TX_Mode                         GPIO_MODE_AF_PP
#define MX_CAN_TX_Pull                         GPIO_NOPULL
#define MX_CAN_TX_Speed                        GPIO_SPEED_FREQ_HIGH
#define MX_CAN_TX_Alternate                    GPIO_AF7_CAN

/*------------------------------ I2C1           -----------------------------*/
#define MX_I2C1                                1

/* Pins */

/* I2C1_SDA */
#define MX_I2C1_SDA                            PA14
#define MX_I2C1_SDA_Pin                        GPIO_PIN_14
#define MX_I2C1_SDA_Port                       GPIOA
#define MX_I2C1_SDA_Mode                       GPIO_MODE_AF_OD
#define MX_I2C1_SDA_Pull                       GPIO_NOPULL
#define MX_I2C1_SDA_Speed                      GPIO_SPEED_FREQ_HIGH
#define MX_I2C1_SDA_Alternate                  GPIO_AF4_I2C1

/* I2C1_SCL */
#define MX_I2C1_SCL                            PA15
#define MX_I2C1_SCL_Pin                        GPIO_PIN_15
#define MX_I2C1_SCL_Port                       GPIOA
#define MX_I2C1_SCL_Mode                       GPIO_MODE_AF_OD
#define MX_I2C1_SCL_Pull                       GPIO_NOPULL
#define MX_I2C1_SCL_Speed                      GPIO_SPEED_FREQ_HIGH
#define MX_I2C1_SCL_Alternate                  GPIO_AF4_I2C1

/*------------------------------ USB            -----------------------------*/
#define MX_USB                                 1

/* Pins */

/* USB_DM */
#define MX_USB_DM                              PA11
#define MX_USB_DM_Pin                          GPIO_PIN_11
#define MX_USB_DM_Port                         GPIOA
#define MX_USB_DM_Mode                         GPIO_MODE_AF_PP
#define MX_USB_DM_Pull                         GPIO_NOPULL
#define MX_USB_DM_Speed                        GPIO_SPEED_FREQ_HIGH
#define MX_USB_DM_Alternate                    GPIO_AF14_USB

/* USB_DP */
#define MX_USB_DP                              PA12
#define MX_USB_DP_Pin                          GPIO_PIN_12
#define MX_USB_DP_Port                         GPIOA
#define MX_USB_DP_Mode                         GPIO_MODE_AF_PP
#define MX_USB_DP_Pull                         GPIO_NOPULL
#define MX_USB_DP_Speed                        GPIO_SPEED_FREQ_HIGH
#define MX_USB_DP_Alternate                    GPIO_AF14_USB

/*------------------------------ I2C2           -----------------------------*/
#define MX_I2C2                                1

/* Pins */

/* I2C2_SDA */
#define MX_I2C2_SDA                            PA10
#define MX_I2C2_SDA_Pin                        GPIO_PIN_10
#define MX_I2C2_SDA_Port                       GPIOA
#define MX_I2C2_SDA_Mode                       GPIO_MODE_AF_OD
#define MX_I2C2_SDA_Pull                       GPIO_NOPULL
#define MX_I2C2_SDA_Speed                      GPIO_SPEED_FREQ_HIGH
#define MX_I2C2_SDA_Alternate                  GPIO_AF4_I2C2

/* I2C2_SCL */
#define MX_I2C2_SCL                            PA9
#define MX_I2C2_SCL_Pin                        GPIO_PIN_9
#define MX_I2C2_SCL_Port                       GPIOA
#define MX_I2C2_SCL_Mode                       GPIO_MODE_AF_OD
#define MX_I2C2_SCL_Pull                       GPIO_NOPULL
#define MX_I2C2_SCL_Speed                      GPIO_SPEED_FREQ_HIGH
#define MX_I2C2_SCL_Alternate                  GPIO_AF4_I2C2

/* I2C2_SMBA */
#define MX_I2C2_SMBA                           PF2
#define MX_I2C2_SMBA_Pin                       GPIO_PIN_2
#define MX_I2C2_SMBA_Port                      GPIOF
#define MX_I2C2_SMBA_Mode                      GPIO_MODE_AF_OD
#define MX_I2C2_SMBA_Pull                      GPIO_NOPULL
#define MX_I2C2_SMBA_Speed                     GPIO_SPEED_FREQ_HIGH
#define MX_I2C2_SMBA_Alternate                 GPIO_AF4_I2C2

/*------------------------------ SPI1           -----------------------------*/
#define MX_SPI1                                1

/* Pins */

/* SPI1_SCK */
#define MX_SPI1_SCK                            PA5
#define MX_SPI1_SCK_Pin                        GPIO_PIN_5
#define MX_SPI1_SCK_Port                       GPIOA
#define MX_SPI1_SCK_Mode                       GPIO_MODE_AF_PP
#define MX_SPI1_SCK_Pull                       GPIO_NOPULL
#define MX_SPI1_SCK_Speed                      GPIO_SPEED_FREQ_HIGH
#define MX_SPI1_SCK_Alternate                  GPIO_AF5_SPI1

/* SPI1_MISO */
#define MX_SPI1_MISO                           PA6
#define MX_SPI1_MISO_Pin                       GPIO_PIN_6
#define MX_SPI1_MISO_Port                      GPIOA
#define MX_SPI1_MISO_Mode                      GPIO_MODE_AF_PP
#define MX_SPI1_MISO_Pull                      GPIO_NOPULL
#define MX_SPI1_MISO_Speed                     GPIO_SPEED_FREQ_HIGH
#define MX_SPI1_MISO_Alternate                 GPIO_AF5_SPI1

/* SPI1_MOSI */
#define MX_SPI1_MOSI                           PA7
#define MX_SPI1_MOSI_Pin                       GPIO_PIN_7
#define MX_SPI1_MOSI_Port                      GPIOA
#define MX_SPI1_MOSI_Mode                      GPIO_MODE_AF_PP
#define MX_SPI1_MOSI_Pull                      GPIO_NOPULL
#define MX_SPI1_MOSI_Speed                     GPIO_SPEED_FREQ_HIGH
#define MX_SPI1_MOSI_Alternate                 GPIO_AF5_SPI1

/*------------------------------ SPI2           -----------------------------*/
#define MX_SPI2                                1

/* Pins */

/* SPI2_SCK */
#define MX_SPI2_SCK                            PB10
#define MX_SPI2_SCK_Pin                        GPIO_PIN_10
#define MX_SPI2_SCK_Port                       GPIOB
#define MX_SPI2_SCK_Mode                       GPIO_MODE_AF_PP
#define MX_SPI2_SCK_Pull                       GPIO_NOPULL
#define MX_SPI2_SCK_Speed                      GPIO_SPEED_FREQ_HIGH
#define MX_SPI2_SCK_Alternate                  GPIO_AF5_SPI2

/* SPI2_MISO */
#define MX_SPI2_MISO                           PC2
#define MX_SPI2_MISO_Pin                       GPIO_PIN_2
#define MX_SPI2_MISO_Port                      GPIOC
#define MX_SPI2_MISO_Mode                      GPIO_MODE_AF_PP
#define MX_SPI2_MISO_Pull                      GPIO_NOPULL
#define MX_SPI2_MISO_Speed                     GPIO_SPEED_FREQ_HIGH
#define MX_SPI2_MISO_Alternate                 GPIO_AF5_SPI2

/* SPI2_NSS */
#define MX_SPI2_NSS                            PD6
#define MX_SPI2_NSS_Pin                        GPIO_PIN_6
#define MX_SPI2_NSS_Port                       GPIOD
#define MX_SPI2_NSS_Mode                       GPIO_MODE_AF_PP
#define MX_SPI2_NSS_Pull                       GPIO_NOPULL
#define MX_SPI2_NSS_Speed                      GPIO_SPEED_FREQ_HIGH
#define MX_SPI2_NSS_Alternate                  GPIO_AF5_SPI2

/*------------------------------ USART1         -----------------------------*/
#define MX_USART1                              1

/* Virtual mode */
#define MX_USART1_VM                           VM_SYNC

/* Pins */

/* USART1_CK */
#define MX_USART1_CK                           PA8
#define MX_USART1_CK_Pin                       GPIO_PIN_8
#define MX_USART1_CK_Port                      GPIOA
#define MX_USART1_CK_Mode                      GPIO_MODE_AF_PP
#define MX_USART1_CK_Pull                      GPIO_NOPULL
#define MX_USART1_CK_Speed                     GPIO_SPEED_FREQ_HIGH
#define MX_USART1_CK_Alternate                 GPIO_AF7_USART1

/* USART1_TX */
#define MX_USART1_TX                           PC4
#define MX_USART1_TX_Pin                       GPIO_PIN_4
#define MX_USART1_TX_Port                      GPIOC
#define MX_USART1_TX_Mode                      GPIO_MODE_AF_PP
#define MX_USART1_TX_Pull                      GPIO_NOPULL
#define MX_USART1_TX_Speed                     GPIO_SPEED_FREQ_HIGH
#define MX_USART1_TX_Alternate                 GPIO_AF7_USART1

/* USART1_RX */
#define MX_USART1_RX                           PC5
#define MX_USART1_RX_Pin                       GPIO_PIN_5
#define MX_USART1_RX_Port                      GPIOC
#define MX_USART1_RX_Mode                      GPIO_MODE_AF_PP
#define MX_USART1_RX_Pull                      GPIO_NOPULL
#define MX_USART1_RX_Speed                     GPIO_SPEED_FREQ_HIGH
#define MX_USART1_RX_Alternate                 GPIO_AF7_USART1

/*------------------------------ USART3         -----------------------------*/
#define MX_USART3                              1

/* Virtual mode */
#define MX_USART3_VM                           VM_ASYNC

/* Pins */

/* USART3_TX */
#define MX_USART3_TX                           PD8
#define MX_USART3_TX_Pin                       GPIO_PIN_8
#define MX_USART3_TX_Port                      GPIOD
#define MX_USART3_TX_Mode                      GPIO_MODE_AF_PP
#define MX_USART3_TX_Pull                      GPIO_NOPULL
#define MX_USART3_TX_Speed                     GPIO_SPEED_FREQ_HIGH
#define MX_USART3_TX_Alternate                 GPIO_AF7_USART3

/* USART3_RX */
#define MX_USART3_RX                           PE15
#define MX_USART3_RX_Pin                       GPIO_PIN_15
#define MX_USART3_RX_Port                      GPIOE
#define MX_USART3_RX_Mode                      GPIO_MODE_AF_PP
#define MX_USART3_RX_Pull                      GPIO_NOPULL
#define MX_USART3_RX_Speed                     GPIO_SPEED_FREQ_HIGH
#define MX_USART3_RX_Alternate                 GPIO_AF7_USART3

#endif  /* __MX_DEVICE_H */