#include "led.h"

void led_disp(uint8_t ds_led)
{ // ����LEDϨ��
    HAL_GPIO_WritePin(GPIOC, GPIO_PIN_All, GPIO_PIN_SET);
    //
    HAL_GPIO_WritePin(GPIOC, ds_led<<8, GPIO_PIN_RESET);
    //��������
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_2, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOD, GPIO_PIN_2, GPIO_PIN_RESET);
}