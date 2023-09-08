#include <xc.h>
#include "config.h"
#include "punto_uno.h"

void init(void){
    
    ANSELB = 0X00;
    RBO_DIR = OUT;
    RB1_DIR = OUT;
    RB2_DIR = OUT;
    RB3_DIR = OUT;
    RB4_DIR = OUT;
    RB5_DIR = OUT;
    RB6_DIR = OUT;
    RB7_DIR = OUT;
    
    RB0 = LOW;
    RB1 = LOW;
    RB2 = LOW;
    RB3 = LOW;
    RB4 = LOW;
    RB5 = LOW;
    RB6 = LOW;
    RB7 = LOW;
    
}

void main(void){
    init();
    
    OSCCON  = 0x38;
    OSCTUNE = 0x00;
    BORCON  = 0x00;
    
    while(1){
        RB0 = HIGH;
        RB1 = LOW;
        RB2 = LOW;
        RB3 = LOW;
        RB4 = LOW;
        RB5 = LOW;
        RB6 = LOW;
        RB7 = LOW;
        __delay_ms(200);
        
        RB0 = LOW;
        RB1 = HIGH;
        RB2 = LOW;
        RB3 = LOW;
        RB4 = LOW;
        RB5 = LOW;
        RB6 = LOW;
        RB7 = LOW;
        __delay_ms(200);
        
        RB0 = LOW;
        RB1 = LOW;
        RB2 = HIGH;
        RB3 = LOW;
        RB4 = LOW;
        RB5 = LOW;
        RB6 = LOW;
        RB7 = LOW;
        __delay_ms(200);
        
        RB0 = LOW;
        RB1 = LOW;
        RB2 = LOW;
        RB3 = HIGH;
        RB4 = LOW;
        RB5 = LOW;
        RB6 = LOW;
        RB7 = LOW;
        __delay_ms(200);
        
        RB0 = LOW;
        RB1 = LOW;
        RB2 = LOW;
        RB3 = LOW;
        RB4 = HIGH;
        RB5 = LOW;
        RB6 = LOW;
        RB7 = LOW;
        __delay_ms(200);
        
        RB0 = LOW;
        RB1 = LOW;
        RB2 = LOW;
        RB3 = LOW;
        RB4 = LOW;
        RB5 = HIGH;
        RB6 = LOW;
        RB7 = LOW;
        __delay_ms(200);
        
        RB0 = LOW;
        RB1 = LOW;
        RB2 = LOW;
        RB3 = LOW;
        RB4 = LOW;
        RB5 = LOW;
        RB6 = HIGH;
        RB7 = LOW;
        __delay_ms(200);
        
        RB0 = LOW;
        RB1 = LOW;
        RB2 = LOW;
        RB3 = LOW;
        RB4 = LOW;
        RB5 = LOW;
        RB6 = LOW;
        RB7 = HIGH;
        __delay_ms(200);
        
        RB0 = LOW;
        RB1 = LOW;
        RB2 = LOW;
        RB3 = LOW;
        RB4 = LOW;
        RB5 = LOW;
        RB6 = LOW;
        RB7 = HIGH;
        __delay_ms(200);
        
        RB0 = LOW;
        RB1 = LOW;
        RB2 = LOW;
        RB3 = LOW;
        RB4 = LOW;
        RB5 = LOW;
        RB6 = HIGH;
        RB7 = LOW;
        __delay_ms(200);
        
        RB0 = LOW;
        RB1 = LOW;
        RB2 = LOW;
        RB3 = LOW;
        RB4 = LOW;
        RB5 = HIGH;
        RB6 = LOW;
        RB7 = LOW;
        __delay_ms(200); 
        
        RB0 = LOW;
        RB1 = LOW;
        RB2 = LOW;
        RB3 = LOW;
        RB4 = HIGH;
        RB5 = LOW;
        RB6 = LOW;
        RB7 = LOW;
        __delay_ms(200);

        
        RB0 = LOW;
        RB1 = LOW;
        RB2 = LOW;
        RB3 = HIGH;
        RB4 = LOW;
        RB5 = LOW;
        RB6 = LOW;
        RB7 = LOW;
        __delay_ms(200);
        
         RB0 = LOW;
        RB1 = LOW;
        RB2 = HIGH;
        RB3 = LOW;
        RB4 = LOW;
        RB5 = LOW;
        RB6 = LOW;
        RB7 = LOW;
        __delay_ms(200);
        
         RB0 = LOW;
        RB1 = HIGH;
        RB2 = LOW;
        RB3 =  LOW;
        RB4 = LOW;
        RB5 = LOW;
        RB6 = LOW;
        RB7 = LOW;
        __delay_ms(200);
        
        RB0 = HIGH;
        RB1 = LOW;
        RB2 = LOW;
        RB3 = LOW;
        RB4 = LOW;
        RB5 = LOW;
        RB6 = LOW;
        RB7 = LOW;
        __delay_ms(200);
    }
    return;
    
}


