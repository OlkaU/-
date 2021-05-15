#include "TXlib.h"
#include "Heroeslib.h"

int main()
    {
    txCreateWindow (800, 600);

    for (int t = 0; t < 120; t++)
        {
        txClear ();
        txSetColor     (TX_WHITE);
        txSelectFont   ("Comic Sans MS", 30);
        txTextOut      (50, 20, "ПРИМЕР 2: Движение солнца и сияние");

        DrawSun  (750 - t*5, 150, 1, 1, RGB (255, 255, 0), 0, 0, 1*(t%3), 5);

        txSleep (100);
        }

    return 0;
    }
