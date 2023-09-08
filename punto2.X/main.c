#include <xc.h>
#include "config.h"
#include "punto_2.h"




void main(void){
    
    OSCCON  = 0x38;
    OSCTUNE = 0x00;
    BORCON  = 0x00;
    
    TRISD_OUTS = 0x00;
    LATD_OUTS = 0x01; // estado lógico es para salidas
    
   
  
    while(1){
        for(char i=0; i<8; i++ ){
            LATD_OUTS  &= ~(1<<i); //para convertir en ceros
            LATD_OUTS  |= (1<<i+1); //para convertir en unos
            __delay_ms(200);
        }
         
        for(char i=7; i>0; i--){
            LATD_OUTS  &= ~(1<<i);
            LATD_OUTS  |= (1<<i-1);
            __delay_ms(200);
    
        }  

    }
    return;
    
            
}     
