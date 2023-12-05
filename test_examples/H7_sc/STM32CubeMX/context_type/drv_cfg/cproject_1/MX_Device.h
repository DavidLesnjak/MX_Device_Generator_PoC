/******************************************************************************
 * File Name   : MX_Device.h
 * Date        : 05/12/2023 10:00:58
 * Description : STM32Cube MX parameter definitions
 * Note        : This file is generated with a generator out of the 
 *               STM32CubeMX project and its generated files (DO NOT EDIT!)
 ******************************************************************************/

 #ifndef __MX_DEVICE_H
 #define __MX_DEVICE_H

 
/*------------------------------ ETH            -----------------------------*/
#define MX_ETH                                 1

/* Pins */

/* ETH_REF_CLK */
#define MX_ETH_REF_CLK_Pin                     PA1
#define MX_ETH_REF_CLK_GPIO_Pin                GPIO_PIN_1
#define MX_ETH_REF_CLK_GPIOx                   GPIOA
#define MX_ETH_REF_CLK_GPIO_Mode               GPIO_MODE_AF_PP
#define MX_ETH_REF_CLK_GPIO_PuPd               GPIO_NOPULL
#define MX_ETH_REF_CLK_GPIO_Speed              GPIO_SPEED_FREQ_LOW
#define MX_ETH_REF_CLK_GPIO_AF                 GPIO_AF11_ETH

/* ETH_MDIO */
#define MX_ETH_MDIO_Pin                        PA2
#define MX_ETH_MDIO_GPIO_Pin                   GPIO_PIN_2
#define MX_ETH_MDIO_GPIOx                      GPIOA
#define MX_ETH_MDIO_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_ETH_MDIO_GPIO_PuPd                  GPIO_NOPULL
#define MX_ETH_MDIO_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_ETH_MDIO_GPIO_AF                    GPIO_AF11_ETH

/* ETH_CRS_DV */
#define MX_ETH_CRS_DV_Pin                      PA7
#define MX_ETH_CRS_DV_GPIO_Pin                 GPIO_PIN_7
#define MX_ETH_CRS_DV_GPIOx                    GPIOA
#define MX_ETH_CRS_DV_GPIO_Mode                GPIO_MODE_AF_PP
#define MX_ETH_CRS_DV_GPIO_PuPd                GPIO_NOPULL
#define MX_ETH_CRS_DV_GPIO_Speed               GPIO_SPEED_FREQ_LOW
#define MX_ETH_CRS_DV_GPIO_AF                  GPIO_AF11_ETH

/* ETH_TX_EN */
#define MX_ETH_TX_EN_Pin                       PB11
#define MX_ETH_TX_EN_GPIO_Pin                  GPIO_PIN_11
#define MX_ETH_TX_EN_GPIOx                     GPIOB
#define MX_ETH_TX_EN_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_ETH_TX_EN_GPIO_PuPd                 GPIO_NOPULL
#define MX_ETH_TX_EN_GPIO_Speed                GPIO_SPEED_FREQ_LOW
#define MX_ETH_TX_EN_GPIO_AF                   GPIO_AF11_ETH

/* ETH_TXD0 */
#define MX_ETH_TXD0_Pin                        PB12
#define MX_ETH_TXD0_GPIO_Pin                   GPIO_PIN_12
#define MX_ETH_TXD0_GPIOx                      GPIOB
#define MX_ETH_TXD0_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_ETH_TXD0_GPIO_PuPd                  GPIO_NOPULL
#define MX_ETH_TXD0_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_ETH_TXD0_GPIO_AF                    GPIO_AF11_ETH

/* ETH_TXD1 */
#define MX_ETH_TXD1_Pin                        PB13
#define MX_ETH_TXD1_GPIO_Pin                   GPIO_PIN_13
#define MX_ETH_TXD1_GPIOx                      GPIOB
#define MX_ETH_TXD1_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_ETH_TXD1_GPIO_PuPd                  GPIO_NOPULL
#define MX_ETH_TXD1_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_ETH_TXD1_GPIO_AF                    GPIO_AF11_ETH

