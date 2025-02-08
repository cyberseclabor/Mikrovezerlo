#include <p32xxxx.h>

main()
{
    // "A" port 14. lába bemenet
    // A "D" port alsó 16 bitje kimenet
    TRISAbits.TRISA14 = 1;
    TRISD = 0x0000;
    
    if(PORTAbits.RA14)
        LATD = 0xAAAA;
    else
        LATD = 0x5555;
    
    while(1);
}
