/*
 * servo_controll using_Timer0.cpp
 *
 * Created: 11-07-2020 4.07.55 PM
 * Author : abhin
 */ 
#define F_CPU 1000000UL
#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>

int main(void)
{
	DDRD|=(1<<PIND6);
	
    TCCR0A|=(1<<COM0A0)|(1<<COM0A1);
	TCCR0A|=(1<<WGM00)|(1<<WGM01);
	TCCR0B|=(1<<CS01)|(1<<CS00);
	//OCR0A=224;
    while (1) 
    {
		OCR0A=246;
		_delay_ms(5000);
		OCR0A=230;
		_delay_ms(1000);
		OCR0A=216;
		_delay_ms(5000);
		OCR0A=230;
		_delay_ms(1000);
    }
}

