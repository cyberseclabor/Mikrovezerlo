#include <p32xxxx.h>

#define     BTN     PORTAbits.RA14
#define     LEDs    LATD
#define     LEDsA() { LEDs = 0xAAAA; }
#define     LEDs5() { LEDs = 0x5555; }

/*
visszatérési_típus név()
{
     
{
*/

// a sajátfüggvény szignatúrája
void Keses();

main()
{
    TRISD = 0x0000;

    while(1)
    {
        LATD = 0x0000;
        Keses();
        LATD = 0x0001;
        Keses();
    }
}

void Keses()
{
    int t;
    for(t = 0; t < 10000; t++);
}
