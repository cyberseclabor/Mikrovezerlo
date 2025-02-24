#include <p32xxxx.h>

// SYSCLK = 40MHz, PBCLK = 10MHz

#pragma config  POSCMOD = OFF, FSOSCEN = OFF, FNOSC = FRCPLL
#pragma config  FPLLMUL = MUL_20, FPLLIDIV = DIV_2, FPLLODIV = DIV_2
#pragma config  FPBDIV = DIV_4

void Keses(int hatar);

main()
{
    TRISD = 0x0000;
    LATD = 0x0000;
    
    while(1)
    {
        Keses(10000);
        LATD++;
    }
}

void Keses(int hatar)
{
    int t;
    for(t = 0; t < hatar; t++);
}
