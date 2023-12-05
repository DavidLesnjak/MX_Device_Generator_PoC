/******************************************************************************
 * File Name   : MX_Device.h
 * Date        : 05/12/2023 10:00:59
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
#define MX_I2C1_SCL_Pin                        PB6
#define MX_I2C1_SCL_GPIO_Pin                   GPIO_PIN_6
#define MX_I2C1_SCL_GPIOx                      GPIOB
#define MX_I2C1_SCL_GPIO_Mode                  GPIO_MODE_AF_OD
#define MX_I2C1_SCL_GPIO_PuPd                  GPIO_NOPULL
#define MX_I2C1_SCL_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_I2C1_SCL_GPIO_AF                    GPIO_AF4_I2C1

/* I2C1_SDA */
#define MX_I2C1_SDA_Pin                        PB7
#define MX_I2C1_SDA_GPIO_Pin                   GPIO_PIN_7
#define MX_I2C1_SDA_GPIOx                      GPIOB
#define MX_I2C1_SDA_GPIO_Mode                  GPIO_MODE_AF_OD
#define MX_I2C1_SDA_GPIO_PuPd                  GPIO_NOPULL
#define MX_I2C1_SDA_GPIO_Speed                 GPIO_SPEED_FREQ_LOW
#define MX_I2C1_SDA_GPIO_AF                    GPIO_AF4_I2C1

/*------------------------------ USART3         -----------------------------*/
#define MX_USART3                              1

/* Virtual mode */
#define MX_USART3_VM                           VM_ASYNC
#define MX_USART3_VM_ASYNC                     1

/* Pins */

/* USART3_TX */
#define MX_USART3_TX_Pin                       PB10
#define MX_USART3_TX_GPIO_Pin                  GPIO_PIN_10
#define MX_USART3_TX_GPIOx                     GPIOB
#define MX_USART3_TX_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_USART3_TX_GPIO_PuPd                 GPIO_NOPULL
#define MX_USART3_TX_GPIO_Speed                GPIO_SPEED_FREQ_LOW
#define MX_USART3_TX_GPIO_AF                   GPIO_AF7_USART3

/* USART3_RX */
#define MX_USART3_RX_Pin                       PC5
#define MX_USART3_RX_GPIO_Pin                  GPIO_PIN_5
#define MX_USART3_RX_GPIOx                     GPIOC
#define MX_USART3_RX_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_USART3_RX_GPIO_PuPd                 GPIO_NOPULL
#define MX_USART3_RX_GPIO_Speed                GPIO_SPEED_FREQ_LOW
#define MX_USART3_RX_GPIO_AF                   GPIO_AF7_USART3

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

#endif  /* __MX_DEVICE_H */
