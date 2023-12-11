/******************************************************************************
 * File Name   : MX_Device.h
 * Date        : 11/12/2023 14:20:37
 * Description : STM32Cube MX parameter definitions
 * Note        : This file is generated with a generator out of the
 *               STM32CubeMX project and its generated files (DO NOT EDIT!)
 ******************************************************************************/

 #ifndef __MX_DEVICE_H
 #define __MX_DEVICE_H

 
/*------------------------------ CAN1           -----------------------------*/
#define MX_CAN1                                1

/* Pins */

/* CAN1_RX */
#define MX_CAN1_RX_Pin                         PD0
#define MX_CAN1_RX_GPIO_Pin                    GPIO_PIN_0
#define MX_CAN1_RX_GPIOx                       GPIOD
#define MX_CAN1_RX_GPIO_Mode                   GPIO_MODE_INPUT
#define MX_CAN1_RX_GPIO_PuPd                   GPIO_PULLUP
#define MX_CAN1_RX_GPIO_Speed                  
#define MX_CAN1_RX_GPIO_AF                     

/* CAN1_TX */
#define MX_CAN1_TX_Pin                         PD1
#define MX_CAN1_TX_GPIO_Pin                    GPIO_PIN_1
#define MX_CAN1_TX_GPIOx                       GPIOD
#define MX_CAN1_TX_GPIO_Mode                   GPIO_MODE_AF_PP
#define MX_CAN1_TX_GPIO_PuPd                   GPIO_PULLUP
#define MX_CAN1_TX_GPIO_Speed                  GPIO_SPEED_FREQ_LOW
#define MX_CAN1_TX_GPIO_AF                     

/*------------------------------ USB_HOST       -----------------------------*/
#define MX_USB_HOST                            1

/* Virtual mode */
#define MX_USB_HOST_VM                         Cdc
#define MX_USB_HOST_Cdc                        1


/*------------------------------ USB_OTG_FS     -----------------------------*/
#define MX_USB_OTG_FS                          1

/* Virtual mode */
#define MX_USB_OTG_FS_VM                       Host_Only
#define MX_USB_OTG_FS_Host_Only                1

/* Pins */

/* USB_OTG_FS_ID */
#define MX_USB_OTG_FS_ID_Pin                   PA10

/* USB_OTG_FS_DM */
#define MX_USB_OTG_FS_DM_Pin                   PA11

/* USB_OTG_FS_DP */
#define MX_USB_OTG_FS_DP_Pin                   PA12

/* USB_OTG_FS_VBUS */
#define MX_USB_OTG_FS_VBUS_Pin                 PA9

/*------------------------------ ETH            -----------------------------*/
#define MX_ETH                                 1

/* Pins */

/* ETH_CRS */
#define MX_ETH_CRS_Pin                         PA0
#define MX_ETH_CRS_GPIO_Pin                    GPIO_PIN_0
#define MX_ETH_CRS_GPIOx                       GPIOA
#define MX_ETH_CRS_GPIO_Mode                   GPIO_MODE_AF_PP
#define MX_ETH_CRS_GPIO_PuPd                   GPIO_NOPULL
#define MX_ETH_CRS_GPIO_Speed                  GPIO_SPEED_FREQ_LOW
#define MX_ETH_CRS_GPIO_AF                     

/* ETH_RX_CLK */
#define MX_ETH_RX_CLK_Pin                      PA1
#define MX_ETH_RX_CLK_GPIO_Pin                 GPIO_PIN_1
#define MX_ETH_RX_CLK_GPIOx                    GPIOA
#define MX_ETH_RX_CLK_GPIO_Mode                GPIO_MODE_AF_PP
#define MX_ETH_RX_CLK_GPIO_PuPd                GPIO_NOPULL
#define MX_ETH_RX_CLK_GPIO_Speed               GPIO_SPEED_FREQ_LOW
#define MX_ETH_RX_CLK_GPIO_AF                  

/* ETH_MDIO */
#define MX_ETH_MDIO_Pin                        PA2
#define MX_ETH_MDIO_GPIO_Pin                   GPIO_PIN_2
#define MX_ETH_MDIO_GPIOx                      GPIOA
#define MX_ETH_MDIO_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_ETH_MDIO_GPIO_PuPd                  GPIO_NOPULL
#define MX_ETH_MDIO_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_ETH_MDIO_GPIO_AF                    

/* ETH_COL */
#define MX_ETH_COL_Pin                         PA3
#define MX_ETH_COL_GPIO_Pin                    GPIO_PIN_3
#define MX_ETH_COL_GPIOx                       GPIOA
#define MX_ETH_COL_GPIO_Mode                   GPIO_MODE_AF_PP
#define MX_ETH_COL_GPIO_PuPd                   GPIO_NOPULL
#define MX_ETH_COL_GPIO_Speed                  GPIO_SPEED_FREQ_LOW
#define MX_ETH_COL_GPIO_AF                     

