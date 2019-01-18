/*	Partner(s) Name & E-mail: Daniel Wahyu dwahy001@ucr.edu
 *	Lab Section: 024
 *	Assignment: Lab # 3 Exercise # 4
 *	Exercise Description: [optional - include for your own benefit]
 *	
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */

#include <avr/io.h>



int main(void)
{
	DDRA = 0x00; PORTA = 0xFF; // Configure port A's 8 pins as inputs
	DDRB = 0x0F; PORTB = 0xF0; // Configure port B's 8 pins as outputs
	DDRC = 0xF0; PORTC = 0x0F; // Configur0e port C's 8 pins as outputs,
    /* Replace with your application code */
	unsigned char inputA = 0x00;
	unsigned char outputB = 0x00;
	unsigned char outputC = 0x00;
	while (1)
    {
		inputA = PINA;
		outputB = (inputA & 0xF0) >> 4;
		outputC = (inputA & 0x0F) << 4;
		
		PORTB = outputB;	
		PORTC = outputC;
	}
}


