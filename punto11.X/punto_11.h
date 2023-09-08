
#ifndef PUNTO_11_H
#define	PUNTO_11_H


#define BTN_APAGAR_DIR TRISBbits.TRISB4
#define BTN_ENCENDER_DIR TRISBbits.TRISB5
#define BTN_SUBIR_DIR TRISBbits.TRISB6
#define BTN_BAJAR_DIR TRISBbits.TRISB7

#define BTN_APAG ANSELBbits.ANSB4
#define BTN_ENCEN ANSELBbits.ANSB5

#define BTN_APAGAR PORTBbits.RB4
#define BTN_ENCENDER PORTBbits.RB5
#define BTN_SUBIR PORTBbits.RB6
#define BTN_BAJAR PORTBbits.RB7

#define PUERTOD TRISD
#define PUERTO_D LATD

#define HIGH 1
#define LOW 0

#define IN 1
#define OUT 0

void init_punto11(void);





#endif	 

