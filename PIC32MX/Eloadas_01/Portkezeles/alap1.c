#include <p32xxxx.h>

main()
{
    // "D" port kimenet
    // TRISD = 0;
    // TRISD = 0B0000000000000000;
    TRISD = 0x0000;
    
    // A "D" port kimenetén megjelenik a 0x1234
    // 0001 0010 0011 0100
    LATD = 0x1234;
    
    // a vezérlés nem mehet ki a main()-ből
    while(1);
}
