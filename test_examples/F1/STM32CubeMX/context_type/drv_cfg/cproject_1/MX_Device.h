/******************************************************************************
 * File Name   : MX_Device.h
 * Date        : 01/12/2023 15:44:53
 * Description : STM32Cube MX parameter definitions
 * Note        : This file is generated by STM32CubeMX (DO NOT EDIT!)
 ******************************************************************************/
 
 #ifndef __MX_DEVICE_H
 #define __MX_DEVICE_H
   
 
/*------------------------------ CAN1           -----------------------------*/
#define MX_CAN1                                1

/* Pins */

/* CAN1_RX */
#define MX_CAN1_RX                             PD0
#define MX_CAN1_RX_Pin                         GPIO_PIN_0
#define MX_CAN1_RX_Port                        GPIOD
#define MX_CAN1_RX_Mode                        GPIO_MODE_INPUT
#define MX_CAN1_RX_Pull                        GPIO_PULLUP
#define MX_CAN1_RX_Speed                       
#define MX_CAN1_RX_Alternate                   

/* CAN1_TX */
#define MX_CAN1_TX                             PD1
#define MX_CAN1_TX_Pin                         GPIO_PIN_1
#define MX_CAN1_TX_Port                        GPIOD
#define MX_CAN1_TX_Mode                        GPIO_MODE_AF_PP
#define MX_CAN1_TX_Pull                        GPIO_PULLUP
#define MX_CAN1_TX_Speed                       GPIO_SPEED_FREQ_LOW
#define MX_CAN1_TX_Alternate                   

/*------------------------------ USB_HOST       -----------------------------*/
#define MX_USB_HOST                            1

/* Virtual mode */
#define MX_USB_HOST_VM                         Cdc


/*------------------------------ USB_OTG_FS     -----------------------------*/
#define MX_USB_OTG_FS                          1

/* Virtual mode */
#define MX_USB_OTG_FS_VM                       Host_Only

/* Pins */

/* USB_OTG_FS_ID */
#define MX_USB_OTG_FS_ID                       PA10

/* USB_OTG_FS_DM */
#define MX_USB_OTG_FS_DM                       PA11

/* USB_OTG_FS_DP */
#define MX_USB_OTG_FS_DP                       PA12

/* USB_OTG_FS_VBUS */
#define MX_USB_OTG_FS_VBUS                     PA9

/*------------------------------ ETH            -----------------------------*/
#define MX_ETH                                 1

/* Pins */

/* ETH_CRS */
#define MX_ETH_CRS                             PA0
#define MX_ETH_CRS_Pin                         GPIO_PIN_0
#define MX_ETH_CRS_Port                        GPIOA
#define MX_ETH_CRS_Mode                        GPIO_MODE_AF_PP
#define MX_ETH_CRS_Pull                        GPIO_NOPULL
#define MX_ETH_CRS_Speed                       GPIO_SPEED_FREQ_LOW
#define MX_ETH_CRS_Alternate                   

/* ETH_RX_CLK */
#define MX_ETH_RX_CLK                          PA1
#define MX_ETH_RX_CLK_Pin                      GPIO_PIN_1
#define MX_ETH_RX_CLK_Port                     GPIOA
#define MX_ETH_RX_CLK_Mode                     GPIO_MODE_AF_PP
#define MX_ETH_RX_CLK_Pull                     GPIO_NOPULL
#define MX_ETH_RX_CLK_Speed                    GPIO_SPEED_FREQ_LOW
#define MX_ETH_RX_CLK_Alternate                

/* ETH_MDIO */
#define MX_ETH_MDIO                            PA2
#define MX_ETH_MDIO_Pin                        GPIO_PIN_2
#define MX_ETH_MDIO_Port                       GPIOA
#define MX_ETH_MDIO_Mode                       GPIO_MODE_AF_PP
#define MX_ETH_MDIO_Pull                       GPIO_NOPULL
#define MX_ETH_MDIO_Speed                      GPIO_SPEED_FREQ_LOW
#define MX_ETH_MDIO_Alternate                  

/* ETH_COL */
#define MX_ETH_COL                             PA3
#define MX_ETH_COL_Pin                         GPIO_PIN_3
#define MX_ETH_COL_Port                        GPIOA
#define MX_ETH_COL_Mode                        GPIO_MODE_AF_PP
#define MX_ETH_COL_Pull                        GPIO_NOPULL
#define MX_ETH_COL_Speed                       GPIO_SPEED_FREQ_LOW
#define MX_ETH_COL_Alternate                   

