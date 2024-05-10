#include "uart.h"
unsigned char string_buffer [100] = "Seif Hany Seif";
unsigned char const string_buffer_2 [100] = "Seif Hany Seif";
unsigned int var;
void main(void)
{
	Uart_Send_String(string_buffer);
}