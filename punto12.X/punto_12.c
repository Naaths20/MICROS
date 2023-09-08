
#include <xc.h>
#include "config.h"
#include "punto_12.h"

void  init_punto12(){
    BTN0_DIR = IN;
    BTN1_DIR = IN;
    BTN2_DIR = IN;
    
    BTN0_ANSEL = LOW;
    BTN1_ANSEL = LOW;
    BTN2_ANSEL = LOW;
    
    
    PUERTO_C_DIR = 0xFF;
    PUERTO_D_DIR = 0x00;
    
    PUERTO_C = 0X00;
    PUERTO_D = 0X00;
    
}