#include <xc.h>

#pragma config  FWDTEN = ON, WDTPS = PS1024

#define WDTTorol()  { WDTCONbits.WDTCLR = 1; WDTCONbits.WDTCLR = 0; }

void Keses(unsigned int hatar)
{
    int k;
    for(k = 0; k < hatar; k++);
}

void WDTMentes()
{
    // helyreállítás
}

main()
{
    TRISD = 0x0000;
    LATD = 0x0000;
    
    if(RCONbits.WDTO)
    {
        RCONbits.WDTO = 0;
        WDTMentes();
    }
    
    Keses(10000);
    
    while(1)
    {
        LATD = 0xFFFF;
        WDTTorol();
    }
}
