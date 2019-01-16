/*	Partner(s) Name & E-mail: Daniel Wahyu dwahy001@ucr.edu
 *	Lab Section: 024
 *	Assignment: Lab # 3 Exercise # 1
 *	Exercise Description: [optional - include for your own benefit]
 *	
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */

#include <avr/io.h>

// Bit-access function
unsigned char SetBit(unsigned char x, unsigned char k, unsigned char b) {
	return (b ? x | (0x01 << k) : x & ~(0x01 << k));
}
unsigned char GetBit(unsigned char x, unsigned char k) {
	return ((x & (0x01 << k)) != 0);
}


int main(void)
{
	DDRA = 0x00; PORTA = 0xFF; // Configure port A's 8 pins as inputs
	DDRB = 0x00; PORTB = 0xFF; // Configure port B's 8 pins as inputs,
	DDRC = 0xFF; PORTC = 0x00; // Configure port C's 8 pins as outputs,
    /* Replace with your application code */
	unsigned char inputA = 0x00;
	unsigned char inputB = 0x00;
	unsigned char i = 0x00;
    while (1) 
    {
		unsigned char totalOnes = 0x00;
		inputA = PINA;
		inputB = PINB;
		
		for (i = 0; i <= 7; i++){
			totalOnes += GetBit(inputA, i);
			totalOnes += GetBit(inputB, i);
		}
		PORTC =  totalOnes;
    }
}

