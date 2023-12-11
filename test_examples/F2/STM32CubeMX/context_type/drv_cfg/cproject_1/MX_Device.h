/******************************************************************************
 * File Name   : MX_Device.h
 * Date        : 11/12/2023 14:20:38
 * Description : STM32Cube MX parameter definitions
 * Note        : This file is generated with a generator out of the
 *               STM32CubeMX project and its generated files (DO NOT EDIT!)
 ******************************************************************************/

 #ifndef __MX_DEVICE_H
 #define __MX_DEVICE_H

 
/*------------------------------ SDIO           -----------------------------*/
#define MX_SDIO                                1

/* Pins */

/* SDIO_D2 */
#define MX_SDIO_D2_Pin                         PC10
#define MX_SDIO_D2_GPIO_Pin                    GPIO_PIN_10
#define MX_SDIO_D2_GPIOx                       GPIOC
#define MX_SDIO_D2_GPIO_Mode                   GPIO_MODE_AF_PP
#define MX_SDIO_D2_GPIO_PuPd                   GPIO_NOPULL
#define MX_SDIO_D2_GPIO_Speed                  GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDIO_D2_GPIO_AF                     GPIO_AF12_SDIO

/* SDIO_D3 */
#define MX_SDIO_D3_Pin                         PC11
#define MX_SDIO_D3_GPIO_Pin                    GPIO_PIN_11
#define MX_SDIO_D3_GPIOx                       GPIOC
#define MX_SDIO_D3_GPIO_Mode                   GPIO_MODE_AF_PP
#define MX_SDIO_D3_GPIO_PuPd                   GPIO_NOPULL
#define MX_SDIO_D3_GPIO_Speed                  GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDIO_D3_GPIO_AF                     GPIO_AF12_SDIO

/* SDIO_CK */
#define MX_SDIO_CK_Pin                         PC12
#define MX_SDIO_CK_GPIO_Pin                    GPIO_PIN_12
#define MX_SDIO_CK_GPIOx                       GPIOC
#define MX_SDIO_CK_GPIO_Mode                   GPIO_MODE_AF_PP
#define MX_SDIO_CK_GPIO_PuPd                   GPIO_NOPULL
#define MX_SDIO_CK_GPIO_Speed                  GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDIO_CK_GPIO_AF                     GPIO_AF12_SDIO

/* SDIO_D0 */
#define MX_SDIO_D0_Pin                         PC8
#define MX_SDIO_D0_GPIO_Pin                    GPIO_PIN_8
#define MX_SDIO_D0_GPIOx                       GPIOC
#define MX_SDIO_D0_GPIO_Mode                   GPIO_MODE_AF_PP
#define MX_SDIO_D0_GPIO_PuPd                   GPIO_NOPULL
#define MX_SDIO_D0_GPIO_Speed                  GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDIO_D0_GPIO_AF                     GPIO_AF12_SDIO

/* SDIO_D1 */
#define MX_SDIO_D1_Pin                         PC9
#define MX_SDIO_D1_GPIO_Pin                    GPIO_PIN_9
#define MX_SDIO_D1_GPIOx                       GPIOC
#define MX_SDIO_D1_GPIO_Mode                   GPIO_MODE_AF_PP
#define MX_SDIO_D1_GPIO_PuPd                   GPIO_NOPULL
#define MX_SDIO_D1_GPIO_Speed                  GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDIO_D1_GPIO_AF                     GPIO_AF12_SDIO

/* SDIO_CMD */
#define MX_SDIO_CMD_Pin                        PD2
#define MX_SDIO_CMD_GPIO_Pin                   GPIO_PIN_2
#define MX_SDIO_CMD_GPIOx                      GPIOD
#define MX_SDIO_CMD_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_SDIO_CMD_GPIO_PuPd                  GPIO_NOPULL
#define MX_SDIO_CMD_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SDIO_CMD_GPIO_AF                    GPIO_AF12_SDIO

/*------------------------------ SPI1           -----------------------------*/
#define MX_SPI1                                1

/* Pins */

/* SPI1_MISO */
#define MX_SPI1_MISO_Pin                       PA6
#define MX_SPI1_MISO_GPIO_Pin                  GPIO_PIN_6
#define MX_SPI1_MISO_GPIOx                     GPIOA
#define MX_SPI1_MISO_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_SPI1_MISO_GPIO_PuPd                 GPIO_NOPULL
#define MX_SPI1_MISO_GPIO_Speed                GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SPI1_MISO_GPIO_AF                   GPIO_AF5_SPI1

