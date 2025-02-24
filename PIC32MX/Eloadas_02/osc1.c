#include <xc.h>

// bels? órajel (8MHz), SYSCLK = 40MHz (PBCLK=10MHz)
#pragma config  POSCMOD = OFF, FSOSCEN = OFF, FNOSC = FRCPLL
#pragma config  FPBDIV = DIV_4
#pragma config  FPLLMUL = MUL_20, FPLLIDIV = DIV_2, FPLLODIV = DIV_2

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
    int k;
    for(k = 0; k < hatar; k++);
}
