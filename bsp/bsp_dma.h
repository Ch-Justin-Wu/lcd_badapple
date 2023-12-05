#ifndef __BSP_DMA_H
#define __BSP_DMA_H

#include "main.h"
#include "stm32g4xx_hal.h"
#include "usart.h"
#include "dma.h"




extern uint8_t uart_rx_buf1[1024 * 6];
extern uint8_t uart_rx_buf2[1024 * 6];
extern volatile int disp,  buf;

void My_USART1_Init(void);

#endif