/* SPI1_MOSI */
#define MX_SPI1_MOSI_Pin                       PA7
#define MX_SPI1_MOSI_GPIO_Pin                  GPIO_PIN_7
#define MX_SPI1_MOSI_GPIOx                     GPIOA
#define MX_SPI1_MOSI_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_SPI1_MOSI_GPIO_PuPd                 GPIO_NOPULL
#define MX_SPI1_MOSI_GPIO_Speed                GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SPI1_MOSI_GPIO_AF                   GPIO_AF5_SPI1

/* SPI1_SCK */
#define MX_SPI1_SCK_Pin                        PB3
#define MX_SPI1_SCK_GPIO_Pin                   GPIO_PIN_3
#define MX_SPI1_SCK_GPIOx                      GPIOB
#define MX_SPI1_SCK_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_SPI1_SCK_GPIO_PuPd                  GPIO_NOPULL
#define MX_SPI1_SCK_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SPI1_SCK_GPIO_AF                    GPIO_AF5_SPI1

/*------------------------------ UART4          -----------------------------*/
#define MX_UART4                               1

/* Virtual mode */
#define MX_UART4_VM                            Asynchronous
#define MX_UART4_Asynchronous                  1

/* Pins */

/* UART4_TX */
#define MX_UART4_TX_Pin                        PA0
#define MX_UART4_TX_GPIO_Pin                   GPIO_PIN_0
#define MX_UART4_TX_GPIOx                      GPIOA
#define MX_UART4_TX_GPIO_Mode                  GPIO_MODE_AF_OD
#define MX_UART4_TX_GPIO_PuPd                  GPIO_PULLUP
#define MX_UART4_TX_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_UART4_TX_GPIO_AF                    GPIO_AF8_UART4

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
#define MX_USART3_TX_GPIO_Speed                GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USART3_TX_GPIO_AF                   GPIO_AF7_USART3

/* USART3_RX */
#define MX_USART3_RX_Pin                       PD9
#define MX_USART3_RX_GPIO_Pin                  GPIO_PIN_9
#define MX_USART3_RX_GPIOx                     GPIOD
#define MX_USART3_RX_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_USART3_RX_GPIO_PuPd                 GPIO_NOPULL
#define MX_USART3_RX_GPIO_Speed                GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USART3_RX_GPIO_AF                   GPIO_AF7_USART3

/*------------------------------ USB_OTG_FS     -----------------------------*/
#define MX_USB_OTG_FS                          1

/* Virtual mode */
#define MX_USB_OTG_FS_VM                       Host_Only
#define MX_USB_OTG_FS_Host_Only                1

/* Pins */

/* USB_OTG_FS_DM */
#define MX_USB_OTG_FS_DM_Pin                   PA11
#define MX_USB_OTG_FS_DM_GPIO_Pin              GPIO_PIN_11
#define MX_USB_OTG_FS_DM_GPIOx                 GPIOA
#define MX_USB_OTG_FS_DM_GPIO_Mode             GPIO_MODE_AF_PP
#define MX_USB_OTG_FS_DM_GPIO_PuPd             GPIO_NOPULL
#define MX_USB_OTG_FS_DM_GPIO_Speed            GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USB_OTG_FS_DM_GPIO_AF               GPIO_AF10_OTG_FS

/* USB_OTG_FS_DP */
#define MX_USB_OTG_FS_DP_Pin                   PA12
#define MX_USB_OTG_FS_DP_GPIO_Pin              GPIO_PIN_12
#define MX_USB_OTG_FS_DP_GPIOx                 GPIOA
#define MX_USB_OTG_FS_DP_GPIO_Mode             GPIO_MODE_AF_PP
#define MX_USB_OTG_FS_DP_GPIO_PuPd             GPIO_NOPULL
#define MX_USB_OTG_FS_DP_GPIO_Speed            GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USB_OTG_FS_DP_GPIO_AF               GPIO_AF10_OTG_FS

/*------------------------------ USB_OTG_HS     -----------------------------*/
#define MX_USB_OTG_HS                          1

/* Virtual mode */
#define MX_USB_OTG_HS_VM                       Device_HS
#define MX_USB_OTG_HS_Device_HS                1

/* Pins */

