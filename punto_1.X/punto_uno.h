
#ifndef PUNTO_UNO_H
#define	PUNTO_UNO_H
#include <xc.h>

#define RBO_DIR TRISBbits.TRISB0
#define RB1_DIR TRISBbits.TRISB1
#define RB2_DIR TRISBbits.TRISB2
#define RB3_DIR TRISBbits.TRISB3
#define RB4_DIR TRISBbits.TRISB4
#define RB5_DIR TRISBbits.TRISB5
#define RB6_DIR TRISBbits.TRISB6
#define RB7_DIR TRISBbits.TRISB7

#define RB0 LATBbits.LATB0
#define RB1 LATBbits.LATB1
#define RB2 LATBbits.LATB2
#define RB3 LATBbits.LATB3
#define RB4 LATBbits.LATB4
#define RB5 LATBbits.LATB5
#define RB6 LATBbits.LATB6
#define RB7 LATBbits.LATB7

#define OUT 0
#define IN  1

#define HIGH 1
#define  LOW 0


void init(void);


#endif	/* PUNTO_UNO_H */

