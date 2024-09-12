/*
 * bai4.h
 *
 *  Created on: Sep 12, 2024
 *      Author: pc
 */

#ifndef INC_BAI4_H_
#define INC_BAI4_H_
  void display7SEG(int number) {
      HAL_GPIO_WritePin(seg1_GPIO_Port, seg1_Pin, SET); // A
      HAL_GPIO_WritePin(seg2_GPIO_Port, seg2_Pin, SET); // B
      HAL_GPIO_WritePin(seg3_GPIO_Port, seg3_Pin, SET); // C
      HAL_GPIO_WritePin(seg4_GPIO_Port, seg4_Pin, SET); // D
      HAL_GPIO_WritePin(seg6_GPIO_Port, seg6_Pin, SET); // F
      HAL_GPIO_WritePin(seg5_GPIO_Port, seg5_Pin, SET); // E
      HAL_GPIO_WritePin(seg7_GPIO_Port, seg7_Pin, SET);
      switch (number) {
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
              HAL_GPIO_WritePin(seg6_GPIO_Port, seg6_Pin, RESET); // F
              HAL_GPIO_WritePin(seg7_GPIO_Port, seg7_Pin, RESET); // G
              break;
          default://
              break;
      }
  }


#endif /* INC_BAI4_H_ */
