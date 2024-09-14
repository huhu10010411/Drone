#include<uart.h>

void UART_SendData(char* str){
	while (*str){
		while (!(USART1->SR & (1 << 7)));
		USART1->DR = *str;
		str++;
	}
	while (!(USART1->SR & (1 << 6)));
}