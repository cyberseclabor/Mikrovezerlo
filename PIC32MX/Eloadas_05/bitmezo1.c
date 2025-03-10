#include <p32xxxx.h>

typedef unsigned char byte;

union
{
    struct
    {
        unsigned c0:1;
        unsigned c1:1;
        unsigned c2:1;
        unsigned c3:1;
        unsigned c4:1;
        unsigned c5:1;
        unsigned c6:1;
        unsigned c7:1;
    } Bit;
    unsigned char erzekeloTomb;
} Flags;

main()
{
    char ch;
    byte b1;
    
    TRISD = 0x0000;
    TRISB = 0x0000;
    Flags.erzekeloTomb = 0x12;
    Flags.Bit.c0 = 1;
    LATDbits.LATD0 = Flags.Bit.c2;
    
    while(1);
}
