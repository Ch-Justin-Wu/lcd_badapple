#include "bsp_dma.h"
#include "stm32g4xx_it.h"
#include "stdio.h"

#define UART_RX_BUF_SIZE 4800
// ����һ֡���ݵĳ���
volatile uint16_t rx_len = 0;

// A frame of data reception completion flag
// һ֡���ݽ�����ɱ�־
volatile uint8_t recv_end_flag = 0;


uint8_t uart_rx_buf1[1024 * 6];
uint8_t uart_rx_buf2[1024 * 6];

volatile int buf = 1, disp = 1;


