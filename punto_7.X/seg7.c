#include <xc.h>
#include "config.h"
#include "seg7.h"



char decoCC1[10]={191, 134, 219,207, 230, 237,253, 135, 255, 231};  //chay cuando se trabaja de 0 a 9, es decir de un caracter
int numero=0, decena, unidad;
char ultima_accion;

void display_init(void){
    puerto_c= OUT;
    puerto_d=  OUT;
    
    entrada0 = IN;
    analog_in0=LOW;
    entrada1= IN;
    analog_in1= LOW;
  
}

void display_cc(int dig1, char *PORT){
    
    switch(dig1){
        case 0: *PORT = decoCC1[0];
                break;
                
        case 1: *PORT = decoCC1[1];
                 break;
         
        case 2: *PORT = decoCC1[2];
                break;
                
        case 3: *PORT = decoCC1[3];
                break;
        
        case 4: *PORT = decoCC1[4];
                break;
                
        case 5: *PORT = decoCC1[5];
                break;
                
        case 6: *PORT = decoCC1[6];
                break;
         
        case 7: *PORT = decoCC1[7];
                break;
                
        case 8: *PORT = decoCC1[8];
                break;
        
        case 9: *PORT = decoCC1[9];
                break;
    }
}
//void display_cc2(int dig2){
//    
//    switch(dig2){
//        case 0: LATD = decoCC1[0];
//                break;
//                
//        case 1: LATD = decoCC1[1];
//                break;
//         
//        case 2: LATD = decoCC1[2];
//                break;
//                
//        case 3: LATD = decoCC1[3];
//                break;
//        
//        case 4: LATD = decoCC1[4];
//                break;
//                
//        case 5:LATD = decoCC1[5];
//                break;
//                
//        case 6: LATD = decoCC1[6];
//                break;
//         
//        case 7: LATD = decoCC1[7];
//                break;
//                
//        case 8: LATD = decoCC1[8];
//                break;
//        
//        case 9:  LATD = decoCC1[9];
//                break;
//    }
//}
 
void punto_7(void ){
    display_init();
    
     display_cc(0,&LATC);
     display_cc(0,&LATD);
     
      
    while(1){
         if(numero==99){
                numero=0;
                __delay_ms(300);
            }
         if(numero==0){
                numero=99;
                __delay_ms(300);
            }
        if(button0== HIGH && button1== LOW){
            ultima_accion=HIGH;
             
            
            numero= numero+1;
            decena=numero/10;
            unidad=numero%10;
            
            
        display_cc(decena,&LATC);
        display_cc(unidad,&LATD);
        __delay_ms(200);
    }
        else if(button0== LOW && button1== HIGH){
            ultima_accion=LOW;
            
            numero= numero-1;
            decena=numero/10;
            unidad=numero%10;
            
        display_cc(decena,&LATC);
        display_cc(unidad,&LATD);
        __delay_ms(200);
    }
        else if(button0== HIGH && button1== HIGH){
            
    }  else if(button0== LOW && button1== LOW){
        if(ultima_accion==HIGH){
            numero= numero+2;
            decena=numero/10;
            unidad=numero%10;
            
            
        display_cc(decena,&LATC);
        display_cc(unidad,&LATD);
        __delay_ms(200);
        }
       if(ultima_accion==LOW){
            numero= numero-2;
            decena=numero/10;
            unidad=numero%10;
            
            
        display_cc(decena,&LATC);
        display_cc(unidad,&LATD);
        __delay_ms(200);
        }
    }
        
        
        
        
    }
    
}
