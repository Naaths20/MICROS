#include "punt5.h"
#include "config.h"
#include <xc.h>

char dig;

void init_1(void){
    entrada_0=IN;
    analog_0=LOW; //analogico desactivado
    
    entrada_1=IN;
    analog_1=LOW;
    
    entrada_2=IN;
    analog_2=LOW;
    
    entrada_3=IN;
    analog_3=LOW;
    
    SALIDAS=0x00; //config para salidas
    LATC_PINES=0x00; //config para estado logico todos en 0
           
    }


void logica_punto5(void){
    init_1();
    
    while(1){
        
    if(entrada0==1 && entrada1==0  && entrada2==0 && entrada3==0){//0001 es 1
         for(signed char i=7; i>-1; i--){
                LATC_PINES |= (1<<i);
                __delay_ms(200);
            }
           LATC_PINES=0x00;
          
    }
    else if(entrada0==0 && entrada1==1  && entrada2==0 && entrada3==0  ){//0010 es 2
         for(char i=0; i<8; i++){
                LATC_PINES |= (1<<i);
                __delay_ms(200);
            }
            LATC_PINES=0x00;
           
    }
    else if(entrada0==0 && entrada1==0  && entrada2== 1 && entrada3==0){//0100 es 4--> secuencia pares de izquierda a derecha
         for(char i=6; i>0; i=i-2){
                LATC_PINES |= (1<<i);
                __delay_ms(200);
            }
            LATC_PINES=0x00;
            
    }
    else if(entrada0==0 && entrada1==0  && entrada2==0 && entrada3==1){//1000 es 8--> secuencia pares de derecha a izquierda
         for(char i=2; i<8; i=i+2){
                LATC_PINES |= (1<<i);
                __delay_ms(200);
            }
            LATC_PINES=0x00;
            
    }
    else if(entrada0==1 && entrada1==1){//0011 es 3-->secuencia impares izquierda a derecha
         for(signed char i=7; i>0; i=i-2){
                LATC_PINES |= (1<<i);
                __delay_ms(200);
            }
            LATC_PINES=0x00;
    }
    else if(entrada0==1 && entrada2==1){//0101 es 5-->secuencia impares 
         for(char i=1; i<8; i=i+2){
                LATC_PINES |= (1<<i);
                __delay_ms(200);
            }
            LATC_PINES=0x00;
    }
    else if(entrada1==1 && entrada2==1){//0011 es 6-->secuencia impares de derecha a izquierda
         for(char i=7; i>0; i=i-2){
                LATC_PINES |= (1<<i);
                __delay_ms(200);
            }
            LATC_PINES=0x00;
    }
    else if((entrada1==1 && entrada2==1) && entrada0==1){//0011 es 7-->secuencia impares solo 2 numeros de derecha a izquierda
         for(char i=7; i>3; i=i-2){
                LATC_PINES |= (1<<i);
                __delay_ms(200);
            }
            LATC_PINES=0x00;
    }
    else if(entrada0==1 && entrada3==1){//0011 es 9-->secuencia de 0 a 4 de izquierda a derecha
         for(char i=0; i>5; i++){
                LATC_PINES |= (1<<i);
                __delay_ms(200);
            }
            LATC_PINES=0x00;
    }
    }
    
    

}
       
        
    

    
