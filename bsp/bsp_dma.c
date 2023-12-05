#include "bsp_dma.h"



uint8_t uart_rx_buf1[1024 * 6];
uint8_t uart_rx_buf2[1024 * 6];

volatile uint8_t buf = 1, disp = 1;


