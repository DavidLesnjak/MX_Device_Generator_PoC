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
#include "stm32f0xx_hal.h"

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
#define JOY_LEFT_Pin GPIO_PIN_2
#define JOY_LEFT_GPIO_Port GPIOE
#define JOY_RIGHT_Pin GPIO_PIN_3
#define JOY_RIGHT_GPIO_Port GPIOE
#define SHIELD_Pin GPIO_PIN_4
#define SHIELD_GPIO_Port GPIOE
#define SHIELD_CT_Pin GPIO_PIN_5
#define SHIELD_CT_GPIO_Port GPIOE
#define LCD_CS_OD_Pin GPIO_PIN_6
#define LCD_CS_OD_GPIO_Port GPIOE
#define Tamper_Key_Pin GPIO_PIN_13
#define Tamper_Key_GPIO_Port GPIOC
#define PC14_OSC32_IN_Pin GPIO_PIN_14
#define PC14_OSC32_IN_GPIO_Port GPIOC
#define PC15_OSC32_OUT_Pin GPIO_PIN_15
#define PC15_OSC32_OUT_GPIO_Port GPIOC
#define JOY_UP_Pin GPIO_PIN_9
#define JOY_UP_GPIO_Port GPIOF
#define JOY_DOWN_Pin GPIO_PIN_10
#define JOY_DOWN_GPIO_Port GPIOF
#define PF0_OSC_IN_Pin GPIO_PIN_0
#define PF0_OSC_IN_GPIO_Port GPIOF
#define PF1_OSC_OUT_Pin GPIO_PIN_1
#define PF1_OSC_OUT_GPIO_Port GPIOF
#define Potentiometer_Pin GPIO_PIN_0
#define Potentiometer_GPIO_Port GPIOC
#define Audio_IN_Pin GPIO_PIN_1
#define Audio_IN_GPIO_Port GPIOC
#define MicroSD_CS_OD_Pin GPIO_PIN_2
#define MicroSD_CS_OD_GPIO_Port GPIOF
#define JOY_SEL_Pin GPIO_PIN_0
#define JOY_SEL_GPIO_Port GPIOA
#define LDR_OUT_Pin GPIO_PIN_1
#define LDR_OUT_GPIO_Port GPIOA
#define AUDIO_OUT_L_Pin GPIO_PIN_4
#define AUDIO_OUT_L_GPIO_Port GPIOA
#define AUDIO_OUT_R_Pin GPIO_PIN_5
#define AUDIO_OUT_R_GPIO_Port GPIOA
#define SPI1_MOSI_DIR_Pin GPIO_PIN_2
#define SPI1_MOSI_DIR_GPIO_Port GPIOB
#define SPI1_MISO_Pin GPIO_PIN_14
#define SPI1_MISO_GPIO_Port GPIOE
#define SPI1_MOSI_Pin GPIO_PIN_15
#define SPI1_MOSI_GPIO_Port GPIOE
#define USB_VBUS_Detection_Pin GPIO_PIN_10
#define USB_VBUS_Detection_GPIO_Port GPIOB
#define I2C2_SCL_Pin GPIO_PIN_13
#define I2C2_SCL_GPIO_Port GPIOB
#define I2C2_SDA_Pin GPIO_PIN_14
#define I2C2_SDA_GPIO_Port GPIOB
#define SDCard_Detect_Pin GPIO_PIN_15
#define SDCard_Detect_GPIO_Port GPIOB
#define LED1_Pin GPIO_PIN_8
#define LED1_GPIO_Port GPIOD
#define LED2_Pin GPIO_PIN_9
#define LED2_GPIO_Port GPIOD
#define LED3_Pin GPIO_PIN_10
#define LED3_GPIO_Port GPIOD
#define LED4_Pin GPIO_PIN_11
#define LED4_GPIO_Port GPIOD
#define TS1_Pin GPIO_PIN_12
#define TS1_GPIO_Port GPIOD
#define TS2_Pin GPIO_PIN_13
#define TS2_GPIO_Port GPIOD
#define TS_CT_Pin GPIO_PIN_14
#define TS_CT_GPIO_Port GPIOD
#define HDMI_HDP_SINK_OD_Pin GPIO_PIN_15
#define HDMI_HDP_SINK_OD_GPIO_Port GPIOD
#define IR_IN_Pin GPIO_PIN_6
#define IR_IN_GPIO_Port GPIOC
#define SmartCard_CLK_Pin GPIO_PIN_8
#define SmartCard_CLK_GPIO_Port GPIOA
#define SmartCard_IO_Pin GPIO_PIN_9
#define SmartCard_IO_GPIO_Port GPIOA
#define SmartCard_RST_Pin GPIO_PIN_10
#define SmartCard_RST_GPIO_Port GPIOA
#define SWDAT_Pin GPIO_PIN_13
#define SWDAT_GPIO_Port GPIOA
#define SWCLK_Pin GPIO_PIN_14
#define SWCLK_GPIO_Port GPIOA
#define SmartCard_1V8_Pin GPIO_PIN_10
#define SmartCard_1V8_GPIO_Port GPIOC
#define SmartCard_3_5V_Pin GPIO_PIN_11
#define SmartCard_3_5V_GPIO_Port GPIOC
#define SmartCard_OFF_Pin GPIO_PIN_12
#define SmartCard_OFF_GPIO_Port GPIOC
#define CAN_RX_Pin GPIO_PIN_0
#define CAN_RX_GPIO_Port GPIOD
#define CAN_TX_Pin GPIO_PIN_1
#define CAN_TX_GPIO_Port GPIOD
#define SmartCard_CMDVCC_Pin GPIO_PIN_2
#define SmartCard_CMDVCC_GPIO_Port GPIOD
#define USART2_CTS_Pin GPIO_PIN_3
#define USART2_CTS_GPIO_Port GPIOD
#define USART2_RTS_Pin GPIO_PIN_4
#define USART2_RTS_GPIO_Port GPIOD
#define USART2_TX_Pin GPIO_PIN_5
#define USART2_TX_GPIO_Port GPIOD
#define USART2_RX_Pin GPIO_PIN_6
#define USART2_RX_GPIO_Port GPIOD
#define EX_RESET_OD_Pin GPIO_PIN_7
#define EX_RESET_OD_GPIO_Port GPIOD
#define SPI1_SCK_Pin GPIO_PIN_3
#define SPI1_SCK_GPIO_Port GPIOB
#define TempSensor_INT_Pin GPIO_PIN_5
#define TempSensor_INT_GPIO_Port GPIOB
#define I2C1_SCL_Pin GPIO_PIN_6
#define I2C1_SCL_GPIO_Port GPIOB
#define I2C1_SDA_Pin GPIO_PIN_7
#define I2C1_SDA_GPIO_Port GPIOB
#define HDMI_CEC_OD_Pin GPIO_PIN_8
#define HDMI_CEC_OD_GPIO_Port GPIOB
#define IR_OUT_Pin GPIO_PIN_9
#define IR_OUT_GPIO_Port GPIOB
#define HDMI_HPD_Source_Pin GPIO_PIN_0
#define HDMI_HPD_Source_GPIO_Port GPIOE

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
