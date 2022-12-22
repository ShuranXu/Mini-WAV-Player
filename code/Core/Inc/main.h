/* USER CODE BEGIN Header */
/*
 *  main.h
 *  @description: The header file for the application entry. Inside
 *  the application entry header file, only the error handler function
 *  is allowed to be exposed to public, the main application entry is
 *  internal.
 *
 *  @Reference:
 *  1.The ST Code Generation Feature via *.ioc file edit.
 *  https://www.alldatasheet.com/datasheet-pdf/pdf/63673/HITACHI/HD44780.html
 *  2.ST open-source HAL GPIO drivers
 *  3. https://github.com/MYaqoobEmbedded/STM32-Tutorials/tree/master/Tutorial%2043%20-%20WAV%20Player
 *  Note: The main( ) of the above tutorial is studied as the reference for the main program
 *  logic. The implementation takes the tutorial implementation as the reference.
 *
 *  @Code Leverage: The main( ) of the above tutorial is studied as the reference
 *  for the main program logic. The implementation takes the tutorial implementation
 *  as the reference. Specifically, the application state logic is leveraged.
 *
 *  @Author: Shuran Xu & Ritika Ramchandani
 *  @Revision: 2.0
 *  @Date 2022-12-12
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

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
