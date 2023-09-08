

#ifndef CONFIG_H
#define	CONFIG_H

#define _XTAL_FREQ 20000000

#include <xc.h>

#define BOTON0 PORTBbits.RB4
#define BOTON1 PORTBbits.RB5
#define BOTON2 PORTBbits.RB6

#define LOW 0
#define HIGH 1

void init_punto8(void);

#endif	/* CONFIG_H */

