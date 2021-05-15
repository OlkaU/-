#include "TXlib.h"
#include "HeroesLibSDK\Heroeslib.h"

int main()
    {
    txCreateWindow (800, 600);

    txSetColor     (TX_WHITE);
    txSelectFont   ("Comic Sans MS", 30);
    txTextOut      (50, 20, "ПРИМЕР 1: Рисование солнца с разными параметрами");

    DrawSun   (100, 150, 1, 1, RGB (255, 255, 0), 5, 0, 1, 0);
    txSetColor(TX_WHITE);
    txTextOut (10, 300, "Размер 1, стандарный");
    txTextOut (10, 320, "     размер лучей");

    DrawSun   (100, 450, 0.5, 0.5, RGB (255, 255, 0), 7, 0, 2, 0);
    txSetColor(TX_WHITE);
    txTextOut (10, 550, "Размер 0.5, лучи увеличены");
    txTextOut (10, 570, "     в двое, грустное");

    DrawSun   (600, 150, 1.5, 1.5, RGB (255, 255, 0), 0, 0, 1, 5);
    txSetColor(TX_WHITE);
    txTextOut (500, 300, "Размер 1.5, улыбается,");
    txTextOut (500, 320, "     брови подняты");

    DrawSun   (600, 450, - 1,  1, RGB (255, 69, 0), 5, 2, 1, - 5);
    txSetColor(TX_WHITE);
    txTextOut (500, 550, "   Перевернутое, ");
    txTextOut (500, 570, "удивленное и злое");

    return 0;
    }
