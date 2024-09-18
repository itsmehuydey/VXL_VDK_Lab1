/*
 * bai1.c
 *
 *  Created on: Sep 18, 2024
 *      Author: pc
 */
#include "bai1.h"
void changeLed(int led_sta){
	while(1){
	  switch (led_sta) {
	  case 1:
		  HAL_GPIO_WritePin(Led_Red_GPIO_Port, Led_Red_Pin, SET);
		  HAL_GPIO_WritePin(Led_Yel_GPIO_Port, Led_Yel_Pin, RESET);
		  led_sta = 0;
		  break;
	  case 0:
		  HAL_GPIO_WritePin(Led_Red_GPIO_Port, Led_Red_Pin, RESET);
		  HAL_GPIO_WritePin(Led_Yel_GPIO_Port, Led_Yel_Pin, SET);
		  led_sta = 1;
		  break;
	  //default:
		  //
	  }
	  HAL_Delay(2000);
	}
}

