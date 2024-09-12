/*
 * lab1header.h
 *
 *  Created on: Sep 12, 2024
 *      Author: pc
 */
#include "main.h"
//#include "stdint.h"
//#include "stm32f1xx_hal_gpio.h"
#ifndef INC_LAB1HEADER_H_
#define INC_LAB1HEADER_H_
extern int led_sta;
extern int cnt;
typedef struct {
    GPIO_TypeDef* GPIO_Port;
    uint16_t Pin;
} LedConfig;


void transLed1(LedConfig redLed, LedConfig yellowLed, LedConfig greenLed, int led_sta, int cnt) {
//	while(1){
    switch (led_sta) {
    case 5:
                HAL_GPIO_WritePin(greenLed.GPIO_Port, greenLed.Pin, RESET);
                HAL_GPIO_WritePin(redLed.GPIO_Port, redLed.Pin, SET);
                HAL_GPIO_WritePin(yellowLed.GPIO_Port, yellowLed.Pin, RESET);
                if (cnt <= 0) {
                    led_sta = 2;
                    cnt = 2;
                }
                break;

        case 2:
            HAL_GPIO_WritePin(redLed.GPIO_Port, redLed.Pin, RESET);
            HAL_GPIO_WritePin(yellowLed.GPIO_Port, yellowLed.Pin, SET);
            HAL_GPIO_WritePin(greenLed.GPIO_Port, greenLed.Pin, RESET);
            if (cnt <= 0) {
                led_sta = 3;
                cnt = 3;
            }
            break;

        case 3:
            HAL_GPIO_WritePin(redLed.GPIO_Port, redLed.Pin, RESET);
            HAL_GPIO_WritePin(yellowLed.GPIO_Port, yellowLed.Pin, RESET);
            HAL_GPIO_WritePin(greenLed.GPIO_Port, greenLed.Pin, SET);
            if (cnt <= 0) {
                cnt = 5;
                led_sta = 5;
            }
            break;

        default:
            // Tắt tất cả các đèn hoặc xử lý trạng thái không xác định
            HAL_GPIO_WritePin(redLed.GPIO_Port, redLed.Pin, RESET);
            HAL_GPIO_WritePin(yellowLed.GPIO_Port, yellowLed.Pin, RESET);
            HAL_GPIO_WritePin(greenLed.GPIO_Port, greenLed.Pin, RESET);
            break;
    }
    HAL_Delay(500);
    (cnt)--;
}
//}

void transLed2(LedConfig redLed, LedConfig yellowLed, LedConfig greenLed, int led_sta, int cnt) {
//	while(1){
    switch (led_sta) {
    case 5:
                HAL_GPIO_WritePin(greenLed.GPIO_Port, greenLed.Pin, RESET);
                HAL_GPIO_WritePin(redLed.GPIO_Port, redLed.Pin, SET);
                HAL_GPIO_WritePin(yellowLed.GPIO_Port, yellowLed.Pin, RESET);
                if (cnt <= 0) {
                    led_sta = 2;
                    cnt = 2;
                }
                break;

        case 2:
            HAL_GPIO_WritePin(redLed.GPIO_Port, redLed.Pin, RESET);
            HAL_GPIO_WritePin(yellowLed.GPIO_Port, yellowLed.Pin, SET);
            HAL_GPIO_WritePin(greenLed.GPIO_Port, greenLed.Pin, RESET);
            if (cnt <= 0) {
                led_sta = 3;
                cnt = 3;
            }
            break;

        case 3:
            HAL_GPIO_WritePin(redLed.GPIO_Port, redLed.Pin, RESET);
            HAL_GPIO_WritePin(yellowLed.GPIO_Port, yellowLed.Pin, RESET);
            HAL_GPIO_WritePin(greenLed.GPIO_Port, greenLed.Pin, SET);
            if (cnt <= 0) {
                cnt = 5;
                led_sta = 5;
            }
            break;

        default:
            // Tắt tất cả các đèn hoặc xử lý trạng thái không xác định
            HAL_GPIO_WritePin(redLed.GPIO_Port, redLed.Pin, RESET);
            HAL_GPIO_WritePin(yellowLed.GPIO_Port, yellowLed.Pin, RESET);
            HAL_GPIO_WritePin(greenLed.GPIO_Port, greenLed.Pin, RESET);
            break;
    }
    HAL_Delay(500);
    (cnt)--;
//}
}

