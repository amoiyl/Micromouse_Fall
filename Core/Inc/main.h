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
#include "stm32f4xx_hal.h"

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

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */
ADC_HandleTypeDef* Get_HADC1_Ptr(void);
/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define Button_Pin GPIO_PIN_13
#define Button_GPIO_Port GPIOC
#define Button_EXTI_IRQn EXTI15_10_IRQn
#define RightEncoderC1_Pin GPIO_PIN_0
#define RightEncoderC1_GPIO_Port GPIOA
#define RightEncoderC2_Pin GPIO_PIN_1
#define RightEncoderC2_GPIO_Port GPIOA
#define USART_TX_Pin GPIO_PIN_2
#define USART_TX_GPIO_Port GPIOA
#define USART_RX_Pin GPIO_PIN_3
#define USART_RX_GPIO_Port GPIOA
#define LED_Pin GPIO_PIN_5
#define LED_GPIO_Port GPIOA
#define FrontLeftReceiver_Pin GPIO_PIN_6
#define FrontLeftReceiver_GPIO_Port GPIOA
#define FrontLeftEmitter_Pin GPIO_PIN_7
#define FrontLeftEmitter_GPIO_Port GPIOA
#define RightReceiver_Pin GPIO_PIN_4
#define RightReceiver_GPIO_Port GPIOC
#define LeftReceiver_Pin GPIO_PIN_5
#define LeftReceiver_GPIO_Port GPIOC
#define FrontRightReceiver_Pin GPIO_PIN_1
#define FrontRightReceiver_GPIO_Port GPIOB
#define FrontRightEmitter_Pin GPIO_PIN_2
#define FrontRightEmitter_GPIO_Port GPIOB
#define RightEmitter_Pin GPIO_PIN_13
#define RightEmitter_GPIO_Port GPIOB
#define LeftEmitter_Pin GPIO_PIN_9
#define LeftEmitter_GPIO_Port GPIOC
#define LeftEncoderC1_Pin GPIO_PIN_8
#define LeftEncoderC1_GPIO_Port GPIOA
#define LeftEncoderC2_Pin GPIO_PIN_9
#define LeftEncoderC2_GPIO_Port GPIOA
#define TMS_Pin GPIO_PIN_13
#define TMS_GPIO_Port GPIOA
#define TCK_Pin GPIO_PIN_14
#define TCK_GPIO_Port GPIOA
#define SWO_Pin GPIO_PIN_3
#define SWO_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
