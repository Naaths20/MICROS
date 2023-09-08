

#ifndef PUNTO_3_H
#define	PUNTO_3_H
#include <xc.h>


// NO UTILIZAR EL MISMOS PUERTO PARA ENTREADAS Y SALIDAS - EN SIMULACION NO QUIERE FUNCIONAR
#define salida_m1   TRISDbits.TRISD4
#define salida_m2   TRISDbits.TRISD5//el nombre es el DIR y a ese DIR se le coloca el TRISB que lo define, después uno dice si es entrada o salda
#define anselD4     ANSELDbits.ANSD4
#define anselD5     ANSELDbits.ANSD5


#define entrada_b1  TRISCbits.TRISC0
#define entrada_b2  TRISCbits.TRISC1



#define motor1  LATDbits.LATD4   //para modificarlo, LAT  (solo salidas ) para escribir  0 o 1. MOTOR ES SALIDA
#define motor2  LATDbits.LATD5
#define boton1  PORTCbits.RC0  // botones son entrada, el port escribir o leer. lee 0 o 1, entradas analogica, etc
#define boton2  PORTCbits.RC1 
//boton es entrada. el port es para entradas y salidas

#define OUT 0
#define IN 1

void init(void);




 
#endif	/* PUNTO2_H */



