/******************************************************************************
 * File Name   : MX_Device.h
 * Date        : 01/12/2023 15:44:55
 * Description : STM32Cube MX parameter definitions
 * Note        : This file is generated by STM32CubeMX (DO NOT EDIT!)
 ******************************************************************************/
 
 #ifndef __MX_DEVICE_H
 #define __MX_DEVICE_H
   
 
/*------------------------------ SDMMC1         -----------------------------*/
#define MX_SDMMC1                              1

/* Pins */

/* SDMMC1_CK */
#define MX_SDMMC1_CK                           PC12
#define MX_SDMMC1_CK_Pin                       GPIO_PIN_12
#define MX_SDMMC1_CK_Port                      GPIOC
#define MX_SDMMC1_CK_Mode                      GPIO_MODE_AF_PP
#define MX_SDMMC1_CK_Pull                      GPIO_NOPULL
#define MX_SDMMC1_CK_Speed                     GPIO_SPEED_FREQ_HIGH
#define MX_SDMMC1_CK_Alternate                 GPIO_AF12_SDMMC1

/* SDMMC1_D0 */
#define MX_SDMMC1_D0                           PC8
#define MX_SDMMC1_D0_Pin                       GPIO_PIN_8
#define MX_SDMMC1_D0_Port                      GPIOC
#define MX_SDMMC1_D0_Mode                      GPIO_MODE_AF_PP
#define MX_SDMMC1_D0_Pull                      GPIO_NOPULL
#define MX_SDMMC1_D0_Speed                     GPIO_SPEED_FREQ_HIGH
#define MX_SDMMC1_D0_Alternate                 GPIO_AF12_SDMMC1

/* SDMMC1_CMD */
#define MX_SDMMC1_CMD                          PD2
#define MX_SDMMC1_CMD_Pin                      GPIO_PIN_2
#define MX_SDMMC1_CMD_Port                     GPIOD
#define MX_SDMMC1_CMD_Mode                     GPIO_MODE_AF_PP
#define MX_SDMMC1_CMD_Pull                     GPIO_NOPULL
#define MX_SDMMC1_CMD_Speed                    GPIO_SPEED_FREQ_HIGH
#define MX_SDMMC1_CMD_Alternate                GPIO_AF12_SDMMC1

/*------------------------------ SDMMC2         -----------------------------*/
#define MX_SDMMC2                              1

/* Pins */

/* SDMMC2_D2 */
#define MX_SDMMC2_D2                           PB3_JTDO_TRACESWO_

/* SDMMC2_CKIN */
#define MX_SDMMC2_CKIN                         PB7
#define MX_SDMMC2_CKIN_Pin                     GPIO_PIN_7
#define MX_SDMMC2_CKIN_Port                    GPIOB
#define MX_SDMMC2_CKIN_Mode                    GPIO_MODE_AF_PP
#define MX_SDMMC2_CKIN_Pull                    GPIO_NOPULL
#define MX_SDMMC2_CKIN_Speed                   GPIO_SPEED_FREQ_HIGH
#define MX_SDMMC2_CKIN_Alternate               GPIO_AF11_SDMMC2

/* SDMMC2_CK */
#define MX_SDMMC2_CK                           PD6
#define MX_SDMMC2_CK_Pin                       GPIO_PIN_6
#define MX_SDMMC2_CK_Port                      GPIOD
#define MX_SDMMC2_CK_Mode                      GPIO_MODE_AF_PP
#define MX_SDMMC2_CK_Pull                      GPIO_NOPULL
#define MX_SDMMC2_CK_Speed                     GPIO_SPEED_FREQ_HIGH
#define MX_SDMMC2_CK_Alternate                 GPIO_AF11_SDMMC2

/* SDMMC2_CMD */
#define MX_SDMMC2_CMD                          PD7
#define MX_SDMMC2_CMD_Pin                      GPIO_PIN_7
#define MX_SDMMC2_CMD_Port                     GPIOD
#define MX_SDMMC2_CMD_Mode                     GPIO_MODE_AF_PP
#define MX_SDMMC2_CMD_Pull                     GPIO_NOPULL
#define MX_SDMMC2_CMD_Speed                    GPIO_SPEED_FREQ_HIGH
#define MX_SDMMC2_CMD_Alternate                GPIO_AF11_SDMMC2

