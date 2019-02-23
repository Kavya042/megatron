/*
 * LED_CHK.c
 *
 * Created: 23-Feb-19 3:08:32 PM
 *  Author: sudha
 */ 


#include <avr/io.h>
#define F_CPU 16000000ul
#include <util/delay.h>

int main(void)
{
	DDRB=0xFF;
    while(1)
    {
		PORTB=0xAA;
		_delay_ms(100);
		
		PORTB=0x55;
		_delay_ms(100);
        //TODO:: Please write your application code 
    }
}