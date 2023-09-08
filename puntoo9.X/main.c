#include <xc.h>
#include "config.h"


void init_punto9(void){
    BOTON0_DIR = IN;
    BOTON1_DIR = IN;
    BOTON2_DIR = IN;
    BOTON3_DIR = IN;
    
    LED0_DIR = OUT;
    LED1_DIR = OUT;
    LED2_DIR = OUT;
    
    LED0 = LOW;
    LED1 = LOW;
    LED2 = LOW;
}

void punto9(void){
    init_punto9();
    
    while(1){
        if(BOTON0 == LOW){
            if(LED0 == LOW && LED1 == LOW && LED2 == LOW){
                LED0 = HIGH;
            }
        }
        if(BOTON1 == LOW){
            if(LED0 == LOW && LED1 == LOW && LED2 == LOW){
                LED1 = HIGH;
            }
        }
        if(BOTON2 == LOW){
            if(LED0 == LOW && LED1 == LOW && LED2 == LOW){
                LED2 = HIGH;
            }
        }
        
        if(BOTON3 == LOW){
            LED0=LOW;
            LED1=LOW;
            LED2=LOW;
            
        }
    }
}
void main(void){
     punto9();
    while(1){
        
    }
    return;
}