/* SDMMC2_D1 */
#define MX_SDMMC2_D1                           PG10
#define MX_SDMMC2_D1_Pin                       GPIO_PIN_10
#define MX_SDMMC2_D1_Port                      GPIOG
#define MX_SDMMC2_D1_Mode                      GPIO_MODE_AF_PP
#define MX_SDMMC2_D1_Pull                      GPIO_NOPULL
#define MX_SDMMC2_D1_Speed                     GPIO_SPEED_FREQ_HIGH
#define MX_SDMMC2_D1_Alternate                 GPIO_AF11_SDMMC2

/* SDMMC2_D3 */
#define MX_SDMMC2_D3                           PG12
#define MX_SDMMC2_D3_Pin                       GPIO_PIN_12
#define MX_SDMMC2_D3_Port                      GPIOG
#define MX_SDMMC2_D3_Mode                      GPIO_MODE_AF_PP
#define MX_SDMMC2_D3_Pull                      GPIO_NOPULL
#define MX_SDMMC2_D3_Speed                     GPIO_SPEED_FREQ_HIGH
#define MX_SDMMC2_D3_Alternate                 GPIO_AF10_SDMMC2

/* SDMMC2_D0 */
#define MX_SDMMC2_D0                           PG9
#define MX_SDMMC2_D0_Pin                       GPIO_PIN_9
#define MX_SDMMC2_D0_Port                      GPIOG
#define MX_SDMMC2_D0_Mode                      GPIO_MODE_AF_PP
#define MX_SDMMC2_D0_Pull                      GPIO_NOPULL
#define MX_SDMMC2_D0_Speed                     GPIO_SPEED_FREQ_HIGH
#define MX_SDMMC2_D0_Alternate                 GPIO_AF11_SDMMC2

/*------------------------------ SPI4           -----------------------------*/
#define MX_SPI4                                1

/* Pins */

/* SPI4_SCK */
#define MX_SPI4_SCK                            PE12
#define MX_SPI4_SCK_Pin                        GPIO_PIN_12
#define MX_SPI4_SCK_Port                       GPIOE
#define MX_SPI4_SCK_Mode                       GPIO_MODE_AF_PP
#define MX_SPI4_SCK_Pull                       GPIO_NOPULL
#define MX_SPI4_SCK_Speed                      GPIO_SPEED_FREQ_LOW
#define MX_SPI4_SCK_Alternate                  GPIO_AF5_SPI4

/* SPI4_MISO */
#define MX_SPI4_MISO                           PE5
#define MX_SPI4_MISO_Pin                       GPIO_PIN_5
#define MX_SPI4_MISO_Port                      GPIOE
#define MX_SPI4_MISO_Mode                      GPIO_MODE_AF_PP
#define MX_SPI4_MISO_Pull                      GPIO_NOPULL
#define MX_SPI4_MISO_Speed                     GPIO_SPEED_FREQ_LOW
#define MX_SPI4_MISO_Alternate                 GPIO_AF5_SPI4

/* SPI4_MOSI */
#define MX_SPI4_MOSI                           PE6
#define MX_SPI4_MOSI_Pin                       GPIO_PIN_6
#define MX_SPI4_MOSI_Port                      GPIOE
#define MX_SPI4_MOSI_Mode                      GPIO_MODE_AF_PP
#define MX_SPI4_MOSI_Pull                      GPIO_NOPULL
#define MX_SPI4_MOSI_Speed                     GPIO_SPEED_FREQ_LOW
#define MX_SPI4_MOSI_Alternate                 GPIO_AF5_SPI4

/*------------------------------ UART4          -----------------------------*/
#define MX_UART4                               1

/* Pins */

/* UART4_RX */
#define MX_UART4_RX                            PC11
#define MX_UART4_RX_Pin                        GPIO_PIN_11
#define MX_UART4_RX_Port                       GPIOC
#define MX_UART4_RX_Mode                       GPIO_MODE_AF_PP
#define MX_UART4_RX_Pull                       GPIO_NOPULL
#define MX_UART4_RX_Speed                      GPIO_SPEED_FREQ_LOW
#define MX_UART4_RX_Alternate                  GPIO_AF8_UART4

