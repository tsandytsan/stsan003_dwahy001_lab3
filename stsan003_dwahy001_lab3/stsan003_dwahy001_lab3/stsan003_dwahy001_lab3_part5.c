/*	Partner(s) Name & E-mail: Daniel Wahyu dwahy001@ucr.edu
 *	Lab Section: 024
 *	Assignment: Lab # 3 Exercise # 5
 *	Exercise Description: [optional - include for your own benefit]
 *	
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */

#include <avr/io.h>



int main(void)
{
	DDRB = 0xFE; PORTB = 0x01; // Configure port B's last 7 pins as outputs, first pin as input
	DDRD = 0x00; PORTC = 0xFF; // Configure port D's 8 pins as inputs
    /* Replace with your application code */
	
	unsigned short enableWeight = 0x46;

	while (1)
    {
		unsigned short carWeight = (PIND << 1) + PINB;
		unsigned char lastB = PINB & 0x01;
		unsigned char airBag = 0x00;
		
		if (carWeight >= enableWeight){
			airBag = 0x02;
		}
		else if ((carWeight > 5) && (carWeight < enableWeight)){
			airBag = 0x04;
		}
		else { airBag = 0x00;}
		PORTB = airBag | lastB;
	}
}