/* ETH_RX_ER */
#define MX_ETH_RX_ER                           PB10
#define MX_ETH_RX_ER_Pin                       GPIO_PIN_10
#define MX_ETH_RX_ER_Port                      GPIOB
#define MX_ETH_RX_ER_Mode                      GPIO_MODE_INPUT
#define MX_ETH_RX_ER_Pull                      GPIO_NOPULL
#define MX_ETH_RX_ER_Speed                     GPIO_SPEED_FREQ_LOW
#define MX_ETH_RX_ER_Alternate                 

/* ETH_TX_EN */
#define MX_ETH_TX_EN                           PB11
#define MX_ETH_TX_EN_Pin                       GPIO_PIN_11
#define MX_ETH_TX_EN_Port                      GPIOB
#define MX_ETH_TX_EN_Mode                      GPIO_MODE_AF_PP
#define MX_ETH_TX_EN_Pull                      GPIO_NOPULL
#define MX_ETH_TX_EN_Speed                     GPIO_SPEED_FREQ_LOW
#define MX_ETH_TX_EN_Alternate                 

/* ETH_TXD0 */
#define MX_ETH_TXD0                            PB12

/* ETH_TXD1 */
#define MX_ETH_TXD1                            PB13

/* ETH_TXD3 */
#define MX_ETH_TXD3                            PB8
#define MX_ETH_TXD3_Pin                        GPIO_PIN_8
#define MX_ETH_TXD3_Port                       GPIOB
#define MX_ETH_TXD3_Mode                       GPIO_MODE_AF_PP
#define MX_ETH_TXD3_Pull                       GPIO_NOPULL
#define MX_ETH_TXD3_Speed                      GPIO_SPEED_FREQ_LOW
#define MX_ETH_TXD3_Alternate                  

/* ETH_MDC */
#define MX_ETH_MDC                             PC1
#define MX_ETH_MDC_Pin                         GPIO_PIN_1
#define MX_ETH_MDC_Port                        GPIOC
#define MX_ETH_MDC_Mode                        GPIO_MODE_AF_PP
#define MX_ETH_MDC_Pull                        
#define MX_ETH_MDC_Speed                       GPIO_SPEED_FREQ_LOW
#define MX_ETH_MDC_Alternate                   

/* ETH_TXD2 */
#define MX_ETH_TXD2                            PC2
#define MX_ETH_TXD2_Pin                        GPIO_PIN_2
#define MX_ETH_TXD2_Port                       GPIOC
#define MX_ETH_TXD2_Mode                       GPIO_MODE_AF_PP
#define MX_ETH_TXD2_Pull                       
#define MX_ETH_TXD2_Speed                      GPIO_SPEED_FREQ_LOW
#define MX_ETH_TXD2_Alternate                  

/* ETH_TX_CLK */
#define MX_ETH_TX_CLK                          PC3
#define MX_ETH_TX_CLK_Pin                      GPIO_PIN_3
#define MX_ETH_TX_CLK_Port                     GPIOC
#define MX_ETH_TX_CLK_Mode                     GPIO_MODE_AF_PP
#define MX_ETH_TX_CLK_Pull                     
#define MX_ETH_TX_CLK_Speed                    GPIO_SPEED_FREQ_LOW
#define MX_ETH_TX_CLK_Alternate                

/* ETH_RXD1 */
#define MX_ETH_RXD1                            PD10
#define MX_ETH_RXD1_Pin                        GPIO_PIN_10
#define MX_ETH_RXD1_Port                       GPIOD
#define MX_ETH_RXD1_Mode                       GPIO_MODE_INPUT
#define MX_ETH_RXD1_Pull                       GPIO_NOPULL
#define MX_ETH_RXD1_Speed                      GPIO_SPEED_FREQ_LOW
#define MX_ETH_RXD1_Alternate                  

/* ETH_RXD2 */
#define MX_ETH_RXD2                            PD11
#define MX_ETH_RXD2_Pin                        GPIO_PIN_11
#define MX_ETH_RXD2_Port                       GPIOD
#define MX_ETH_RXD2_Mode                       GPIO_MODE_AF_PP
#define MX_ETH_RXD2_Pull                       GPIO_NOPULL
#define MX_ETH_RXD2_Speed                      GPIO_SPEED_FREQ_LOW
#define MX_ETH_RXD2_Alternate                  

/* ETH_RXD3 */
#define MX_ETH_RXD3                            PD12
#define MX_ETH_RXD3_Pin                        GPIO_PIN_12
#define MX_ETH_RXD3_Port                       GPIOD
#define MX_ETH_RXD3_Mode                       GPIO_MODE_AF_PP
#define MX_ETH_RXD3_Pull                       GPIO_NOPULL
#define MX_ETH_RXD3_Speed                      GPIO_SPEED_FREQ_LOW
#define MX_ETH_RXD3_Alternate                  

