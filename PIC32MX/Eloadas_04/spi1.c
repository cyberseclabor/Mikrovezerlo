#include <xc.h>

#define sdi1    PORTCbits.RC4
#define sdo1    LATDbits.LATD0
#define sck1    LATDbits.LATD10
#define ss1     LATDbits.LATD9

#define masterEng()   { ss1 = 0; }
#define masterDis()   { ss1 = 1; }

// fgv
void spiConfig()
{
    SPI1CON = 0x0120;
    SPI1BRG = 0x0008;
}

char spiIrOlvas(char adat)
{
    SPI1BUF = adat;
    while(!SPI1STATbits.SPIRBF);
    return SPI1BUF;
}


main()
{
    TRISB = 0x0000;
    TRISD = 0x0000;
    TRISCbits.TRISC4 = 1;
    
    spiConfig();
    
    while(1)
    {
        // egyéb m?veletek
        masterEng();
        spiIrOlvas('K');
        masterDis();
    }
}