/* UART4_TX */
#define MX_UART4_TX                            PD1
#define MX_UART4_TX_Pin                        GPIO_PIN_1
#define MX_UART4_TX_Port                       GPIOD
#define MX_UART4_TX_Mode                       GPIO_MODE_AF_PP
#define MX_UART4_TX_Pull                       GPIO_NOPULL
#define MX_UART4_TX_Speed                      GPIO_SPEED_FREQ_LOW
#define MX_UART4_TX_Alternate                  GPIO_AF8_UART4

/*------------------------------ USART11        -----------------------------*/
#define MX_USART11                             1

/* Virtual mode */
#define MX_USART11_VM                          VM_SYNC

/* Pins */

/* USART11_CK */
#define MX_USART11_CK                          PF2
#define MX_USART11_CK_Pin                      GPIO_PIN_2
#define MX_USART11_CK_Port                     GPIOF
#define MX_USART11_CK_Mode                     GPIO_MODE_AF_PP
#define MX_USART11_CK_Pull                     GPIO_NOPULL
#define MX_USART11_CK_Speed                    GPIO_SPEED_FREQ_LOW
#define MX_USART11_CK_Alternate                GPIO_AF7_USART11

/* USART11_TX */
#define MX_USART11_TX                          PF3
#define MX_USART11_TX_Pin                      GPIO_PIN_3
#define MX_USART11_TX_Port                     GPIOF
#define MX_USART11_TX_Mode                     GPIO_MODE_AF_PP
#define MX_USART11_TX_Pull                     GPIO_NOPULL
#define MX_USART11_TX_Speed                    GPIO_SPEED_FREQ_LOW
#define MX_USART11_TX_Alternate                GPIO_AF7_USART11

/* USART11_RX */
#define MX_USART11_RX                          PF4
#define MX_USART11_RX_Pin                      GPIO_PIN_4
#define MX_USART11_RX_Port                     GPIOF
#define MX_USART11_RX_Mode                     GPIO_MODE_AF_PP
#define MX_USART11_RX_Pull                     GPIO_NOPULL
#define MX_USART11_RX_Speed                    GPIO_SPEED_FREQ_LOW
#define MX_USART11_RX_Alternate                GPIO_AF7_USART11

/*------------------------------ USB            -----------------------------*/
#define MX_USB                                 1

/* Virtual mode */
#define MX_USB_VM                              Host_Only

/* Pins */

/* USB_DM */
#define MX_USB_DM                              PA11
#define MX_USB_DM_Pin                          GPIO_PIN_11
#define MX_USB_DM_Port                         GPIOA
#define MX_USB_DM_Mode                         GPIO_MODE_AF_PP
#define MX_USB_DM_Pull                         GPIO_NOPULL
#define MX_USB_DM_Speed                        GPIO_SPEED_FREQ_LOW
#define MX_USB_DM_Alternate                    GPIO_AF10_USB

/* USB_DP */
#define MX_USB_DP                              PA12
#define MX_USB_DP_Pin                          GPIO_PIN_12
#define MX_USB_DP_Port                         GPIOA
#define MX_USB_DP_Mode                         GPIO_MODE_AF_PP
#define MX_USB_DP_Pull                         GPIO_NOPULL
#define MX_USB_DP_Speed                        GPIO_SPEED_FREQ_LOW
#define MX_USB_DP_Alternate                    GPIO_AF10_USB

/*------------------------------ ETH            -----------------------------*/
#define MX_ETH                                 1

/* Pins */

/* ETH_CRS */
#define MX_ETH_CRS                             PA0
#define MX_ETH_CRS_Pin                         GPIO_PIN_0
#define MX_ETH_CRS_Port                        GPIOA
#define MX_ETH_CRS_Mode                        GPIO_MODE_AF_PP
#define MX_ETH_CRS_Pull                        GPIO_NOPULL
#define MX_ETH_CRS_Speed                       GPIO_SPEED_FREQ_HIGH
#define MX_ETH_CRS_Alternate                   GPIO_AF11_ETH

