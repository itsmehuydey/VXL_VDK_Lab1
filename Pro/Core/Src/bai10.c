/*
 * bai10.c
 *
 *  Created on: Sep 19, 2024
 *      Author: pc
 */
#include "bai10.h"
int n_sec = 0, n_min = 57, n_hour = 0;
int c_blink_min = 10, sw_min = 0;

void clearAllClock()
{
	HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, RESET);
	HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, RESET);
	HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, RESET);
	HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, RESET);
	HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, RESET);
	HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, RESET);
	HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, RESET);
	HAL_GPIO_WritePin(LED8_GPIO_Port, LED8_Pin, RESET);
	HAL_GPIO_WritePin(LED9_GPIO_Port, LED9_Pin, RESET);
	HAL_GPIO_WritePin(LED10_GPIO_Port, LED10_Pin, RESET);
	HAL_GPIO_WritePin(LED11_GPIO_Port, LED11_Pin, RESET);
	HAL_GPIO_WritePin(LED12_GPIO_Port, LED12_Pin, RESET);
}

void setNumberOnClock(int num)
{
	switch(num)
	{
		case 0:
			HAL_GPIO_WritePin(LED12_GPIO_Port, LED12_Pin, SET);
			break;
		case 1:
			HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, SET);
			break;
		case 2:
			HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, SET);
			break;
		case 3:
			HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, SET);
			break;
		case 4:
			HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, SET);
			break;
		case 5:
			HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, SET);
			break;
		case 6:
			HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, SET);
			break;
		case 7:
			HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, SET);
			break;
		case 8:
			HAL_GPIO_WritePin(LED8_GPIO_Port, LED8_Pin, SET);
			break;
		case 9:
			HAL_GPIO_WritePin(LED9_GPIO_Port, LED9_Pin, SET);
			break;
		case 10:
			HAL_GPIO_WritePin(LED10_GPIO_Port, LED10_Pin, SET);
			break;
		case 11:
			HAL_GPIO_WritePin(LED11_GPIO_Port, LED11_Pin, SET);
			break;
	}
}

void clearNumberOnClock(int num)
{
	switch(num)
	{
		case 0:
			HAL_GPIO_WritePin(LED12_GPIO_Port, LED12_Pin, RESET);
			break;
		case 1:
			HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, RESET);
			break;
		case 2:
			HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, RESET);
			break;
		case 3:
			HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, RESET);
			break;
		case 4:
			HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, RESET);
			break;
		case 5:
			HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, RESET);
			break;
		case 6:
			HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, RESET);
			break;
		case 7:
			HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, RESET);
			break;
		case 8:
			HAL_GPIO_WritePin(LED8_GPIO_Port, LED8_Pin, RESET);
			break;
		case 9:
			HAL_GPIO_WritePin(LED9_GPIO_Port, LED9_Pin, RESET);
			break;
		case 10:
			HAL_GPIO_WritePin(LED10_GPIO_Port, LED10_Pin, RESET);
			break;
		case 11:
			HAL_GPIO_WritePin(LED11_GPIO_Port, LED11_Pin, RESET);
			break;
	}
}

void implement10(){
		if (++n_sec >= 60) {
			              n_sec = 0;
			              if (++n_min >= 60) {
			                  n_min = 0;
			                  clearNumberOnClock(n_hour);
			                  n_hour = (n_hour + 1) % 12;
			              }
			          }
	      if (n_sec % 5 == 0) {
	          clearNumberOnClock((n_sec / 5 == 0) ? 11 : (n_sec / 5 - 1));
	          setNumberOnClock(n_sec / 5); //seconds
	      }
	      setNumberOnClock(n_hour % 12); //hours
	      if (--c_blink_min <= 0) {
	          sw_min = !sw_min;
	          if (sw_min) setNumberOnClock(n_min / 5) ; //minutes
	          c_blink_min = 10;
	      }
	      HAL_Delay(10);
}
