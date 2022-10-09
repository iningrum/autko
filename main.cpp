/*
 * autko.cpp
 *
 * Created: 10/9/2022 10:34:14 AM
 * Author : WIN-11K
 */ 
#define  F_CPU 1600000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRB |= 0xCC;
	PORTB |= 0xCC;
    /* Replace with your application code */
    while (1) 
    {
		_delay_ms(10000);
		PORTB ^= 0xCC;
    }
}