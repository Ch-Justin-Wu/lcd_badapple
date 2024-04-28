#include "bsp_dma.h"
#include "dma.h"
#include "usart.h"
uint8_t uart_rx_buf1[UART_RX_BUF_SIZE];
uint8_t uart_rx_buf2[UART_RX_BUF_SIZE];

volatile uint8_t buf = 1, disp = 1;


