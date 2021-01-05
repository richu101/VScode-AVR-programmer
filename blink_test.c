/*

#  This part is to define the board that we are using 
#  You can see all  the board list that are availabele in the ave/io.h lib by 
#  peacking to the header just select the avr/io.h in the #include part and press F12
#  press ctrl + f and search for the board that u are looking for
#  If your board is available then u can see the board name unde __AVR_your-board__
#  Here am using Atmega328p SO   __AVR_ATmega328P__ 

*/  

#ifndef __AVR_ATmega328P__ 
    #define __AVR_ATmega328P__
#endif
#define F_CPU 16000000UL

#include<avr/io.h>
#include<util/delay.h>

int main(void)
{
    DDRB = 0xff; 
    while(1)
    {

    PORTB = 0xff;
    _delay_ms(1000);
    PORTB = (0<<5);
    _delay_ms(1000);

    }
return (0);

}