/* ETH_MDC */
#define MX_ETH_MDC_Pin                         PC1
#define MX_ETH_MDC_GPIO_Pin                    GPIO_PIN_1
#define MX_ETH_MDC_GPIOx                       GPIOC
#define MX_ETH_MDC_GPIO_Mode                   GPIO_MODE_AF_PP
#define MX_ETH_MDC_GPIO_PuPd                   GPIO_NOPULL
#define MX_ETH_MDC_GPIO_Speed                  GPIO_SPEED_FREQ_LOW
#define MX_ETH_MDC_GPIO_AF                     GPIO_AF11_ETH

/* ETH_RXD0 */
#define MX_ETH_RXD0_Pin                        PC4
#define MX_ETH_RXD0_GPIO_Pin                   GPIO_PIN_4
#define MX_ETH_RXD0_GPIOx                      GPIOC
#define MX_ETH_RXD0_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_ETH_RXD0_GPIO_PuPd                  GPIO_NOPULL
#define MX_ETH_RXD0_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_ETH_RXD0_GPIO_AF                    GPIO_AF11_ETH

/* ETH_RXD1 */
#define MX_ETH_RXD1_Pin                        PC5
#define MX_ETH_RXD1_GPIO_Pin                   GPIO_PIN_5
#define MX_ETH_RXD1_GPIOx                      GPIOC
#define MX_ETH_RXD1_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_ETH_RXD1_GPIO_PuPd                  GPIO_NOPULL
#define MX_ETH_RXD1_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_ETH_RXD1_GPIO_AF                    GPIO_AF11_ETH

/*------------------------------ UART5          -----------------------------*/
#define MX_UART5                               1

/* Pins */

/* UART5_RX */
#define MX_UART5_RX_Pin                        PB5
#define MX_UART5_RX_GPIO_Pin                   GPIO_PIN_5
#define MX_UART5_RX_GPIOx                      GPIOB
#define MX_UART5_RX_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_UART5_RX_GPIO_PuPd                  GPIO_NOPULL
#define MX_UART5_RX_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_UART5_RX_GPIO_AF                    GPIO_AF14_UART5

/* UART5_TX */
#define MX_UART5_TX_Pin                        PB6
#define MX_UART5_TX_GPIO_Pin                   GPIO_PIN_6
#define MX_UART5_TX_GPIOx                      GPIOB
#define MX_UART5_TX_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_UART5_TX_GPIO_PuPd                  GPIO_NOPULL
#define MX_UART5_TX_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_UART5_TX_GPIO_AF                    GPIO_AF14_UART5

/*------------------------------ UART8          -----------------------------*/
#define MX_UART8                               1

/* Pins */

/* UART8_RX */
#define MX_UART8_RX_Pin                        PE0
#define MX_UART8_RX_GPIO_Pin                   GPIO_PIN_0
#define MX_UART8_RX_GPIOx                      GPIOE
#define MX_UART8_RX_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_UART8_RX_GPIO_PuPd                  GPIO_NOPULL
#define MX_UART8_RX_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_UART8_RX_GPIO_AF                    GPIO_AF8_UART8

/* UART8_TX */
#define MX_UART8_TX_Pin                        PE1
#define MX_UART8_TX_GPIO_Pin                   GPIO_PIN_1
#define MX_UART8_TX_GPIOx                      GPIOE
#define MX_UART8_TX_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_UART8_TX_GPIO_PuPd                  GPIO_NOPULL
#define MX_UART8_TX_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_UART8_TX_GPIO_AF                    GPIO_AF8_UART8

/*------------------------------ USART10        -----------------------------*/
#define MX_USART10                             1

/* Virtual mode */
#define MX_USART10_VM                          VM_ASYNC
#define MX_USART10_VM_ASYNC                    1

/* Pins */

