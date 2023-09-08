#include <xc.h>
#include "config.h"
#include "punto_11.h"
 

void init_punto11(){
    BTN_APAGAR_DIR = IN;
    BTN_ENCENDER_DIR = IN;
    BTN_SUBIR_DIR = IN;
    BTN_BAJAR_DIR = IN;
    
    BTN_APAG = LOW;
    BTN_ENCEN = LOW;
    
    PUERTOD = 0x00; //salidas apagadas
    PUERTO_D = 0x00;
    
    OPTION_REGbits.nWPUEN = 0;
    WPUB = 0xF0;
    
}