#include <avr/io.h>
#include <util/delay.h>
#include "stdio.h"
#include "stdint.h"
#include "commands.h"

#define DDR   DDRC
#define PORT  PORTC

#define left  PINC4
#define right PINC5
#define fw    PINC3  //forwards
#define bw    PINC2  //backwards

void cm_init(void){
	DDR |= 1 << left;
    DDR |= 1 << right;
	DDR |= 1 << fw;
    DDR |= 1 << bw;
}

void cm_right(void){
	PORT |= 1 << right;
	//PORT &= ~ 1 << left;
}

void cm_left(void){
	PORT |= 1 << left;
	//PORT &= ~ 1 << right;
}

void cm_reset(void){
	PORT &= ~ 1 << right;
	PORT &= ~ 1 << left;
	PORT &= ~ 1 << fw;
	PORT &= ~ 1 << bw;
}

void cm_fw(void){
	PORT |= 1 << fw;
}

void cm_bw(void){
	PORT |= 1 << bw;
}
