
#ifndef PUNTO_6_H
#define	PUNTO_6_H

#include <xc.h>


//aqui 2 semaforos puerto C-->configuracion de salida
#define luz_roja1  TRISCbits.TRISC0
#define luz_amarilla1  TRISCbits.TRISC1
#define luz_verde1  TRISCbits.TRISC2

#define luz_roja2  TRISCbits.TRISC3
#define luz_amarilla2  TRISCbits.TRISC4
#define luz_verde2  TRISCbits.TRISC5

//aqui 1 semaforo puerto -->configuracion de salida
#define luz_roja3  TRISDbits.TRISD0
#define luz_amarilla3  TRISDbits.TRISD1
#define luz_verde3  TRISDbits.TRISD2

//configuración LAT escribe, salidas del puerto C
#define rojo1  LATCbits.LATC0  //para modificarlo, LAT  (solo salidas ) para escribir  0 o 1. 
#define amarilla1  LATCbits.LATC1
#define verde1  LATCbits.LATC2

#define rojo2  LATCbits.LATC3  //para modificarlo, LAT  (solo salidas ) para escribir  0 o 1. 
#define amarilla2  LATCbits.LATC4
#define verde2  LATCbits.LATC5

//Salidas de 0 o bien 1 del puero D
#define rojo3  LATDbits.LATD0  //para modificarlo, LAT  (solo salidas ) para escribir  0 o 1. 
#define amarilla3  LATDbits.LATD1
#define verde3  LATDbits.LATD2




#define OUT 0
#define IN 1

#define LOW 0
#define HIGH 1

#define DELAY_ESPERA 3000


void init_2(void);


#endif	/* PUNTO6_H */