/* ETH_RX_CLK */
#define MX_ETH_RX_CLK                          PA1
#define MX_ETH_RX_CLK_Pin                      GPIO_PIN_1
#define MX_ETH_RX_CLK_Port                     GPIOA
#define MX_ETH_RX_CLK_Mode                     GPIO_MODE_AF_PP
#define MX_ETH_RX_CLK_Pull                     GPIO_NOPULL
#define MX_ETH_RX_CLK_Speed                    GPIO_SPEED_FREQ_HIGH
#define MX_ETH_RX_CLK_Alternate                GPIO_AF11_ETH

/* ETH_MDIO */
#define MX_ETH_MDIO                            PA2
#define MX_ETH_MDIO_Pin                        GPIO_PIN_2
#define MX_ETH_MDIO_Port                       GPIOA
#define MX_ETH_MDIO_Mode                       GPIO_MODE_AF_PP
#define MX_ETH_MDIO_Pull                       GPIO_NOPULL
#define MX_ETH_MDIO_Speed                      GPIO_SPEED_FREQ_HIGH
#define MX_ETH_MDIO_Alternate                  GPIO_AF11_ETH

/* ETH_COL */
#define MX_ETH_COL                             PA3
#define MX_ETH_COL_Pin                         GPIO_PIN_3
#define MX_ETH_COL_Port                        GPIOA
#define MX_ETH_COL_Mode                        GPIO_MODE_AF_PP
#define MX_ETH_COL_Pull                        GPIO_NOPULL
#define MX_ETH_COL_Speed                       GPIO_SPEED_FREQ_HIGH
#define MX_ETH_COL_Alternate                   GPIO_AF11_ETH

/* ETH_RX_DV */
#define MX_ETH_RX_DV                           PA7
#define MX_ETH_RX_DV_Pin                       GPIO_PIN_7
#define MX_ETH_RX_DV_Port                      GPIOA
#define MX_ETH_RX_DV_Mode                      GPIO_MODE_AF_PP
#define MX_ETH_RX_DV_Pull                      GPIO_NOPULL
#define MX_ETH_RX_DV_Speed                     GPIO_SPEED_FREQ_HIGH
#define MX_ETH_RX_DV_Alternate                 GPIO_AF11_ETH

/* ETH_RXD3 */
#define MX_ETH_RXD3                            PB1
#define MX_ETH_RXD3_Pin                        GPIO_PIN_1
#define MX_ETH_RXD3_Port                       GPIOB
#define MX_ETH_RXD3_Mode                       GPIO_MODE_AF_PP
#define MX_ETH_RXD3_Pull                       GPIO_NOPULL
#define MX_ETH_RXD3_Speed                      GPIO_SPEED_FREQ_HIGH
#define MX_ETH_RXD3_Alternate                  GPIO_AF11_ETH

/* ETH_MDC */
#define MX_ETH_MDC                             PC1
#define MX_ETH_MDC_Pin                         GPIO_PIN_1
#define MX_ETH_MDC_Port                        GPIOC
#define MX_ETH_MDC_Mode                        GPIO_MODE_AF_PP
#define MX_ETH_MDC_Pull                        GPIO_NOPULL
#define MX_ETH_MDC_Speed                       GPIO_SPEED_FREQ_HIGH
#define MX_ETH_MDC_Alternate                   GPIO_AF11_ETH

/* ETH_TXD2 */
#define MX_ETH_TXD2                            PC2
#define MX_ETH_TXD2_Pin                        GPIO_PIN_2
#define MX_ETH_TXD2_Port                       GPIOC
#define MX_ETH_TXD2_Mode                       GPIO_MODE_AF_PP
#define MX_ETH_TXD2_Pull                       GPIO_NOPULL
#define MX_ETH_TXD2_Speed                      GPIO_SPEED_FREQ_HIGH
#define MX_ETH_TXD2_Alternate                  GPIO_AF11_ETH

