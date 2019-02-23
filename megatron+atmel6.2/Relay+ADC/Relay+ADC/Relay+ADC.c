#define F_CPU 16000000UL


#include <avr/io.h>
#include <util/delay.h>
#include "uart.h"
#include "adc.h"

int main(void)
{
	unsigned char digital;
	adc_init();					//initializatioon of ADC
	uart_init();
	DDRD=0xFF;
	DDRB=0b00001100;
	PORTB=0b00001100;
	while(1)
	{
		digital=getdata(0);		//reading the channel 0 of ADC PORTC 0 and store in variable digital
		//carriage return
		uart_num(digital);
		if (digital >= 180)
		{
			PORTD=0;
		} 
		else
		{
			PORTD=0xFF;
		}
		uart_char('\n');			//print the content of variable digital
		_delay_ms(100);   			//wait for some time
	}
	
}
