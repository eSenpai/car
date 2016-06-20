#include <avr/io.h>
#include <util/delay.h>
#include "stdio.h"
#include "stdint.h"
#include "commands.h"

int main(void){
	cm_init();
	cm_reset();
    while(1){
		cm_left();
		cm_fw();
		_delay_ms(500);
		cm_reset();
		_delay_ms(500);
		cm_bw();
		cm_right();
		_delay_ms(500);
		cm_reset();
		_delay_ms(500);
		
    }
}