/* ETH_TX_CLK */
#define MX_ETH_TX_CLK                          PC3
#define MX_ETH_TX_CLK_Pin                      GPIO_PIN_3
#define MX_ETH_TX_CLK_Port                     GPIOC
#define MX_ETH_TX_CLK_Mode                     GPIO_MODE_AF_PP
#define MX_ETH_TX_CLK_Pull                     GPIO_NOPULL
#define MX_ETH_TX_CLK_Speed                    GPIO_SPEED_FREQ_HIGH
#define MX_ETH_TX_CLK_Alternate                GPIO_AF11_ETH

/* ETH_RXD0 */
#define MX_ETH_RXD0                            PC4
#define MX_ETH_RXD0_Pin                        GPIO_PIN_4
#define MX_ETH_RXD0_Port                       GPIOC
#define MX_ETH_RXD0_Mode                       GPIO_MODE_AF_PP
#define MX_ETH_RXD0_Pull                       GPIO_NOPULL
#define MX_ETH_RXD0_Speed                      GPIO_SPEED_FREQ_HIGH
#define MX_ETH_RXD0_Alternate                  GPIO_AF11_ETH

/* ETH_RXD1 */
#define MX_ETH_RXD1                            PC5
#define MX_ETH_RXD1_Pin                        GPIO_PIN_5
#define MX_ETH_RXD1_Port                       GPIOC
#define MX_ETH_RXD1_Mode                       GPIO_MODE_AF_PP
#define MX_ETH_RXD1_Pull                       GPIO_NOPULL
#define MX_ETH_RXD1_Speed                      GPIO_SPEED_FREQ_HIGH
#define MX_ETH_RXD1_Alternate                  GPIO_AF11_ETH

/* ETH_TXD3 */
#define MX_ETH_TXD3                            PE2
#define MX_ETH_TXD3_Pin                        GPIO_PIN_2
#define MX_ETH_TXD3_Port                       GPIOE
#define MX_ETH_TXD3_Mode                       GPIO_MODE_AF_PP
#define MX_ETH_TXD3_Pull                       GPIO_NOPULL
#define MX_ETH_TXD3_Speed                      GPIO_SPEED_FREQ_HIGH
#define MX_ETH_TXD3_Alternate                  GPIO_AF11_ETH

/* ETH_TX_EN */
#define MX_ETH_TX_EN                           PG11
#define MX_ETH_TX_EN_Pin                       GPIO_PIN_11
#define MX_ETH_TX_EN_Port                      GPIOG
#define MX_ETH_TX_EN_Mode                      GPIO_MODE_AF_PP
#define MX_ETH_TX_EN_Pull                      GPIO_NOPULL
#define MX_ETH_TX_EN_Speed                     GPIO_SPEED_FREQ_HIGH
#define MX_ETH_TX_EN_Alternate                 GPIO_AF11_ETH

/* ETH_TXD0 */
#define MX_ETH_TXD0                            PG13
#define MX_ETH_TXD0_Pin                        GPIO_PIN_13
#define MX_ETH_TXD0_Port                       GPIOG
#define MX_ETH_TXD0_Mode                       GPIO_MODE_AF_PP
#define MX_ETH_TXD0_Pull                       GPIO_NOPULL
#define MX_ETH_TXD0_Speed                      GPIO_SPEED_FREQ_HIGH
#define MX_ETH_TXD0_Alternate                  GPIO_AF11_ETH

/* ETH_TXD1 */
#define MX_ETH_TXD1                            PG14
#define MX_ETH_TXD1_Pin                        GPIO_PIN_14
#define MX_ETH_TXD1_Port                       GPIOG
#define MX_ETH_TXD1_Mode                       GPIO_MODE_AF_PP
#define MX_ETH_TXD1_Pull                       GPIO_NOPULL
#define MX_ETH_TXD1_Speed                      GPIO_SPEED_FREQ_HIGH
#define MX_ETH_TXD1_Alternate                  GPIO_AF11_ETH

