
#ifndef CONFIG_H
#define	CONFIG_H

#define _XTAL_FREQ 20000000UL

#include <xc.h>

#define entrada TRISBbits.TRISB0
#define analogic_en ANSELBbits.ANSB0

#define salida TRISBbits.TRISB7

#define entrada_button PORTBbits.RB0
#define salida_led LATBbits.LATB7



#define OUT 0
#define IN 1

#define LOW 0
#define HIGH 1

void init_punto4(void);


#endif	/* CONFIG_H */

