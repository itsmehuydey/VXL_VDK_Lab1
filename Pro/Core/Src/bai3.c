#include "bai3.h"
  int led_sta = 5;
  int led_sta2 = 3;
  int cnt = 5;
  int cnt2 = 3;
void traffic_2dimen() {
    // Handle LED group 1
    switch (led_sta) {
        case 5:
            HAL_GPIO_WritePin(led1_GPIO_Port, led1_Pin, SET);
            HAL_GPIO_WritePin(led2_GPIO_Port, led2_Pin, RESET);
            HAL_GPIO_WritePin(led3_GPIO_Port, led3_Pin, RESET);
            HAL_GPIO_WritePin(led7_GPIO_Port, led7_Pin, SET);
            HAL_GPIO_WritePin(led8_GPIO_Port, led8_Pin, RESET);
            HAL_GPIO_WritePin(led9_GPIO_Port, led9_Pin, RESET);
            break;
        case 2:
            HAL_GPIO_WritePin(led1_GPIO_Port, led1_Pin, RESET);
            HAL_GPIO_WritePin(led2_GPIO_Port, led2_Pin, SET);
            HAL_GPIO_WritePin(led3_GPIO_Port, led3_Pin, RESET);
            HAL_GPIO_WritePin(led7_GPIO_Port, led7_Pin, RESET);
            HAL_GPIO_WritePin(led8_GPIO_Port, led8_Pin, SET);
            HAL_GPIO_WritePin(led9_GPIO_Port, led9_Pin, RESET);
            break;
        case 3:
            HAL_GPIO_WritePin(led1_GPIO_Port, led1_Pin, RESET);
            HAL_GPIO_WritePin(led2_GPIO_Port, led2_Pin, RESET);
            HAL_GPIO_WritePin(led3_GPIO_Port, led3_Pin, SET);
            HAL_GPIO_WritePin(led7_GPIO_Port, led7_Pin, RESET);
            HAL_GPIO_WritePin(led8_GPIO_Port, led8_Pin, RESET);
            HAL_GPIO_WritePin(led9_GPIO_Port, led9_Pin, SET);
            break;
    }

    // Handle LED group 2
    switch (led_sta2) {
        case 5:
            HAL_GPIO_WritePin(led4_GPIO_Port, led4_Pin, SET);
            HAL_GPIO_WritePin(led5_GPIO_Port, led5_Pin, RESET);
            HAL_GPIO_WritePin(led6_GPIO_Port, led6_Pin, RESET);
            HAL_GPIO_WritePin(led10_GPIO_Port, led10_Pin, SET);
            HAL_GPIO_WritePin(led11_GPIO_Port, led11_Pin, RESET);
            HAL_GPIO_WritePin(led12_GPIO_Port, led12_Pin, RESET);
            break;
        case 2:
            HAL_GPIO_WritePin(led4_GPIO_Port, led4_Pin, RESET);
            HAL_GPIO_WritePin(led5_GPIO_Port, led5_Pin, SET);
            HAL_GPIO_WritePin(led6_GPIO_Port, led6_Pin, RESET);
            HAL_GPIO_WritePin(led10_GPIO_Port, led10_Pin, RESET);
            HAL_GPIO_WritePin(led11_GPIO_Port, led11_Pin, SET);
            HAL_GPIO_WritePin(led12_GPIO_Port, led12_Pin, RESET);
            break;
        case 3:
            HAL_GPIO_WritePin(led4_GPIO_Port, led4_Pin, RESET);
            HAL_GPIO_WritePin(led5_GPIO_Port, led5_Pin, RESET);
            HAL_GPIO_WritePin(led6_GPIO_Port, led6_Pin, SET);
            HAL_GPIO_WritePin(led10_GPIO_Port, led10_Pin, RESET);
            HAL_GPIO_WritePin(led11_GPIO_Port, led11_Pin, RESET);
            HAL_GPIO_WritePin(led12_GPIO_Port, led12_Pin, SET);
            break;
    }

    // Manage state transitions and delays
    if (--cnt <= 0) {
        cnt = (led_sta == 5) ? 3 : (led_sta == 2) ? 5 : 2;
        led_sta = (led_sta == 5) ? 3 : (led_sta == 2) ? 5 : 2;
    }

    if (--cnt2 <= 0) {
        cnt2 = (led_sta2 == 5) ? 3 : (led_sta2 == 2) ? 5 : 2;
        led_sta2 = (led_sta2 == 5) ? 3 : (led_sta2 == 2) ? 5 : 2;
    }

    HAL_Delay(500);
}
