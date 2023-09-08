
#ifndef PUNTO_12_H
#define	PUNTO_12_H

#include <xc.h>

#define BTN0_DIR TRISBbits.TRISB0
#define BTN1_DIR TRISBbits.TRISB1
#define BTN2_DIR TRISBbits.TRISB2

#define BTN0 PORTBbits.RB0
#define BTN1 PORTBbits.RB1
#define BTN2 PORTBbits.RB2

#define BTN0_ANSEL ANSELBbits.ANSB0
#define BTN1_ANSEL ANSELBbits.ANSB1
#define BTN2_ANSEL ANSELBbits.ANSB2

#define PUERTO_D_DIR TRISD
#define PUERTO_D LATD

#define PUERTO_C_DIR TRISC
#define PUERTO_C PORTC

#define HIGH 1
#define LOW 0

#define IN 1
#define OUT 0

void init_punto12();


#endif	/* PUNTO_12_H */