/* ETH_RX_DV */
#define MX_ETH_RX_DV                           PD8
#define MX_ETH_RX_DV_Pin                       GPIO_PIN_8
#define MX_ETH_RX_DV_Port                      GPIOD
#define MX_ETH_RX_DV_Mode                      GPIO_MODE_AF_PP
#define MX_ETH_RX_DV_Pull                      GPIO_NOPULL
#define MX_ETH_RX_DV_Speed                     GPIO_SPEED_FREQ_LOW
#define MX_ETH_RX_DV_Alternate                 

/* ETH_RXD0 */
#define MX_ETH_RXD0                            PD9
#define MX_ETH_RXD0_Pin                        GPIO_PIN_9
#define MX_ETH_RXD0_Port                       GPIOD
#define MX_ETH_RXD0_Mode                       GPIO_MODE_AF_PP
#define MX_ETH_RXD0_Pull                       GPIO_NOPULL
#define MX_ETH_RXD0_Speed                      GPIO_SPEED_FREQ_LOW
#define MX_ETH_RXD0_Alternate                  

/*------------------------------ I2C1           -----------------------------*/
#define MX_I2C1                                1

/* Pins */

/* I2C1_SCL */
#define MX_I2C1_SCL                            PB6
#define MX_I2C1_SCL_Pin                        GPIO_PIN_6
#define MX_I2C1_SCL_Port                       GPIOB
#define MX_I2C1_SCL_Mode                       GPIO_MODE_AF_OD
#define MX_I2C1_SCL_Pull                       
#define MX_I2C1_SCL_Speed                      GPIO_SPEED_FREQ_LOW
#define MX_I2C1_SCL_Alternate                  

/* I2C1_SDA */
#define MX_I2C1_SDA                            PB7
#define MX_I2C1_SDA_Pin                        GPIO_PIN_7
#define MX_I2C1_SDA_Port                       GPIOB
#define MX_I2C1_SDA_Mode                       GPIO_MODE_AF_OD
#define MX_I2C1_SDA_Pull                       
#define MX_I2C1_SDA_Speed                      GPIO_SPEED_FREQ_LOW
#define MX_I2C1_SDA_Alternate                  

/*------------------------------ SPI3           -----------------------------*/
#define MX_SPI3                                1

/* Pins */

/* SPI3_SCK */
#define MX_SPI3_SCK                            PC10
#define MX_SPI3_SCK_Pin                        GPIO_PIN_10
#define MX_SPI3_SCK_Port                       GPIOC
#define MX_SPI3_SCK_Mode                       GPIO_MODE_AF_PP
#define MX_SPI3_SCK_Pull                       
#define MX_SPI3_SCK_Speed                      GPIO_SPEED_FREQ_LOW
#define MX_SPI3_SCK_Alternate                  

/* SPI3_MISO */
#define MX_SPI3_MISO                           PC11
#define MX_SPI3_MISO_Pin                       GPIO_PIN_11
#define MX_SPI3_MISO_Port                      GPIOC
#define MX_SPI3_MISO_Mode                      GPIO_MODE_INPUT
#define MX_SPI3_MISO_Pull                      GPIO_NOPULL
#define MX_SPI3_MISO_Speed                     GPIO_SPEED_FREQ_LOW
#define MX_SPI3_MISO_Alternate                 

/* SPI3_MOSI */
#define MX_SPI3_MOSI                           PC12
#define MX_SPI3_MOSI_Pin                       GPIO_PIN_12
#define MX_SPI3_MOSI_Port                      GPIOC
#define MX_SPI3_MOSI_Mode                      GPIO_MODE_AF_PP
#define MX_SPI3_MOSI_Pull                      
#define MX_SPI3_MOSI_Speed                     GPIO_SPEED_FREQ_LOW
#define MX_SPI3_MOSI_Alternate                 

/*------------------------------ USART2         -----------------------------*/
#define MX_USART2                              1

/* Virtual mode */
#define MX_USART2_VM                           VM_ASYNC

/* Pins */

/* USART2_TX */
#define MX_USART2_TX                           PD5
#define MX_USART2_TX_Pin                       GPIO_PIN_5
#define MX_USART2_TX_Port                      GPIOD
#define MX_USART2_TX_Mode                      GPIO_MODE_AF_PP
#define MX_USART2_TX_Pull                      
#define MX_USART2_TX_Speed                     GPIO_SPEED_FREQ_LOW
#define MX_USART2_TX_Alternate                 

/* USART2_RX */
#define MX_USART2_RX                           PD6
#define MX_USART2_RX_Pin                       GPIO_PIN_6
#define MX_USART2_RX_Port                      GPIOD
#define MX_USART2_RX_Mode                      GPIO_MODE_AF_PP
#define MX_USART2_RX_Pull                      
#define MX_USART2_RX_Speed                     GPIO_SPEED_FREQ_LOW
#define MX_USART2_RX_Alternate                 

#endif  /* __MX_DEVICE_H */