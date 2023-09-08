#include <xc.h>
#include "config.h"
#include "punto_6.h"


char dig;

void init_2(void){
    
   
    luz_verde1=OUT;
    luz_verde2=OUT;
    luz_verde3=OUT;
    
    luz_amarilla1=OUT;
    luz_amarilla2=OUT;
    luz_amarilla3=OUT;
    
    luz_roja1=OUT;
    luz_roja2=OUT;
    luz_roja3=OUT;
    
    rojo1 = LOW;
    rojo2 = LOW;
    rojo3 = LOW;

    amarilla1 = LOW;
    amarilla2 = LOW;
    amarilla3 = LOW;
  
    verde1 = LOW;
    verde2 = LOW;
    verde3 = LOW;
    }

 void main(void){
     init_2();
     
     while(1){
      
        
         amarilla3=LOW;
         rojo1=LOW;
         verde1=HIGH;
         rojo2=HIGH;
         rojo3=HIGH;
         __delay_ms(DELAY_ESPERA);
         
         amarilla1=HIGH;
         amarilla2=HIGH;
         verde1=LOW;
         rojo2=LOW;
          
         __delay_ms(DELAY_ESPERA);
         
         amarilla1=LOW;
         amarilla2=LOW;
         rojo1=HIGH;
         verde2=HIGH;
          
          
         
        __delay_ms(DELAY_ESPERA);
        
         rojo3=LOW;
         verde2=LOW;
         amarilla2=HIGH;
         amarilla3=HIGH;
         
         __delay_ms(DELAY_ESPERA);
         
         amarilla2=LOW;
         amarilla3=LOW;
         verde3=HIGH;
         rojo2=HIGH;
         
         __delay_ms(1000);
         verde3=LOW;
         amarilla3=HIGH;
         
         
         
     }
     return;
 }
