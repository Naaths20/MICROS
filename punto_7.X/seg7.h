
#ifndef SEG7_H
#define	SEG7_H


#include <xc.h>

#define puerto_c   TRISC
#define puerto_d   TRISD


#define entrada0   TRISBbits.TRISB0
#define analog_in0 ANSELBbits.ANSB0
#define entrada1   TRISBbits.TRISB1
#define analog_in1 ANSELBbits.ANSB1

#define button0 PORTBbits.RB0
#define button1 PORTBbits.RB1


#define OUT 0x00
#define IN  1

#define HIGH 1
#define  LOW 0


void display_init(void);
void display_cc(int dig1, char *PORT);
//void display_cc2(int dig2);
void punto_7 (void);

#endif	/* DISPLAY_7_SEG_H */

