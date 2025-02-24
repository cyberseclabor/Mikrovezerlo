#include <xc.h>
#include "sys/attribs.h"

void __ISR(0, ipl1) IHetfo()
{
    IFS0bits.T1IF = 0;
    LATD++;
}

void Keses(int hatar)
{
    int k;
    for(k = 0; k < hatar; k++);
}

main()
{
    TRISB = 0x0000;
    LATB = 0x0000;
    TRISD = 0x0000;
    LATD = 0x0000;
    
    // T1konfig
    T1CON = 0x0020;
    PR1 = 0x1234;
    
    // INT konfig
    INTCON = 0x0000;
    
    // T1 Int beállítása
    IPC1bits.T1IP = 1;
    IPC1bits.T1IS = 2;
    
    
    // Engedélyezések
    asm volatile("ei");
    T1CONbits.ON = 1;
    IEC0bits.T1IE = 1;

    
    while(1)
    {
        // egyéb 
        Keses(10000);
        LATBbits.LATB0 = ~LATBbits.LATB0;
    }
}