/* USART10_RX */
#define MX_USART10_RX_Pin                      PE2
#define MX_USART10_RX_GPIO_Pin                 GPIO_PIN_2
#define MX_USART10_RX_GPIOx                    GPIOE
#define MX_USART10_RX_GPIO_Mode                GPIO_MODE_AF_PP
#define MX_USART10_RX_GPIO_PuPd                GPIO_NOPULL
#define MX_USART10_RX_GPIO_Speed               GPIO_SPEED_FREQ_LOW
#define MX_USART10_RX_GPIO_AF                  GPIO_AF4_USART10

/* USART10_TX */
#define MX_USART10_TX_Pin                      PE3
#define MX_USART10_TX_GPIO_Pin                 GPIO_PIN_3
#define MX_USART10_TX_GPIOx                    GPIOE
#define MX_USART10_TX_GPIO_Mode                GPIO_MODE_AF_PP
#define MX_USART10_TX_GPIO_PuPd                GPIO_NOPULL
#define MX_USART10_TX_GPIO_Speed               GPIO_SPEED_FREQ_LOW
#define MX_USART10_TX_GPIO_AF                  GPIO_AF11_USART10

/*------------------------------ USB_OTG_HS     -----------------------------*/
#define MX_USB_OTG_HS                          1

/* Pins */

/* USB_OTG_HS_ID */
#define MX_USB_OTG_HS_ID_Pin                   PA10

/* USB_OTG_HS_DM */
#define MX_USB_OTG_HS_DM_Pin                   PA11

/* USB_OTG_HS_DP */
#define MX_USB_OTG_HS_DP_Pin                   PA12

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
#define MX_FDCAN1_TX_GPIO_PuPd                 GPIO_NOPULL
#define MX_FDCAN1_TX_GPIO_Speed                GPIO_SPEED_FREQ_LOW
#define MX_FDCAN1_TX_GPIO_AF                   GPIO_AF9_FDCAN1

/*------------------------------ LPUART1        -----------------------------*/
#define MX_LPUART1                             1

/* Pins */

/* LPUART1_TX */
#define MX_LPUART1_TX_Pin                      PA9
#define MX_LPUART1_TX_GPIO_Pin                 GPIO_PIN_9
#define MX_LPUART1_TX_GPIOx                    GPIOA
#define MX_LPUART1_TX_GPIO_Mode                GPIO_MODE_AF_PP
#define MX_LPUART1_TX_GPIO_PuPd                GPIO_NOPULL
#define MX_LPUART1_TX_GPIO_Speed               GPIO_SPEED_FREQ_LOW
#define MX_LPUART1_TX_GPIO_AF                  GPIO_AF3_LPUART

/* LPUART1_RX */
#define MX_LPUART1_RX_Pin                      PB7
#define MX_LPUART1_RX_GPIO_Pin                 GPIO_PIN_7
#define MX_LPUART1_RX_GPIOx                    GPIOB
#define MX_LPUART1_RX_GPIO_Mode                GPIO_MODE_AF_PP
#define MX_LPUART1_RX_GPIO_PuPd                GPIO_NOPULL
#define MX_LPUART1_RX_GPIO_Speed               GPIO_SPEED_FREQ_LOW
#define MX_LPUART1_RX_GPIO_AF                  GPIO_AF8_LPUART

/*------------------------------ SDMMC1         -----------------------------*/
#define MX_SDMMC1                              1

/* Pins */

/* SDMMC1_CKIN */
#define MX_SDMMC1_CKIN_Pin                     PB8
#define MX_SDMMC1_CKIN_GPIO_Pin                GPIO_PIN_8
#define MX_SDMMC1_CKIN_GPIOx                   GPIOB
#define MX_SDMMC1_CKIN_GPIO_Mode               GPIO_MODE_AF_PP
#define MX_SDMMC1_CKIN_GPIO_PuPd               GPIO_NOPULL
#define MX_SDMMC1_CKIN_GPIO_Speed              GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDMMC1_CKIN_GPIO_AF                 GPIO_AF12_SDMMC1

