//#define F_CPU 1000000L

#include<avr/io.h>
#include<util/delay.h>

int main() {
	DDRA = (1 << DDA4);
	while (1) {
		PORTA = (1 << PA4);
		_delay_ms(20);
		PORTA = (0 << PA4);
		_delay_ms(10);
		PORTA = (1 << PA4);
		_delay_ms(20);
		PORTA = (0 << PA4);
		_delay_ms(10);
		PORTA = (1 << PA4);
		_delay_ms(20);
		PORTA = (0 << PA4);
		_delay_ms(500);
	}	
	return(0);
}