/* USB_OTG_HS_ULPI_D0 */
#define MX_USB_OTG_HS_ULPI_D0_Pin              PA3
#define MX_USB_OTG_HS_ULPI_D0_GPIO_Pin         GPIO_PIN_3
#define MX_USB_OTG_HS_ULPI_D0_GPIOx            GPIOA
#define MX_USB_OTG_HS_ULPI_D0_GPIO_Mode        GPIO_MODE_AF_PP
#define MX_USB_OTG_HS_ULPI_D0_GPIO_PuPd        GPIO_NOPULL
#define MX_USB_OTG_HS_ULPI_D0_GPIO_Speed       GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USB_OTG_HS_ULPI_D0_GPIO_AF          GPIO_AF10_OTG_HS

/* USB_OTG_HS_ULPI_CK */
#define MX_USB_OTG_HS_ULPI_CK_Pin              PA5
#define MX_USB_OTG_HS_ULPI_CK_GPIO_Pin         GPIO_PIN_5
#define MX_USB_OTG_HS_ULPI_CK_GPIOx            GPIOA
#define MX_USB_OTG_HS_ULPI_CK_GPIO_Mode        GPIO_MODE_AF_PP
#define MX_USB_OTG_HS_ULPI_CK_GPIO_PuPd        GPIO_NOPULL
#define MX_USB_OTG_HS_ULPI_CK_GPIO_Speed       GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USB_OTG_HS_ULPI_CK_GPIO_AF          GPIO_AF10_OTG_HS

/* USB_OTG_HS_ULPI_D1 */
#define MX_USB_OTG_HS_ULPI_D1_Pin              PB0
#define MX_USB_OTG_HS_ULPI_D1_GPIO_Pin         GPIO_PIN_0
#define MX_USB_OTG_HS_ULPI_D1_GPIOx            GPIOB
#define MX_USB_OTG_HS_ULPI_D1_GPIO_Mode        GPIO_MODE_AF_PP
#define MX_USB_OTG_HS_ULPI_D1_GPIO_PuPd        GPIO_NOPULL
#define MX_USB_OTG_HS_ULPI_D1_GPIO_Speed       GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USB_OTG_HS_ULPI_D1_GPIO_AF          GPIO_AF10_OTG_HS

/* USB_OTG_HS_ULPI_D2 */
#define MX_USB_OTG_HS_ULPI_D2_Pin              PB1
#define MX_USB_OTG_HS_ULPI_D2_GPIO_Pin         GPIO_PIN_1
#define MX_USB_OTG_HS_ULPI_D2_GPIOx            GPIOB
#define MX_USB_OTG_HS_ULPI_D2_GPIO_Mode        GPIO_MODE_AF_PP
#define MX_USB_OTG_HS_ULPI_D2_GPIO_PuPd        GPIO_NOPULL
#define MX_USB_OTG_HS_ULPI_D2_GPIO_Speed       GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USB_OTG_HS_ULPI_D2_GPIO_AF          GPIO_AF10_OTG_HS

/* USB_OTG_HS_ULPI_D3 */
#define MX_USB_OTG_HS_ULPI_D3_Pin              PB10
#define MX_USB_OTG_HS_ULPI_D3_GPIO_Pin         GPIO_PIN_10
#define MX_USB_OTG_HS_ULPI_D3_GPIOx            GPIOB
#define MX_USB_OTG_HS_ULPI_D3_GPIO_Mode        GPIO_MODE_AF_PP
#define MX_USB_OTG_HS_ULPI_D3_GPIO_PuPd        GPIO_NOPULL
#define MX_USB_OTG_HS_ULPI_D3_GPIO_Speed       GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USB_OTG_HS_ULPI_D3_GPIO_AF          GPIO_AF10_OTG_HS

/* USB_OTG_HS_ULPI_D4 */
#define MX_USB_OTG_HS_ULPI_D4_Pin              PB11
#define MX_USB_OTG_HS_ULPI_D4_GPIO_Pin         GPIO_PIN_11
#define MX_USB_OTG_HS_ULPI_D4_GPIOx            GPIOB
#define MX_USB_OTG_HS_ULPI_D4_GPIO_Mode        GPIO_MODE_AF_PP
#define MX_USB_OTG_HS_ULPI_D4_GPIO_PuPd        GPIO_NOPULL
#define MX_USB_OTG_HS_ULPI_D4_GPIO_Speed       GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USB_OTG_HS_ULPI_D4_GPIO_AF          GPIO_AF10_OTG_HS

