/*
 * bai5.c
 *
 *  Created on: Sep 19, 2024
 *      Author: pc
 */
#include "bai5.h"
  int led_sta = 5;
  int led_sta2 = 3;
  int cnt = 5;
  int cnt2 = 3;
  int counter = 5;
  int counter2 = 3;
void traffic_2dimen()
{
    // Handle LED group 1
    switch (led_sta)
    {
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
    switch (led_sta2)
    {
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
    if (--cnt <= 0)
          {
              cnt = (led_sta == 5) ? 3 : (led_sta == 2) ? 5 : 2;
              led_sta = (led_sta == 5) ? 3 : (led_sta == 2) ? 5 : 2;
          }

          if (--cnt2 <= 0)
          {
              cnt2 = (led_sta2 == 5) ? 3 : (led_sta2 == 2) ? 5 : 2;
              led_sta2 = (led_sta2 == 5) ? 3 : (led_sta2 == 2) ? 5 : 2;
          }
}

void display7SEG(int number)
{
    HAL_GPIO_WritePin(seg1_GPIO_Port, seg1_Pin, SET); // A
    HAL_GPIO_WritePin(seg2_GPIO_Port, seg2_Pin, SET); // B
    HAL_GPIO_WritePin(seg3_GPIO_Port, seg3_Pin, SET); // C
    HAL_GPIO_WritePin(seg4_GPIO_Port, seg4_Pin, SET); // D
    HAL_GPIO_WritePin(seg6_GPIO_Port, seg6_Pin, SET); // F
    HAL_GPIO_WritePin(seg5_GPIO_Port, seg5_Pin, SET); // E
    HAL_GPIO_WritePin(seg7_GPIO_Port, seg7_Pin, SET); // G
    switch (number)
    {
        case 0:
            HAL_GPIO_WritePin(seg1_GPIO_Port, seg1_Pin, RESET); // A
            HAL_GPIO_WritePin(seg2_GPIO_Port, seg2_Pin, RESET); // B
            HAL_GPIO_WritePin(seg3_GPIO_Port, seg3_Pin, RESET); // C
            HAL_GPIO_WritePin(seg4_GPIO_Port, seg4_Pin, RESET); // D
            HAL_GPIO_WritePin(seg6_GPIO_Port, seg6_Pin, RESET); // F
            HAL_GPIO_WritePin(seg5_GPIO_Port, seg5_Pin, RESET); // E
            break;
        case 1:
            HAL_GPIO_WritePin(seg2_GPIO_Port, seg2_Pin, RESET); // B
            HAL_GPIO_WritePin(seg3_GPIO_Port, seg3_Pin, RESET); // C
            break;
        case 2:
            HAL_GPIO_WritePin(seg1_GPIO_Port, seg1_Pin, RESET); // A
            HAL_GPIO_WritePin(seg2_GPIO_Port, seg2_Pin, RESET); // B
            HAL_GPIO_WritePin(seg4_GPIO_Port, seg4_Pin, RESET); // D
            HAL_GPIO_WritePin(seg5_GPIO_Port, seg5_Pin, RESET); // E
            HAL_GPIO_WritePin(seg7_GPIO_Port, seg7_Pin, RESET); // G
            break;
        case 3:
            HAL_GPIO_WritePin(seg1_GPIO_Port, seg1_Pin, RESET); // A
            HAL_GPIO_WritePin(seg2_GPIO_Port, seg2_Pin, RESET); // B
            HAL_GPIO_WritePin(seg3_GPIO_Port, seg3_Pin, RESET); // C
            HAL_GPIO_WritePin(seg4_GPIO_Port, seg4_Pin, RESET); // D
            HAL_GPIO_WritePin(seg7_GPIO_Port, seg7_Pin, RESET); // G
            break;
        case 4:
            HAL_GPIO_WritePin(seg2_GPIO_Port, seg2_Pin, RESET); // B
            HAL_GPIO_WritePin(seg3_GPIO_Port, seg3_Pin, RESET); // C
            HAL_GPIO_WritePin(seg6_GPIO_Port, seg6_Pin, RESET); // F
            HAL_GPIO_WritePin(seg7_GPIO_Port, seg7_Pin, RESET); // G
            break;
        case 5:
            HAL_GPIO_WritePin(seg1_GPIO_Port, seg1_Pin, RESET); // A
            HAL_GPIO_WritePin(seg3_GPIO_Port, seg3_Pin, RESET); // C
            HAL_GPIO_WritePin(seg4_GPIO_Port, seg4_Pin, RESET); // D
            HAL_GPIO_WritePin(seg6_GPIO_Port, seg6_Pin, RESET); // F
            HAL_GPIO_WritePin(seg7_GPIO_Port, seg7_Pin, RESET); // G
            break;
        case 6:
            HAL_GPIO_WritePin(seg1_GPIO_Port, seg1_Pin, RESET); // A
            HAL_GPIO_WritePin(seg3_GPIO_Port, seg3_Pin, RESET); // C
            HAL_GPIO_WritePin(seg4_GPIO_Port, seg4_Pin, RESET); // D
            HAL_GPIO_WritePin(seg5_GPIO_Port, seg5_Pin, RESET); // E
            HAL_GPIO_WritePin(seg6_GPIO_Port, seg6_Pin, RESET); // F
            HAL_GPIO_WritePin(seg7_GPIO_Port, seg7_Pin, RESET); // G
            break;
        case 7:
            HAL_GPIO_WritePin(seg1_GPIO_Port, seg1_Pin, RESET); // A
            HAL_GPIO_WritePin(seg2_GPIO_Port, seg2_Pin, RESET); // B
            HAL_GPIO_WritePin(seg3_GPIO_Port, seg3_Pin, RESET); // C
            break;
        case 8:
            HAL_GPIO_WritePin(seg1_GPIO_Port, seg1_Pin, RESET); // A
            HAL_GPIO_WritePin(seg2_GPIO_Port, seg2_Pin, RESET); // B
            HAL_GPIO_WritePin(seg3_GPIO_Port, seg3_Pin, RESET); // C
            HAL_GPIO_WritePin(seg4_GPIO_Port, seg4_Pin, RESET); // D
            HAL_GPIO_WritePin(seg5_GPIO_Port, seg5_Pin, RESET); // E
            HAL_GPIO_WritePin(seg6_GPIO_Port, seg6_Pin, RESET); // F
            HAL_GPIO_WritePin(seg7_GPIO_Port, seg7_Pin, RESET); // G
            break;
        case 9:
            HAL_GPIO_WritePin(seg1_GPIO_Port, seg1_Pin, RESET); // A
            HAL_GPIO_WritePin(seg2_GPIO_Port, seg2_Pin, RESET); // B
            HAL_GPIO_WritePin(seg3_GPIO_Port, seg3_Pin, RESET); // C
            HAL_GPIO_WritePin(seg4_GPIO_Port, seg4_Pin, RESET); // D
            HAL_GPIO_WritePin(seg2_GPIO_Port, seg2_Pin, RESET); // F
            HAL_GPIO_WritePin(seg7_GPIO_Port, seg7_Pin, RESET); // G
            break;
    }
}

void display7SEG_2(int number)
{
    HAL_GPIO_WritePin(seg8_GPIO_Port, seg8_Pin, SET);   // A
    HAL_GPIO_WritePin(seg9_GPIO_Port, seg9_Pin, SET);   // B
    HAL_GPIO_WritePin(seg10_GPIO_Port, seg10_Pin, SET); // C
    HAL_GPIO_WritePin(seg11_GPIO_Port, seg11_Pin, SET); // D
    HAL_GPIO_WritePin(seg13_GPIO_Port, seg13_Pin, SET); // F
    HAL_GPIO_WritePin(seg12_GPIO_Port, seg12_Pin, SET); // E
    HAL_GPIO_WritePin(seg14_GPIO_Port, seg14_Pin, SET); // G

    switch (number)
    {
        case 0:
            HAL_GPIO_WritePin(seg8_GPIO_Port, seg8_Pin, RESET);   // A
            HAL_GPIO_WritePin(seg9_GPIO_Port, seg9_Pin, RESET);   // B
            HAL_GPIO_WritePin(seg10_GPIO_Port, seg10_Pin, RESET); // C
            HAL_GPIO_WritePin(seg11_GPIO_Port, seg11_Pin, RESET); // D
            HAL_GPIO_WritePin(seg13_GPIO_Port, seg13_Pin, RESET); // F
            HAL_GPIO_WritePin(seg12_GPIO_Port, seg12_Pin, RESET); // E
            break;
        case 1:
            HAL_GPIO_WritePin(seg9_GPIO_Port, seg9_Pin, RESET);   // B
            HAL_GPIO_WritePin(seg10_GPIO_Port, seg10_Pin, RESET); // C
            break;
        case 2:
            HAL_GPIO_WritePin(seg8_GPIO_Port, seg8_Pin, RESET);   // A
            HAL_GPIO_WritePin(seg9_GPIO_Port, seg9_Pin, RESET);   // B
            HAL_GPIO_WritePin(seg11_GPIO_Port, seg11_Pin, RESET); // D
            HAL_GPIO_WritePin(seg12_GPIO_Port, seg12_Pin, RESET); // E
            HAL_GPIO_WritePin(seg14_GPIO_Port, seg14_Pin, RESET); // G
            break;
        case 3:
            HAL_GPIO_WritePin(seg8_GPIO_Port, seg8_Pin, RESET);   // A
            HAL_GPIO_WritePin(seg9_GPIO_Port, seg9_Pin, RESET);   // B
            HAL_GPIO_WritePin(seg10_GPIO_Port, seg10_Pin, RESET); // C
            HAL_GPIO_WritePin(seg11_GPIO_Port, seg11_Pin, RESET); // D
            HAL_GPIO_WritePin(seg14_GPIO_Port, seg14_Pin, RESET); // G
            break;
        case 4:
            HAL_GPIO_WritePin(seg9_GPIO_Port, seg9_Pin, RESET);   // B
            HAL_GPIO_WritePin(seg10_GPIO_Port, seg10_Pin, RESET); // C
            HAL_GPIO_WritePin(seg13_GPIO_Port, seg13_Pin, RESET); // F
            HAL_GPIO_WritePin(seg14_GPIO_Port, seg14_Pin, RESET); // G
            break;
        case 5:
            HAL_GPIO_WritePin(seg8_GPIO_Port, seg8_Pin, RESET);   // A
            HAL_GPIO_WritePin(seg10_GPIO_Port, seg10_Pin, RESET); // C
            HAL_GPIO_WritePin(seg11_GPIO_Port, seg11_Pin, RESET); // D
            HAL_GPIO_WritePin(seg13_GPIO_Port, seg13_Pin, RESET); // F
            HAL_GPIO_WritePin(seg14_GPIO_Port, seg14_Pin, RESET); // G
            break;
        case 6:
            HAL_GPIO_WritePin(seg8_GPIO_Port, seg8_Pin, RESET);   // A
            HAL_GPIO_WritePin(seg10_GPIO_Port, seg10_Pin, RESET); // C
            HAL_GPIO_WritePin(seg11_GPIO_Port, seg11_Pin, RESET); // D
            HAL_GPIO_WritePin(seg12_GPIO_Port, seg12_Pin, RESET); // E
            HAL_GPIO_WritePin(seg13_GPIO_Port, seg13_Pin, RESET); // F
            HAL_GPIO_WritePin(seg14_GPIO_Port, seg14_Pin, RESET); // G
            break;
        case 7:
            HAL_GPIO_WritePin(seg8_GPIO_Port, seg8_Pin, RESET);   // A
            HAL_GPIO_WritePin(seg9_GPIO_Port, seg9_Pin, RESET);   // B
            HAL_GPIO_WritePin(seg10_GPIO_Port, seg10_Pin, RESET); // C
            break;
        case 8:
            HAL_GPIO_WritePin(seg8_GPIO_Port, seg8_Pin, RESET);   // A
            HAL_GPIO_WritePin(seg9_GPIO_Port, seg9_Pin, RESET);   // B
            HAL_GPIO_WritePin(seg10_GPIO_Port, seg10_Pin, RESET); // C
            HAL_GPIO_WritePin(seg11_GPIO_Port, seg11_Pin, RESET); // D
            HAL_GPIO_WritePin(seg12_GPIO_Port, seg12_Pin, RESET); // E
            HAL_GPIO_WritePin(seg13_GPIO_Port, seg13_Pin, RESET); // F
            HAL_GPIO_WritePin(seg14_GPIO_Port, seg14_Pin, RESET); // G
            break;
        case 9:
            HAL_GPIO_WritePin(seg8_GPIO_Port, seg8_Pin, RESET);   // A
            HAL_GPIO_WritePin(seg9_GPIO_Port, seg9_Pin, RESET);   // B
            HAL_GPIO_WritePin(seg10_GPIO_Port, seg10_Pin, RESET); // C
            HAL_GPIO_WritePin(seg11_GPIO_Port, seg11_Pin, RESET); // D
            HAL_GPIO_WritePin(seg13_GPIO_Port, seg13_Pin, RESET); // F
            HAL_GPIO_WritePin(seg14_GPIO_Port, seg14_Pin, RESET); // G
            break;
    }
}

