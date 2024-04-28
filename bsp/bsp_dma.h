#ifndef __BSP_DMA_H
#define __BSP_DMA_H

#include "stm32g4xx_hal.h"

#define UART_RX_BUF_SIZE 10800

#define RC_huart huart1
#define RC_UART USART1
#define RC_dma hdma_usart1_rx

extern uint8_t uart_rx_buf1[UART_RX_BUF_SIZE];
extern uint8_t uart_rx_buf2[UART_RX_BUF_SIZE];
extern volatile uint8_t disp, buf;

#endif