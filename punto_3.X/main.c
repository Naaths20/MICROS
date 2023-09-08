#include "punto_3.h"
#include "config.h"
#include <xc.h>

 void init(void){
    anselD4 = 0; //estado bajo o desactivado
    anselD5 = 0;
    salida_m1= OUT;
    salida_m2 = OUT;
    
    
    entrada_b1 = IN;
    entrada_b2 = IN;
    }
    
void main(void){
    init();
    
    
    while(1){
        
        if( boton1==0 && boton2==0){ 
            motor1=0;
            motor2=0;
            
        }
        if((boton1==0) && (boton2 ==1)){ 
            motor1 = 0;
            motor2=1;
        }
        
        if((boton1==1) && (boton2==0)){ 
            motor2=0;
            motor1 = 1;
        }
        if((boton1==1) && (boton2==1)){ 
            motor2=0;
            motor1=0;
        }
        
    }
    return;
    
}
    