/* SDMMC1_CDIR */
#define MX_SDMMC1_CDIR_Pin                     PB9
#define MX_SDMMC1_CDIR_GPIO_Pin                GPIO_PIN_9
#define MX_SDMMC1_CDIR_GPIOx                   GPIOB
#define MX_SDMMC1_CDIR_GPIO_Mode               GPIO_MODE_AF_PP
#define MX_SDMMC1_CDIR_GPIO_PuPd               GPIO_NOPULL
#define MX_SDMMC1_CDIR_GPIO_Speed              GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDMMC1_CDIR_GPIO_AF                 GPIO_AF12_SDMMC1

/* SDMMC1_D2 */
#define MX_SDMMC1_D2_Pin                       PC10
#define MX_SDMMC1_D2_GPIO_Pin                  GPIO_PIN_10
#define MX_SDMMC1_D2_GPIOx                     GPIOC
#define MX_SDMMC1_D2_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_SDMMC1_D2_GPIO_PuPd                 GPIO_NOPULL
#define MX_SDMMC1_D2_GPIO_Speed                GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDMMC1_D2_GPIO_AF                   GPIO_AF12_SDMMC1

/* SDMMC1_D3 */
#define MX_SDMMC1_D3_Pin                       PC11
#define MX_SDMMC1_D3_GPIO_Pin                  GPIO_PIN_11
#define MX_SDMMC1_D3_GPIOx                     GPIOC
#define MX_SDMMC1_D3_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_SDMMC1_D3_GPIO_PuPd                 GPIO_NOPULL
#define MX_SDMMC1_D3_GPIO_Speed                GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDMMC1_D3_GPIO_AF                   GPIO_AF12_SDMMC1

/* SDMMC1_CK */
#define MX_SDMMC1_CK_Pin                       PC12
#define MX_SDMMC1_CK_GPIO_Pin                  GPIO_PIN_12
#define MX_SDMMC1_CK_GPIOx                     GPIOC
#define MX_SDMMC1_CK_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_SDMMC1_CK_GPIO_PuPd                 GPIO_NOPULL
#define MX_SDMMC1_CK_GPIO_Speed                GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDMMC1_CK_GPIO_AF                   GPIO_AF12_SDMMC1

/* SDMMC1_D0DIR */
#define MX_SDMMC1_D0DIR_Pin                    PC6
#define MX_SDMMC1_D0DIR_GPIO_Pin               GPIO_PIN_6
#define MX_SDMMC1_D0DIR_GPIOx                  GPIOC
#define MX_SDMMC1_D0DIR_GPIO_Mode              GPIO_MODE_AF_PP
#define MX_SDMMC1_D0DIR_GPIO_PuPd              GPIO_NOPULL
#define MX_SDMMC1_D0DIR_GPIO_Speed             GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDMMC1_D0DIR_GPIO_AF                GPIO_AF8_SDMMC1

/* SDMMC1_D123DIR */
#define MX_SDMMC1_D123DIR_Pin                  PC7
#define MX_SDMMC1_D123DIR_GPIO_Pin             GPIO_PIN_7
#define MX_SDMMC1_D123DIR_GPIOx                GPIOC
#define MX_SDMMC1_D123DIR_GPIO_Mode            GPIO_MODE_AF_PP
#define MX_SDMMC1_D123DIR_GPIO_PuPd            GPIO_NOPULL
#define MX_SDMMC1_D123DIR_GPIO_Speed           GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDMMC1_D123DIR_GPIO_AF              GPIO_AF8_SDMMC1

/* SDMMC1_D0 */
#define MX_SDMMC1_D0_Pin                       PC8
#define MX_SDMMC1_D0_GPIO_Pin                  GPIO_PIN_8
#define MX_SDMMC1_D0_GPIOx                     GPIOC
#define MX_SDMMC1_D0_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_SDMMC1_D0_GPIO_PuPd                 GPIO_NOPULL
#define MX_SDMMC1_D0_GPIO_Speed                GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDMMC1_D0_GPIO_AF                   GPIO_AF12_SDMMC1