void transLed3(LedConfig redLed, LedConfig yellowLed, LedConfig greenLed, int led_sta, int cnt) {
//	while(1){
    switch (led_sta) {
    case 5:
                HAL_GPIO_WritePin(greenLed.GPIO_Port, greenLed.Pin, RESET);
                HAL_GPIO_WritePin(redLed.GPIO_Port, redLed.Pin, SET);
                HAL_GPIO_WritePin(yellowLed.GPIO_Port, yellowLed.Pin, RESET);
                if (cnt <= 0) {
                    led_sta = 2;
                    cnt = 2;
                }
                break;

        case 2:
            HAL_GPIO_WritePin(redLed.GPIO_Port, redLed.Pin, RESET);
            HAL_GPIO_WritePin(yellowLed.GPIO_Port, yellowLed.Pin, SET);
            HAL_GPIO_WritePin(greenLed.GPIO_Port, greenLed.Pin, RESET);
            if (cnt <= 0) {
                led_sta = 3;
                cnt = 3;
            }
            break;

        case 3:
            HAL_GPIO_WritePin(redLed.GPIO_Port, redLed.Pin, RESET);
            HAL_GPIO_WritePin(yellowLed.GPIO_Port, yellowLed.Pin, RESET);
            HAL_GPIO_WritePin(greenLed.GPIO_Port, greenLed.Pin, SET);
            if (cnt <= 0) {
                cnt = 5;
                led_sta = 5;
            }
            break;

        default:
            // Tắt tất cả các đèn hoặc xử lý trạng thái không xác định
            HAL_GPIO_WritePin(redLed.GPIO_Port, redLed.Pin, RESET);
            HAL_GPIO_WritePin(yellowLed.GPIO_Port, yellowLed.Pin, RESET);
            HAL_GPIO_WritePin(greenLed.GPIO_Port, greenLed.Pin, RESET);
            break;
    }
    HAL_Delay(500);
    (cnt)--;
//}
}

void transLed4(LedConfig redLed, LedConfig yellowLed, LedConfig greenLed, int led_sta, int cnt) {
    switch (led_sta) {
    case 5:
                HAL_GPIO_WritePin(greenLed.GPIO_Port, greenLed.Pin, RESET);
                HAL_GPIO_WritePin(redLed.GPIO_Port, redLed.Pin, SET);
                HAL_GPIO_WritePin(yellowLed.GPIO_Port, yellowLed.Pin, RESET);
                if (cnt <= 0) {
                    led_sta = 2;
                    cnt = 2;
                }
                break;

        case 2:
            HAL_GPIO_WritePin(redLed.GPIO_Port, redLed.Pin, RESET);
            HAL_GPIO_WritePin(yellowLed.GPIO_Port, yellowLed.Pin, SET);
            HAL_GPIO_WritePin(greenLed.GPIO_Port, greenLed.Pin, RESET);
            if (cnt <= 0) {
                led_sta = 3;
                cnt = 3;
            }
            break;

        case 3:
            HAL_GPIO_WritePin(redLed.GPIO_Port, redLed.Pin, RESET);
            HAL_GPIO_WritePin(yellowLed.GPIO_Port, yellowLed.Pin, RESET);
            HAL_GPIO_WritePin(greenLed.GPIO_Port, greenLed.Pin, SET);
            if (cnt <= 0) {
                cnt = 5;
                led_sta = 5;
            }
            break;

        default:
            // Tắt tất cả các đèn hoặc xử lý trạng thái không xác định
            HAL_GPIO_WritePin(redLed.GPIO_Port, redLed.Pin, RESET);
            HAL_GPIO_WritePin(yellowLed.GPIO_Port, yellowLed.Pin, RESET);
            HAL_GPIO_WritePin(greenLed.GPIO_Port, greenLed.Pin, RESET);
            break;
    }
    HAL_Delay(500);
    (cnt)--;
}





#endif /* INC_LAB1HEADER_H_ */
