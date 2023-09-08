

#ifndef PUNT5_H
#define	PUNT5_H

#include <xc.h>

//configuracion
#define entrada_0   TRISBbits.TRISB0 //configuración de si es entrada o salida
#define analog_0    ANSELBbits.ANSB0 //Cambio de analogico a digital

#define entrada_1   TRISBbits.TRISB1  
#define analog_1    ANSELBbits.ANSB1

#define entrada_2   TRISBbits.TRISB2
#define analog_2    ANSELBbits.ANSB2

#define entrada_3   TRISBbits.TRISB3
#define analog_3    ANSELBbits.ANSB3


#define SALIDAS TRISC //configuracion
#define LATC_PINES  LATC    //Escribe, salidas

//PORT para leer entradas

#define entrada0 PORTBbits.RB0   //Para establecer estado logico, LOW or HIGH
#define entrada1 PORTBbits.RB1
#define entrada2 PORTBbits.RB2
#define entrada3 PORTBbits.RB3



#define OUT 0
#define IN 1

#define LOW 0
#define HIGH 1

void init_1(void);
void logica_punto5(void);
//void secuencia_1(char dig);

#endif	/* PUNTO5_H */


