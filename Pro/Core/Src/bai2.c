/*
 * bai2.c
 *
 *  Created on: Sep 19, 2024
 *      Author: pc
 */

#include "bai2.h"

int traffic_light(int *cnt, int *led_sta) {
    switch (*led_sta) {
        case 5:  // Đèn đỏ
            HAL_GPIO_WritePin(Led_Green_GPIO_Port, Led_Green_Pin, SET);  // Tắt LED xanh
            HAL_GPIO_WritePin(Led_Red_GPIO_Port, Led_Red_Pin, RESET);    // Bật LED đỏ
            HAL_GPIO_WritePin(Led_Yel_GPIO_Port, Led_Yel_Pin, SET);      // Tắt LED vàng
            if (*cnt <= 0) {  // Nếu đếm xong 5 giây
                *led_sta = 2;  // Chuyển sang đèn vàng
                *cnt = 2;       // Reset biến đếm cho đèn vàng
            }
            break;

        case 2:  // Đèn vàng
            HAL_GPIO_WritePin(Led_Red_GPIO_Port, Led_Red_Pin, SET);      // Tắt LED đỏ
            HAL_GPIO_WritePin(Led_Yel_GPIO_Port, Led_Yel_Pin, RESET);    // Bật LED vàng
            HAL_GPIO_WritePin(Led_Green_GPIO_Port, Led_Green_Pin, SET);  // Tắt LED xanh
            if (*cnt <= 0) {  // Nếu đếm xong 2 giây
                *led_sta = 3;  // Chuyển sang đèn xanh
                *cnt = 3;       // Reset biến đếm cho đèn xanh
            }
            break;

        case 3:  // Đèn xanh
            HAL_GPIO_WritePin(Led_Red_GPIO_Port, Led_Red_Pin, SET);      // Tắt LED đỏ
            HAL_GPIO_WritePin(Led_Yel_GPIO_Port, Led_Yel_Pin, SET);      // Tắt LED vàng
            HAL_GPIO_WritePin(Led_Green_GPIO_Port, Led_Green_Pin, RESET); // Bật LED xanh
            if (*cnt <= 0) {  // Nếu đếm xong 3 giây
                *led_sta = 5;  // Chuyển về đèn đỏ
                *cnt = 5;       // Reset biến đếm cho đèn đỏ
            }
            break;

        default:
            *led_sta = 5;   // Nếu trạng thái không hợp lệ, chuyển về đèn đỏ
            *cnt = 5;       // Reset biến đếm cho đèn đỏ
            break;
    }

    HAL_Delay(1000);  // Đợi 1 giây
    (*cnt)--;        // Giảm biến đếm mỗi lần gọi hàm
    return *cnt;     // Trả về giá trị biến đếm
}
