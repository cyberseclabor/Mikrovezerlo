#include <xc.h>
#include "sys/attribs.h"

//INT3/RA14

// makrók, definíciók
#define     T1ON()  { T1CONbits.ON = 1; }

// INT fgv
void __ISR(_TIMER_1_VECTOR, ipl1) IntTimer1()
{
    IFS0bits.T1IF = 0;
    LATD++;
}

void __ISR(_EXTERNAL_3_VECTOR, ipl1) IntINT3()
{
    IFS0bits.INT3IF = 0;
    LATB++;
}

main()
{
    // Konfig
    TRISAbits.TRISA14 = 1;
    TRISD = 0x0000;
    TRISB = 0x0000;
    LATB = 0x0000;
    LATD = 0x0000;
    
    // T1 id?zít?, 1:64
    T1CON = 0x0020;
    PR1 = 0x1234;
    
    // Int T1
    IFS0bits.T1IF = 0;
    IPC1bits.T1IP = 1;
    IPC1bits.T1IS = 2;
    
    // Int INT3/RA14
    IFS0bits.INT3IF = 0;
    IPC3bits.INT3IP = 1;
    IPC3bits.INT3IS = 2;
    
    // INT globális, multivector
    INTCONbits.MVEC = 1;
    
    // INT engedélyezések
    asm volatile("ei");
    IEC0bits.T1IE = 1;
    IEC0bits.INT3IE = 1;
    T1ON();
    
    
    while(1)
    {
        // egyéb m?veletek
    }
}