/* SDMMC1_D1 */
#define MX_SDMMC1_D1_Pin                       PC9
#define MX_SDMMC1_D1_GPIO_Pin                  GPIO_PIN_9
#define MX_SDMMC1_D1_GPIOx                     GPIOC
#define MX_SDMMC1_D1_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_SDMMC1_D1_GPIO_PuPd                 GPIO_NOPULL
#define MX_SDMMC1_D1_GPIO_Speed                GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDMMC1_D1_GPIO_AF                   GPIO_AF12_SDMMC1

/* SDMMC1_CMD */
#define MX_SDMMC1_CMD_Pin                      PD2
#define MX_SDMMC1_CMD_GPIO_Pin                 GPIO_PIN_2
#define MX_SDMMC1_CMD_GPIOx                    GPIOD
#define MX_SDMMC1_CMD_GPIO_Mode                GPIO_MODE_AF_PP
#define MX_SDMMC1_CMD_GPIO_PuPd                GPIO_NOPULL
#define MX_SDMMC1_CMD_GPIO_Speed               GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDMMC1_CMD_GPIO_AF                  GPIO_AF12_SDMMC1

/*------------------------------ SDMMC2         -----------------------------*/
#define MX_SDMMC2                              1

/* Pins */

/* SDMMC2_CMD */
#define MX_SDMMC2_CMD_Pin                      PA0
#define MX_SDMMC2_CMD_GPIO_Pin                 GPIO_PIN_0
#define MX_SDMMC2_CMD_GPIOx                    GPIOA
#define MX_SDMMC2_CMD_GPIO_Mode                GPIO_MODE_AF_PP
#define MX_SDMMC2_CMD_GPIO_PuPd                GPIO_NOPULL
#define MX_SDMMC2_CMD_GPIO_Speed               GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDMMC2_CMD_GPIO_AF                  GPIO_AF9_SDMMC2

/* SDMMC2_D0 */
#define MX_SDMMC2_D0_Pin                       PB14
#define MX_SDMMC2_D0_GPIO_Pin                  GPIO_PIN_14
#define MX_SDMMC2_D0_GPIOx                     GPIOB
#define MX_SDMMC2_D0_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_SDMMC2_D0_GPIO_PuPd                 GPIO_NOPULL
#define MX_SDMMC2_D0_GPIO_Speed                GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDMMC2_D0_GPIO_AF                   GPIO_AF9_SDMMC2

/* SDMMC2_D1 */
#define MX_SDMMC2_D1_Pin                       PB15
#define MX_SDMMC2_D1_GPIO_Pin                  GPIO_PIN_15
#define MX_SDMMC2_D1_GPIOx                     GPIOB
#define MX_SDMMC2_D1_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_SDMMC2_D1_GPIO_PuPd                 GPIO_NOPULL
#define MX_SDMMC2_D1_GPIO_Speed                GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDMMC2_D1_GPIO_AF                   GPIO_AF9_SDMMC2

/* SDMMC2_CK */
#define MX_SDMMC2_CK_Pin                       PD6
#define MX_SDMMC2_CK_GPIO_Pin                  GPIO_PIN_6
#define MX_SDMMC2_CK_GPIOx                     GPIOD
#define MX_SDMMC2_CK_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_SDMMC2_CK_GPIO_PuPd                 GPIO_NOPULL
#define MX_SDMMC2_CK_GPIO_Speed                GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDMMC2_CK_GPIO_AF                   GPIO_AF11_SDMMC2

/* SDMMC2_D2 */
#define MX_SDMMC2_D2_Pin                       PG11
#define MX_SDMMC2_D2_GPIO_Pin                  GPIO_PIN_11
#define MX_SDMMC2_D2_GPIOx                     GPIOG
#define MX_SDMMC2_D2_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_SDMMC2_D2_GPIO_PuPd                 GPIO_NOPULL
#define MX_SDMMC2_D2_GPIO_Speed                GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDMMC2_D2_GPIO_AF                   GPIO_AF10_SDMMC2

