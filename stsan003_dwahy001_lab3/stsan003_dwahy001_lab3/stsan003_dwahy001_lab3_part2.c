/*	Partner(s) Name & E-mail: Daniel Wahyu dwahy001@ucr.edu
 *	Lab Section: 024
 *	Assignment: Lab # 3 Exercise # 2
 *	Exercise Description: [optional - include for your own benefit]
 *	
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */

#include <avr/io.h>



int main(void)
{
	DDRA = 0x00; PORTA = 0xFF; // Configure port A's 8 pins as inputs
	DDRC = 0xFF; PORTC = 0x00; // Configure port C's 8 pins as outputs,
    /* Replace with your application code */
	unsigned char inputA = 0x00;
	unsigned char outputC = 0x00;
    while (1) 
    {
		outputC = 0x00;
		inputA = PINA & 0x0F;
		switch (inputA) {
			case 0x01:
				outputC = 0x60;
				break;
				
			case 0x02:
				outputC = 0x60;
				break;
			
			case 0x03:
				outputC = 0x70;
				break;
				
			case 0x04:
				outputC = 0x70;
				break;	
				
			case 0x05:
				outputC = 0x38;
				break;
				
			case 0x06:
				outputC = 0x38;
				break;
				
			case 0x07:
				outputC = 0x3C;
				break;
				
			case 0x08:
				outputC = 0x3C;
				break;
				
			case 0x09:
				outputC = 0x3C;
				break;
				
			case 0x0A:
				outputC = 0x3E;
				break;

			case 0x0B:
				outputC = 0x3E;
				break;
				
			case 0x0C:
				outputC = 0x3E;
				break;
				
			case 0x0D:
				outputC = 0x3F;
				break;
				
			case 0x0E:
				outputC = 0x3F;
				break;
				
			case 0x0F:
				outputC = 0x3F;
				break;
			}
			
			PORTC = outputC;
		
				
				
				

		}

    }


