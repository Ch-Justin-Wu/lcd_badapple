#ifndef __BSP_DMA_H
#define __BSP_DMA_H

#include "stm32g4xx_hal.h"

extern uint8_t uart_rx_buf1[1024 * 6];
extern uint8_t uart_rx_buf2[1024 * 6];
extern volatile uint8_t disp, buf;

#endif