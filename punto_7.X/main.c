#include <xc.h>
#include "config.h"
#include "seg7.h"
 
void main(void){
    OSCCON  = 0x38;
    OSCTUNE = 0x00;
    BORCON  = 0x00;
    
    punto_7();
    while(1){
       
    }
    
    return;
}

