/*
 * bai6.h
 *
 *  Created on: Sep 12, 2024
 *      Author: pc
 */
#include "main.h"
#ifndef INC_BAI6_H_
#define INC_BAI6_H_
// GPIO_TypeDef* c_GPIO_Ports[] = {
//    c1_GPIO_Port, c2_GPIO_Port, c3_GPIO_Port, c4_GPIO_Port,
//    c5_GPIO_Port, c6_GPIO_Port, c7_GPIO_Port, c8_GPIO_Port,
//    c9_GPIO_Port, c10_GPIO_Port, c11_GPIO_Port, c12_GPIO_Port
//};
//
// uint16_t c_Pins[] = {
//    c1_Pin, c2_Pin, c3_Pin, c4_Pin, c5_Pin, c6_Pin,
//    c7_Pin, c8_Pin, c9_Pin, c10_Pin, c11_Pin, c12_Pin
//};
//
//// Hàm bật đèn theo số thứ tự
//void setNumberOnClock(int num) {
//    if (num >= 1 && num <= 12) {
//        // Bật đèn tương ứng với chân GPIO
//        HAL_GPIO_WritePin(c_GPIO_Ports[num - 1], c_Pins[num - 1], SET); // RESET để bật đèn
//    }
//}
//
//// Hàm bật đèn tuần tự từ C1 đến C12
//void lightUpAllClockSequentially() {
//    for (int i = 1; i <= 12; i++) {
//        setNumberOnClock(i);   // Bật LED tương ứng với chân i
//        HAL_Delay(1000);       // Chờ 1 giây giữa mỗi đèn
//    }
//}

// Hàm bật đèn theo số thứ tự từ 1 đến 12
void setNumberOnClock(int num) {
    switch (num) {
        case 1:
            HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, SET);  // Bật đèn C1
            break;
        case 2:
            HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, SET);  // Bật đèn C2
            break;
        case 3:
            HAL_GPIO_WritePin(c3_GPIO_Port, c3_Pin, SET);  // Bật đèn C3
            break;
        case 4:
            HAL_GPIO_WritePin(c4_GPIO_Port, c4_Pin, SET);  // Bật đèn C4
            break;
        case 5:
            HAL_GPIO_WritePin(c5_GPIO_Port, c5_Pin, SET);  // Bật đèn C5
            break;
        case 6:
            HAL_GPIO_WritePin(c6_GPIO_Port, c6_Pin, SET);  // Bật đèn C6
            break;
        case 7:
            HAL_GPIO_WritePin(c7_GPIO_Port, c7_Pin, SET);  // Bật đèn C7
            break;
        case 8:
            HAL_GPIO_WritePin(c8_GPIO_Port, c8_Pin, SET);  // Bật đèn C8
            break;
        case 9:
            HAL_GPIO_WritePin(c9_GPIO_Port, c9_Pin, SET);  // Bật đèn C9
            break;
        case 10:
            HAL_GPIO_WritePin(c10_GPIO_Port, c10_Pin, SET);  // Bật đèn C10
            break;
        case 11:
            HAL_GPIO_WritePin(c11_GPIO_Port, c11_Pin, SET);  // Bật đèn C11
            break;
        case 12:
            HAL_GPIO_WritePin(c12_GPIO_Port, c12_Pin, SET);  // Bật đèn C12
            break;
        default:
            break;
    }
}
void lightUpAllClockSequentially() {
    for (int i = 1; i <= 12; i++) {
        setNumberOnClock(i);
        HAL_Delay(1000);
    }
}


//
//void clearAllClock() {
//    for (int i = 0; i < 12; i++) {
//        HAL_GPIO_WritePin(c_GPIO_Ports[i], c_Pins[i], SET);
//    }
//}
//
//
//
//void clearNumberOnClock(int num) {
//    if (num >= 1 && num <= 12) {
//        HAL_GPIO_WritePin(c_GPIO_Ports[num - 1], c_Pins[num - 1], RESET);
//    }
//}

#endif /* INC_BAI6_H_ */
