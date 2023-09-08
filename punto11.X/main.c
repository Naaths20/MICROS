#include "config.h"
#include "punto_11.h"
#include "sevenSeg.h"
#include <xc.h>

signed char dig;

void main(void){
    display_init();
    init_punto11();
   
    dig = 0;
    while(1){
        display_ac(dig);
        if(BTN_ENCENDER== LOW){ //COMO SON´ PULL UP SE ACTIVAN CON LOW
            PUERTO_D |= (1<<dig);
        }
        if(BTN_APAGAR== LOW){ //COMO SON´ PULL UP SE ACTIVAN CON LOW
            PUERTO_D &= ~(1<<dig);
        }
        if(BTN_BAJAR== LOW){ //COMO SON´ PULL UP SE ACTIVAN CON LOW
            while(BTN_BAJAR== LOW);
            dig--;
            if(dig <-1){
                dig=0;
            }
             
        }
        if(BTN_SUBIR== LOW){ //COMO SON´ PULL UP SE ACTIVAN CON LOW
            while(BTN_SUBIR== LOW);
            dig++;
            if(dig >7){
                dig=7;
            }
             
        }
        
    }
    return;
}