/* ETH_RX_ER */
#define MX_ETH_RX_ER_Pin                       PB10
#define MX_ETH_RX_ER_GPIO_Pin                  GPIO_PIN_10
#define MX_ETH_RX_ER_GPIOx                     GPIOB
#define MX_ETH_RX_ER_GPIO_Mode                 GPIO_MODE_INPUT
#define MX_ETH_RX_ER_GPIO_PuPd                 GPIO_NOPULL
#define MX_ETH_RX_ER_GPIO_Speed                GPIO_SPEED_FREQ_LOW
#define MX_ETH_RX_ER_GPIO_AF                   

/* ETH_TX_EN */
#define MX_ETH_TX_EN_Pin                       PB11
#define MX_ETH_TX_EN_GPIO_Pin                  GPIO_PIN_11
#define MX_ETH_TX_EN_GPIOx                     GPIOB
#define MX_ETH_TX_EN_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_ETH_TX_EN_GPIO_PuPd                 GPIO_NOPULL
#define MX_ETH_TX_EN_GPIO_Speed                GPIO_SPEED_FREQ_LOW
#define MX_ETH_TX_EN_GPIO_AF                   

/* ETH_TXD0 */
#define MX_ETH_TXD0_Pin                        PB12

/* ETH_TXD1 */
#define MX_ETH_TXD1_Pin                        PB13

/* ETH_TXD3 */
#define MX_ETH_TXD3_Pin                        PB8
#define MX_ETH_TXD3_GPIO_Pin                   GPIO_PIN_8
#define MX_ETH_TXD3_GPIOx                      GPIOB
#define MX_ETH_TXD3_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_ETH_TXD3_GPIO_PuPd                  GPIO_NOPULL
#define MX_ETH_TXD3_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_ETH_TXD3_GPIO_AF                    

/* ETH_MDC */
#define MX_ETH_MDC_Pin                         PC1
#define MX_ETH_MDC_GPIO_Pin                    GPIO_PIN_1
#define MX_ETH_MDC_GPIOx                       GPIOC
#define MX_ETH_MDC_GPIO_Mode                   GPIO_MODE_AF_PP
#define MX_ETH_MDC_GPIO_PuPd                   
#define MX_ETH_MDC_GPIO_Speed                  GPIO_SPEED_FREQ_LOW
#define MX_ETH_MDC_GPIO_AF                     

/* ETH_TXD2 */
#define MX_ETH_TXD2_Pin                        PC2
#define MX_ETH_TXD2_GPIO_Pin                   GPIO_PIN_2
#define MX_ETH_TXD2_GPIOx                      GPIOC
#define MX_ETH_TXD2_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_ETH_TXD2_GPIO_PuPd                  
#define MX_ETH_TXD2_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_ETH_TXD2_GPIO_AF                    

/* ETH_TX_CLK */
#define MX_ETH_TX_CLK_Pin                      PC3
#define MX_ETH_TX_CLK_GPIO_Pin                 GPIO_PIN_3
#define MX_ETH_TX_CLK_GPIOx                    GPIOC
#define MX_ETH_TX_CLK_GPIO_Mode                GPIO_MODE_AF_PP
#define MX_ETH_TX_CLK_GPIO_PuPd                
#define MX_ETH_TX_CLK_GPIO_Speed               GPIO_SPEED_FREQ_LOW
#define MX_ETH_TX_CLK_GPIO_AF                  

/* ETH_RXD1 */
#define MX_ETH_RXD1_Pin                        PD10
#define MX_ETH_RXD1_GPIO_Pin                   GPIO_PIN_10
#define MX_ETH_RXD1_GPIOx                      GPIOD
#define MX_ETH_RXD1_GPIO_Mode                  GPIO_MODE_INPUT
#define MX_ETH_RXD1_GPIO_PuPd                  GPIO_NOPULL
#define MX_ETH_RXD1_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_ETH_RXD1_GPIO_AF                    

/* ETH_RXD2 */
#define MX_ETH_RXD2_Pin                        PD11
#define MX_ETH_RXD2_GPIO_Pin                   GPIO_PIN_11
#define MX_ETH_RXD2_GPIOx                      GPIOD
#define MX_ETH_RXD2_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_ETH_RXD2_GPIO_PuPd                  GPIO_NOPULL
#define MX_ETH_RXD2_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_ETH_RXD2_GPIO_AF                    

/* ETH_RXD3 */
#define MX_ETH_RXD3_Pin                        PD12
#define MX_ETH_RXD3_GPIO_Pin                   GPIO_PIN_12
#define MX_ETH_RXD3_GPIOx                      GPIOD
#define MX_ETH_RXD3_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_ETH_RXD3_GPIO_PuPd                  GPIO_NOPULL
#define MX_ETH_RXD3_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_ETH_RXD3_GPIO_AF                    

