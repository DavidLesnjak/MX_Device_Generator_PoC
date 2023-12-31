/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define TRACE_CK_Pin GPIO_PIN_2
#define TRACE_CK_GPIO_Port GPIOE
#define TRACE_D0_Pin GPIO_PIN_3
#define TRACE_D0_GPIO_Port GPIOE
#define TRACE_D1_Pin GPIO_PIN_4
#define TRACE_D1_GPIO_Port GPIOE
#define TRACE_D2_Pin GPIO_PIN_5
#define TRACE_D2_GPIO_Port GPIOE
#define TRACE_D3_Pin GPIO_PIN_6
#define TRACE_D3_GPIO_Port GPIOE
#define PC14_OSC32_IN_Pin GPIO_PIN_14
#define PC14_OSC32_IN_GPIO_Port GPIOC
#define PC15_OSC32_OUT_Pin GPIO_PIN_15
#define PC15_OSC32_OUT_GPIO_Port GPIOC
#define MII_MDC_Pin GPIO_PIN_1
#define MII_MDC_GPIO_Port GPIOC
#define MII_TXD2_Pin GPIO_PIN_2
#define MII_TXD2_GPIO_Port GPIOC
#define MII_TX_CLK_Pin GPIO_PIN_3
#define MII_TX_CLK_GPIO_Port GPIOC
#define test_MII_CRS_Pin GPIO_PIN_0
#define test_MII_CRS_GPIO_Port GPIOA
#define test_MII_RX_CLK_Pin GPIO_PIN_1
#define test_MII_RX_CLK_GPIO_Port GPIOA
#define test_MII_MDIO_Pin GPIO_PIN_2
#define test_MII_MDIO_GPIO_Port GPIOA
#define Test_MII_COL_Pin GPIO_PIN_3
#define Test_MII_COL_GPIO_Port GPIOA
#define MicroSDCard_CS_Pin GPIO_PIN_4
#define MicroSDCard_CS_GPIO_Port GPIOA
#define test_IDD_Measurement_Pin GPIO_PIN_6
#define test_IDD_Measurement_GPIO_Port GPIOA
#define test_Potentiometer_Pin GPIO_PIN_4
#define test_Potentiometer_GPIO_Port GPIOC
#define test_VBAT_Voltage_OUT_Pin GPIO_PIN_5
#define test_VBAT_Voltage_OUT_GPIO_Port GPIOC
#define LCD_CS_Pin GPIO_PIN_2
#define LCD_CS_GPIO_Port GPIOB
#define MII_TX_EN_Pin GPIO_PIN_11
#define MII_TX_EN_GPIO_Port GPIOB
#define MII_TXD0_I2S_CMD_Pin GPIO_PIN_12
#define MII_TXD0_I2S_CMD_GPIO_Port GPIOB
#define MII_TXD1_I2S_CK_Pin GPIO_PIN_13
#define MII_TXD1_I2S_CK_GPIO_Port GPIOB
#define IO_Expander_INT_Pin GPIO_PIN_14
#define IO_Expander_INT_GPIO_Port GPIOB
#define I2S_DIN_Pin GPIO_PIN_15
#define I2S_DIN_GPIO_Port GPIOB
#define MII_RX_DV_Pin GPIO_PIN_8
#define MII_RX_DV_GPIO_Port GPIOD
#define MII_RXD0_Pin GPIO_PIN_9
#define MII_RXD0_GPIO_Port GPIOD
#define MII_RXD1_Pin GPIO_PIN_10
#define MII_RXD1_GPIO_Port GPIOD
#define MII_RXD2_Pin GPIO_PIN_11
#define MII_RXD2_GPIO_Port GPIOD
#define MII_RXD3_Pin GPIO_PIN_12
#define MII_RXD3_GPIO_Port GPIOD
#define LED2_Pin GPIO_PIN_13
#define LED2_GPIO_Port GPIOD
#define I2S_MCK_Pin GPIO_PIN_6
#define I2S_MCK_GPIO_Port GPIOC
#define USB_PowerSwitchOn_Pin GPIO_PIN_9
#define USB_PowerSwitchOn_GPIO_Port GPIOC
#define MCO_Pin GPIO_PIN_8
#define MCO_GPIO_Port GPIOA
#define USB_VBUS_Pin GPIO_PIN_9
#define USB_VBUS_GPIO_Port GPIOA
#define USB_ID_Pin GPIO_PIN_10
#define USB_ID_GPIO_Port GPIOA
#define USB_DM_Pin GPIO_PIN_11
#define USB_DM_GPIO_Port GPIOA
#define USB_DP_Pin GPIO_PIN_12
#define USB_DP_GPIO_Port GPIOA
#define TMS_SWDIO_Pin GPIO_PIN_13
#define TMS_SWDIO_GPIO_Port GPIOA
#define TCK_SWCLK_Pin GPIO_PIN_14
#define TCK_SWCLK_GPIO_Port GPIOA
#define TDI_Pin GPIO_PIN_15
#define TDI_GPIO_Port GPIOA
#define test_SPI3_SCK_Pin GPIO_PIN_10
#define test_SPI3_SCK_GPIO_Port GPIOC
#define test_SPI3_MISO_Pin GPIO_PIN_11
#define test_SPI3_MISO_GPIO_Port GPIOC
#define test_Pin GPIO_PIN_12
#define test_GPIO_Port GPIOC
#define test_CAN1_RX_Pin GPIO_PIN_0
#define test_CAN1_RX_GPIO_Port GPIOD
#define test_CAN1_TX_Pin GPIO_PIN_1
#define test_CAN1_TX_GPIO_Port GPIOD
#define LED3_Pin GPIO_PIN_3
#define LED3_GPIO_Port GPIOD
#define LED4_Pin GPIO_PIN_4
#define LED4_GPIO_Port GPIOD
#define test_USART2_TX_Pin GPIO_PIN_5
#define test_USART2_TX_GPIO_Port GPIOD
#define test_USART2_RX_Pin GPIO_PIN_6
#define test_USART2_RX_GPIO_Port GPIOD
#define LED1_Pin GPIO_PIN_7
#define LED1_GPIO_Port GPIOD
#define TDO_Pin GPIO_PIN_3
#define TDO_GPIO_Port GPIOB
#define test_I2C1_SCK_Pin GPIO_PIN_6
#define test_I2C1_SCK_GPIO_Port GPIOB
#define test_I2C1_SDA_Pin GPIO_PIN_7
#define test_I2C1_SDA_GPIO_Port GPIOB
#define test_MII_TXD3_Pin GPIO_PIN_8
#define test_MII_TXD3_GPIO_Port GPIOB
#define User_Button_Pin GPIO_PIN_9
#define User_Button_GPIO_Port GPIOB
#define MicroSDCard_Detection_Pin GPIO_PIN_0
#define MicroSDCard_Detection_GPIO_Port GPIOE
#define USB_OverCurrent_Pin GPIO_PIN_1
#define USB_OverCurrent_GPIO_Port GPIOE

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
