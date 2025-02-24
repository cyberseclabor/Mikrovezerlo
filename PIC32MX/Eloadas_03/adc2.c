#include <xc.h>

#define ADOn()  { AD1CON1bits.ON = 1; }

void ADKonfig()
{
    AD1CON1 = 0x00E0;
    AD1CON2 = 0x0000;
    AD1CON3 = 0x1F3F;
    AD1CHSbits.CH0SA = 0;
    AD1CSSL = 0x0000;
    AD1PCFG = 0xFFFE;
    
}

unsigned int ADEredmeny()
{
    AD1CON1bits.SAMP = 1;
    while(!AD1CON1bits.DONE);
    return ADC1BUF0;
}

main()
{
    TRISD = 0x0000;
    LATD = 0x0000;
    
    ADKonfig();
    ADOn();
    
    while(1)
    {
        // egyéb m?velet
        
        if(ADEredmeny() <= 250)
            LATD = 0x0001;
        
        else
            LATD = 0x0008;
        
    }
}
