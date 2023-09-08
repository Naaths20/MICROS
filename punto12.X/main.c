
#include <xc.h>
#include "config.h"
#include "punto_12.h"


char nibble1, nibble2, resultado;

void main(void){
    init_punto12();
    
    while(1){
         nibble1 = PUERTO_C & 0x0F; // aqui refiere a que nibble va a representar lo del puerto de los - significativos
         
         nibble2 = (PUERTO_C & 0xF0)>>4; //mueve los +significaivos a los - significativos con el fin de evitar basura
         
         if(BTN0 == LOW && BTN1== LOW && BTN2== LOW){
             resultado= nibble1 + nibble2;
             PUERTO_D= resultado;
         }
         if(BTN0 == HIGH && BTN1== LOW && BTN2== LOW){
             if(nibble1>nibble2){
             resultado= nibble1 - nibble2;
             PUERTO_D= resultado;
         }
             if(nibble2>nibble1){
             resultado= nibble2 - nibble1;
             PUERTO_D= resultado;
         }
         }
          if(BTN0 == LOW && BTN1== HIGH && BTN2== LOW){
             resultado= nibble1 * nibble2;
             PUERTO_D= resultado;
         }
          if(BTN0 == HIGH && BTN1== LOW && BTN2== LOW){
              if(nibble1>nibble2){
             resultado= nibble1 / nibble2;
             PUERTO_D= resultado;
              }
              if(nibble2>nibble1){
             resultado= nibble2 / nibble1;
             PUERTO_D= resultado;
              }
         }
    }
    return;
}

