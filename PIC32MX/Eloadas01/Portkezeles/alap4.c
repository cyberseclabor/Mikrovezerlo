#include <p32xxxx.h>

#define     BTN     PORTAbits.RA14
#define     LEDs    LATD

// makrók
#define     LEDsA() { LEDs = 0xAAAA; }
#define     LEDs5() { LEDs = 0x5555; }


main()
{
    // "A" port 14. lába bemenet
    TRISAbits.TRISA14 = 1;
    TRISD = 0x0000;

    // ha a "BTN" értéke logikai "1", akkor
    // a "D" porton 0xAAAA lesz
    if(BTN)
    {
        LEDsA();
    }
    else
        LEDs5();
    
    while(1);
}
