#include <p32xxxx.h>

main()
{
    TRISD = 0x0000;
    
    // Timer1 időzító módban van
    T1CON = 0x0020;

    // az időzítő 0x1234-ig számol el
    // ha a TMR1 = PR1, akkor a TMR1
    // értéke 0 lesz, és újra indul a számlálás
    PR1 = 0x1234;
    T1CONbits.ON = 1;
    
    while(1)
    {
        // egyéb kódrészlet
        
        if(TMR1 < PR1/2)
            LATD = 0x0000;
        else
            LATD = 0x0001;
        
        // egyéb kód
    }
}
