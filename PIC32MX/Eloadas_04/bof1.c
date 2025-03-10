#include <xc.h>
#include "string.h"

void fgvMasol(char* adat)
{
    char t[10];
    strcpy(t,adat);
}


main()
{
    char tm[15] = {'1','2','3','1','2','3','1',
    '2','3','a', 'b','C', 'd','e', 's'};
    
    fgvMasol(tm);
    
    while(1);
}
