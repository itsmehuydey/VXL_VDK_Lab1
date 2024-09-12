/*
 * bai6.h
 *
 *  Created on: Sep 12, 2024
 *      Author: pc
 */

#ifndef INC_BAI6_H_
#define INC_BAI6_H_
#include "main.h"
extern GPIO_TypeDef* c_GPIO_Ports[] = {
    c1_GPIO_Port, c2_GPIO_Port, c3_GPIO_Port, c4_GPIO_Port,
    c5_GPIO_Port, c6_GPIO_Port, c7_GPIO_Port, c8_GPIO_Port,
    c9_GPIO_Port, c10_GPIO_Port, c11_GPIO_Port, c12_GPIO_Port
};

extern uint16_t c_Pins[] = {
    c1_Pin, c2_Pin, c3_Pin, c4_Pin, c5_Pin, c6_Pin,
    c7_Pin, c8_Pin, c9_Pin, c10_Pin, c11_Pin, c12_Pin
};

void clearAllClock() {
    for (int i = 0; i < 12; i++) {
        HAL_GPIO_WritePin(c_GPIO_Ports[i], c_Pins[i], RESET);
    }
}


void setNumberOnClock(int num) {
    if (num >= 1 && num <= 12) {
        HAL_GPIO_WritePin(c_GPIO_Ports[num - 1], c_Pins[num - 1], SET);
    }
}


void clearNumberOnClock(int num) {
    if (num >= 1 && num <= 12) {
        HAL_GPIO_WritePin(c_GPIO_Ports[num - 1], c_Pins[num - 1], RESET);
    }
}

void lightUpAllClockSequentially() {
    for (int i = 1; i <= 12; i++) {
        setNumberOnClock(i);
        HAL_Delay(1000);
    }
}


#endif /* INC_BAI6_H_ */