/* ETH_RXD2 */
#define MX_ETH_RXD2                            PH6
#define MX_ETH_RXD2_Pin                        GPIO_PIN_6
#define MX_ETH_RXD2_Port                       GPIOH
#define MX_ETH_RXD2_Mode                       GPIO_MODE_AF_PP
#define MX_ETH_RXD2_Pull                       GPIO_NOPULL
#define MX_ETH_RXD2_Speed                      GPIO_SPEED_FREQ_HIGH
#define MX_ETH_RXD2_Alternate                  GPIO_AF11_ETH

/*------------------------------ FDCAN1         -----------------------------*/
#define MX_FDCAN1                              1

/* Pins */

/* FDCAN1_RX */
#define MX_FDCAN1_RX                           PD0
#define MX_FDCAN1_RX_Pin                       GPIO_PIN_0
#define MX_FDCAN1_RX_Port                      GPIOD
#define MX_FDCAN1_RX_Mode                      GPIO_MODE_AF_PP
#define MX_FDCAN1_RX_Pull                      GPIO_NOPULL
#define MX_FDCAN1_RX_Speed                     GPIO_SPEED_FREQ_LOW
#define MX_FDCAN1_RX_Alternate                 GPIO_AF9_FDCAN1

/* FDCAN1_TX */
#define MX_FDCAN1_TX                           PD5
#define MX_FDCAN1_TX_Pin                       GPIO_PIN_5
#define MX_FDCAN1_TX_Port                      GPIOD
#define MX_FDCAN1_TX_Mode                      GPIO_MODE_AF_PP
#define MX_FDCAN1_TX_Pull                      GPIO_NOPULL
#define MX_FDCAN1_TX_Speed                     GPIO_SPEED_FREQ_LOW
#define MX_FDCAN1_TX_Alternate                 GPIO_AF9_FDCAN1

/*------------------------------ I2C1           -----------------------------*/
#define MX_I2C1                                1

/* Pins */

/* I2C1_SCL */
#define MX_I2C1_SCL                            PB8
#define MX_I2C1_SCL_Pin                        GPIO_PIN_8
#define MX_I2C1_SCL_Port                       GPIOB
#define MX_I2C1_SCL_Mode                       GPIO_MODE_AF_OD
#define MX_I2C1_SCL_Pull                       GPIO_NOPULL
#define MX_I2C1_SCL_Speed                      GPIO_SPEED_FREQ_LOW
#define MX_I2C1_SCL_Alternate                  GPIO_AF4_I2C1

/* I2C1_SDA */
#define MX_I2C1_SDA                            PB9
#define MX_I2C1_SDA_Pin                        GPIO_PIN_9
#define MX_I2C1_SDA_Port                       GPIOB
#define MX_I2C1_SDA_Mode                       GPIO_MODE_AF_OD
#define MX_I2C1_SDA_Pull                       GPIO_NOPULL
#define MX_I2C1_SDA_Speed                      GPIO_SPEED_FREQ_LOW
#define MX_I2C1_SDA_Alternate                  GPIO_AF4_I2C1

/*------------------------------ LPUART1        -----------------------------*/
#define MX_LPUART1                             1

/* Pins */

/* LPUART1_RX */
#define MX_LPUART1_RX                          PA10
#define MX_LPUART1_RX_Pin                      GPIO_PIN_10
#define MX_LPUART1_RX_Port                     GPIOA
#define MX_LPUART1_RX_Mode                     GPIO_MODE_AF_PP
#define MX_LPUART1_RX_Pull                     GPIO_NOPULL
#define MX_LPUART1_RX_Speed                    GPIO_SPEED_FREQ_LOW
#define MX_LPUART1_RX_Alternate                GPIO_AF3_LPUART1

/* LPUART1_TX */
#define MX_LPUART1_TX                          PB6
#define MX_LPUART1_TX_Pin                      GPIO_PIN_6
#define MX_LPUART1_TX_Port                     GPIOB
#define MX_LPUART1_TX_Mode                     GPIO_MODE_AF_PP
#define MX_LPUART1_TX_Pull                     GPIO_NOPULL
#define MX_LPUART1_TX_Speed                    GPIO_SPEED_FREQ_LOW
#define MX_LPUART1_TX_Alternate                GPIO_AF8_LPUART1

#endif  /* __MX_DEVICE_H */