/* SDMMC2_D3 */
#define MX_SDMMC2_D3_Pin                       PG12
#define MX_SDMMC2_D3_GPIO_Pin                  GPIO_PIN_12
#define MX_SDMMC2_D3_GPIOx                     GPIOG
#define MX_SDMMC2_D3_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_SDMMC2_D3_GPIO_PuPd                 GPIO_NOPULL
#define MX_SDMMC2_D3_GPIO_Speed                GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDMMC2_D3_GPIO_AF                   GPIO_AF10_SDMMC2

/*------------------------------ SPI3           -----------------------------*/
#define MX_SPI3                                1

/* Pins */

/* SPI3_MOSI */
#define MX_SPI3_MOSI_Pin                       PB2
#define MX_SPI3_MOSI_GPIO_Pin                  GPIO_PIN_2
#define MX_SPI3_MOSI_GPIOx                     GPIOB
#define MX_SPI3_MOSI_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_SPI3_MOSI_GPIO_PuPd                 GPIO_NOPULL
#define MX_SPI3_MOSI_GPIO_Speed                GPIO_SPEED_FREQ_LOW
#define MX_SPI3_MOSI_GPIO_AF                   GPIO_AF7_SPI3

/* SPI3_SCK */
#define MX_SPI3_SCK_Pin                        PB3
#define MX_SPI3_SCK_GPIO_Pin                   GPIO_PIN_3
#define MX_SPI3_SCK_GPIOx                      GPIOB
#define MX_SPI3_SCK_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_SPI3_SCK_GPIO_PuPd                  GPIO_NOPULL
#define MX_SPI3_SCK_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_SPI3_SCK_GPIO_AF                    GPIO_AF6_SPI3

/* SPI3_MISO */
#define MX_SPI3_MISO_Pin                       PB4
#define MX_SPI3_MISO_GPIO_Pin                  GPIO_PIN_4
#define MX_SPI3_MISO_GPIOx                     GPIOB
#define MX_SPI3_MISO_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_SPI3_MISO_GPIO_PuPd                 GPIO_NOPULL
#define MX_SPI3_MISO_GPIO_Speed                GPIO_SPEED_FREQ_LOW
#define MX_SPI3_MISO_GPIO_AF                   GPIO_AF6_SPI3

/*------------------------------ SPI6           -----------------------------*/
#define MX_SPI6                                1

/* Pins */

/* SPI6_SCK */
#define MX_SPI6_SCK_Pin                        PA5
#define MX_SPI6_SCK_GPIO_Pin                   GPIO_PIN_5
#define MX_SPI6_SCK_GPIOx                      GPIOA
#define MX_SPI6_SCK_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_SPI6_SCK_GPIO_PuPd                  GPIO_NOPULL
#define MX_SPI6_SCK_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_SPI6_SCK_GPIO_AF                    GPIO_AF8_SPI6

/* SPI6_MISO */
#define MX_SPI6_MISO_Pin                       PA6
#define MX_SPI6_MISO_GPIO_Pin                  GPIO_PIN_6
#define MX_SPI6_MISO_GPIOx                     GPIOA
#define MX_SPI6_MISO_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_SPI6_MISO_GPIO_PuPd                 GPIO_NOPULL
#define MX_SPI6_MISO_GPIO_Speed                GPIO_SPEED_FREQ_LOW
#define MX_SPI6_MISO_GPIO_AF                   GPIO_AF8_SPI6

/* SPI6_MOSI */
#define MX_SPI6_MOSI_Pin                       PG14
#define MX_SPI6_MOSI_GPIO_Pin                  GPIO_PIN_14
#define MX_SPI6_MOSI_GPIOx                     GPIOG
#define MX_SPI6_MOSI_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_SPI6_MOSI_GPIO_PuPd                 GPIO_NOPULL
#define MX_SPI6_MOSI_GPIO_Speed                GPIO_SPEED_FREQ_LOW
#define MX_SPI6_MOSI_GPIO_AF                   GPIO_AF5_SPI6

#endif  /* __MX_DEVICE_H */
