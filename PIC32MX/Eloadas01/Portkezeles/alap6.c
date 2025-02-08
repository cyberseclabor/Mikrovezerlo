// az alap5.c file tartalmát módosítjuk.
// a makrókat, a sajátfüggvényt, annak a szignatúráját
// kitesszük különböző file-okba
// fgvs.c: sajátfüggvény deklarációja
// fgvh.h: a sajátfüggvény szignatúrája
// panel.h: különböző definíciók, makrók

#include <p32xxxx.h>
#include "panel.h"
#include "fgvh.h"

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
