#include <avr/io.h>                        /* Defines pins, ports, etc */
#include <util/delay.h>                    /* Functions to waste time */

int main(void) {
    DDRB |= (1 << PINB0);
    DDRB |= (1 << PINB1);
    DDRB |= (1 << PINB2);

    while (1) {
	PORTB = 0b111;
        PORTB &= ~(1 << PINB0);
        _delay_ms(1000);

	PORTB = 0b111;
        PORTB &= ~(1 << PINB1);
        _delay_ms(1000);

	PORTB = 0b111;
        PORTB &= ~(1 << PINB2);
        _delay_ms(1000);
    }
    return (0);
}
