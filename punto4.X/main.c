#include <xc.h>
#include "config.h"

char cont = 0;

void main(void){
    init_punto4();
    
    while(1){
        if(entrada_button == LOW){
            while(entrada_button == LOW);
            cont++;
        }
        if(cont == 3){
            salida_led = ~salida_led;
            cont = 0;
        }
     
// se puede utiliza tambien este pero es más rapido el otro xd
//        if(cont == 3 && salida_led == LOW){
//            salida_led = HIGH;
//            cont = 0;
//        }
//        if(cont == 3 && salida_led == HIGH){
//            salida_led = LOW;
//            cont = 0;
//        }
    }
}