/* ETH_RX_DV */
#define MX_ETH_RX_DV_Pin                       PD8
#define MX_ETH_RX_DV_GPIO_Pin                  GPIO_PIN_8
#define MX_ETH_RX_DV_GPIOx                     GPIOD
#define MX_ETH_RX_DV_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_ETH_RX_DV_GPIO_PuPd                 GPIO_NOPULL
#define MX_ETH_RX_DV_GPIO_Speed                GPIO_SPEED_FREQ_LOW
#define MX_ETH_RX_DV_GPIO_AF                   

/* ETH_RXD0 */
#define MX_ETH_RXD0_Pin                        PD9
#define MX_ETH_RXD0_GPIO_Pin                   GPIO_PIN_9
#define MX_ETH_RXD0_GPIOx                      GPIOD
#define MX_ETH_RXD0_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_ETH_RXD0_GPIO_PuPd                  GPIO_NOPULL
#define MX_ETH_RXD0_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_ETH_RXD0_GPIO_AF                    

/*------------------------------ I2C1           -----------------------------*/
#define MX_I2C1                                1

/* Pins */

/* I2C1_SCL */
#define MX_I2C1_SCL_Pin                        PB6
#define MX_I2C1_SCL_GPIO_Pin                   GPIO_PIN_6
#define MX_I2C1_SCL_GPIOx                      GPIOB
#define MX_I2C1_SCL_GPIO_Mode                  GPIO_MODE_AF_OD
#define MX_I2C1_SCL_GPIO_PuPd                  
#define MX_I2C1_SCL_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_I2C1_SCL_GPIO_AF                    

/* I2C1_SDA */
#define MX_I2C1_SDA_Pin                        PB7
#define MX_I2C1_SDA_GPIO_Pin                   GPIO_PIN_7
#define MX_I2C1_SDA_GPIOx                      GPIOB
#define MX_I2C1_SDA_GPIO_Mode                  GPIO_MODE_AF_OD
#define MX_I2C1_SDA_GPIO_PuPd                  
#define MX_I2C1_SDA_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_I2C1_SDA_GPIO_AF                    

/*------------------------------ SPI3           -----------------------------*/
#define MX_SPI3                                1

/* Pins */

/* SPI3_SCK */
#define MX_SPI3_SCK_Pin                        PC10
#define MX_SPI3_SCK_GPIO_Pin                   GPIO_PIN_10
#define MX_SPI3_SCK_GPIOx                      GPIOC
#define MX_SPI3_SCK_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_SPI3_SCK_GPIO_PuPd                  
#define MX_SPI3_SCK_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_SPI3_SCK_GPIO_AF                    

/* SPI3_MISO */
#define MX_SPI3_MISO_Pin                       PC11
#define MX_SPI3_MISO_GPIO_Pin                  GPIO_PIN_11
#define MX_SPI3_MISO_GPIOx                     GPIOC
#define MX_SPI3_MISO_GPIO_Mode                 GPIO_MODE_INPUT
#define MX_SPI3_MISO_GPIO_PuPd                 GPIO_NOPULL
#define MX_SPI3_MISO_GPIO_Speed                GPIO_SPEED_FREQ_LOW
#define MX_SPI3_MISO_GPIO_AF                   

/* SPI3_MOSI */
#define MX_SPI3_MOSI_Pin                       PC12
#define MX_SPI3_MOSI_GPIO_Pin                  GPIO_PIN_12
#define MX_SPI3_MOSI_GPIOx                     GPIOC
#define MX_SPI3_MOSI_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_SPI3_MOSI_GPIO_PuPd                 
#define MX_SPI3_MOSI_GPIO_Speed                GPIO_SPEED_FREQ_LOW
#define MX_SPI3_MOSI_GPIO_AF                   

/*------------------------------ USART2         -----------------------------*/
#define MX_USART2                              1

/* Virtual mode */
#define MX_USART2_VM                           VM_ASYNC
#define MX_USART2_VM_ASYNC                     1

/* Pins */

/* USART2_TX */
#define MX_USART2_TX_Pin                       PD5
#define MX_USART2_TX_GPIO_Pin                  GPIO_PIN_5
#define MX_USART2_TX_GPIOx                     GPIOD
#define MX_USART2_TX_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_USART2_TX_GPIO_PuPd                 
#define MX_USART2_TX_GPIO_Speed                GPIO_SPEED_FREQ_LOW
#define MX_USART2_TX_GPIO_AF                   

/* USART2_RX */
#define MX_USART2_RX_Pin                       PD6
#define MX_USART2_RX_GPIO_Pin                  GPIO_PIN_6
#define MX_USART2_RX_GPIOx                     GPIOD
#define MX_USART2_RX_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_USART2_RX_GPIO_PuPd                 
#define MX_USART2_RX_GPIO_Speed                GPIO_SPEED_FREQ_LOW
#define MX_USART2_RX_GPIO_AF                   

#endif  /* __MX_DEVICE_H */
