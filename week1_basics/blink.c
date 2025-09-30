#include <avr/io.h>
#include <util/delay.h>

int main(void){

    // Set pin B4 to output
    DDRB = DDRB | (1 << DDRB4);

    // Main loop
    while(1){
        // Pin on
        PORTB = PORTB | (1 << PORTB4);
        // Wait 1 second
        _delay_ms(1000);
        // Pin off
        PORTB = PORTB & ~(1 << PORTB4);
        // Wait 1 second
        _delay_ms(1000);
    }
    return 0;
}