/* USB_OTG_HS_ULPI_D5 */
#define MX_USB_OTG_HS_ULPI_D5_Pin              PB12
#define MX_USB_OTG_HS_ULPI_D5_GPIO_Pin         GPIO_PIN_12
#define MX_USB_OTG_HS_ULPI_D5_GPIOx            GPIOB
#define MX_USB_OTG_HS_ULPI_D5_GPIO_Mode        GPIO_MODE_AF_PP
#define MX_USB_OTG_HS_ULPI_D5_GPIO_PuPd        GPIO_NOPULL
#define MX_USB_OTG_HS_ULPI_D5_GPIO_Speed       GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USB_OTG_HS_ULPI_D5_GPIO_AF          GPIO_AF10_OTG_HS

/* USB_OTG_HS_ULPI_D6 */
#define MX_USB_OTG_HS_ULPI_D6_Pin              PB13
#define MX_USB_OTG_HS_ULPI_D6_GPIO_Pin         GPIO_PIN_13
#define MX_USB_OTG_HS_ULPI_D6_GPIOx            GPIOB
#define MX_USB_OTG_HS_ULPI_D6_GPIO_Mode        GPIO_MODE_AF_PP
#define MX_USB_OTG_HS_ULPI_D6_GPIO_PuPd        GPIO_NOPULL
#define MX_USB_OTG_HS_ULPI_D6_GPIO_Speed       GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USB_OTG_HS_ULPI_D6_GPIO_AF          GPIO_AF10_OTG_HS

/* USB_OTG_HS_ULPI_D7 */
#define MX_USB_OTG_HS_ULPI_D7_Pin              PB5
#define MX_USB_OTG_HS_ULPI_D7_GPIO_Pin         GPIO_PIN_5
#define MX_USB_OTG_HS_ULPI_D7_GPIOx            GPIOB
#define MX_USB_OTG_HS_ULPI_D7_GPIO_Mode        GPIO_MODE_AF_PP
#define MX_USB_OTG_HS_ULPI_D7_GPIO_PuPd        GPIO_NOPULL
#define MX_USB_OTG_HS_ULPI_D7_GPIO_Speed       GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USB_OTG_HS_ULPI_D7_GPIO_AF          GPIO_AF10_OTG_HS

/* USB_OTG_HS_ULPI_STP */
#define MX_USB_OTG_HS_ULPI_STP_Pin             PC0
#define MX_USB_OTG_HS_ULPI_STP_GPIO_Pin        GPIO_PIN_0
#define MX_USB_OTG_HS_ULPI_STP_GPIOx           GPIOC
#define MX_USB_OTG_HS_ULPI_STP_GPIO_Mode       GPIO_MODE_AF_PP
#define MX_USB_OTG_HS_ULPI_STP_GPIO_PuPd       GPIO_NOPULL
#define MX_USB_OTG_HS_ULPI_STP_GPIO_Speed      GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USB_OTG_HS_ULPI_STP_GPIO_AF         GPIO_AF10_OTG_HS

/* USB_OTG_HS_ULPI_DIR */
#define MX_USB_OTG_HS_ULPI_DIR_Pin             PC2
#define MX_USB_OTG_HS_ULPI_DIR_GPIO_Pin        GPIO_PIN_2
#define MX_USB_OTG_HS_ULPI_DIR_GPIOx           GPIOC
#define MX_USB_OTG_HS_ULPI_DIR_GPIO_Mode       GPIO_MODE_AF_PP
#define MX_USB_OTG_HS_ULPI_DIR_GPIO_PuPd       GPIO_NOPULL
#define MX_USB_OTG_HS_ULPI_DIR_GPIO_Speed      GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USB_OTG_HS_ULPI_DIR_GPIO_AF         GPIO_AF10_OTG_HS

/* USB_OTG_HS_ULPI_NXT */
#define MX_USB_OTG_HS_ULPI_NXT_Pin             PC3
#define MX_USB_OTG_HS_ULPI_NXT_GPIO_Pin        GPIO_PIN_3
#define MX_USB_OTG_HS_ULPI_NXT_GPIOx           GPIOC
#define MX_USB_OTG_HS_ULPI_NXT_GPIO_Mode       GPIO_MODE_AF_PP
#define MX_USB_OTG_HS_ULPI_NXT_GPIO_PuPd       GPIO_NOPULL
#define MX_USB_OTG_HS_ULPI_NXT_GPIO_Speed      GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USB_OTG_HS_ULPI_NXT_GPIO_AF         GPIO_AF10_OTG_HS

#endif  /* __MX_DEVICE_H */
