#include <xc.h>


main()
{
    TRISCbits.TRISC1 = 1;
    TRISD = 0x0000;
    LATD = 0x0000;
    
    // konfig T2
    T2CON = 0x0002;
    PR2 = 0xFFFF;
    T2CONbits.ON = 1;
    
    while(1)
    {
        // egyéb m?veletek
        LATD = TMR2;
        IFS0bits.T2IF = 0;
        // egyéb m?veletek
    }
}
