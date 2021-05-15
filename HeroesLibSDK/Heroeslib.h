//{===========================================================================
//! @file       Heroeslib.h
//!
//! @mainpage
//!
//! @brief  БИБЛИОТЕКА ГЕРОЕВ
//!
//! @par   Назначение
//!
//! Эта библиотека состоит из основных функций, которые используются
//! для создания мультфильма и состоит из разделов:
//! - функции героев, которые используются в мультфильме «Азбука дорожного движения»;
//! - примеры использования библиотечной функции.
//!
//!
//! @author Усова Ольга,
//!         Пермский край, МАОУ "ООШ № 4"
//!
//! @date   2021
//!
//! @defgroup Persons   Персонажи
//! @defgroup Examples  Примеры
//!
//! @par    Примеры:
//! -  @ref ExampleOne        "Рисование Солнца с разными параметрами"
//! -  @ref ExampleTwo        "Движение Cолнца и сияние"
//!
//!
//}===========================================================================

#include "TXLib.h"

void DrawMan          (int x, int y, double sizeX, double sizeY, int legsDistanceX = 0, int legsDistanceY = 0,
                       int locationHand = 0, int rHandUp = 0, int lHandUp = 0,
                       int HandRDistance = 0, int HandLDistance = 0, COLORREF bodyColor = RGB (0, 191, 255));

void DrawGirl         (int x, int y, double sizeX, double sizeY, int legsDistanceX = 0, int legsDistanceY = 0,
                       int locationHand = 0, int rHandUp = 0, int lHandUp = 0,
                       int HandRDistance = 0, int HandLDistance = 0,
                       COLORREF bodyColor = RGB (255, 0, 255),COLORREF bowColor = RGB (255, 182, 193));

void DrawCar          (int x, int y, double sizeX, double sizeY, COLORREF carColor, int movewheel = 0);

void DrawSun          (int x, int y, double sizeX, double sizeY, COLORREF bodyColor,
                       int smail,    double surprise, double lengthray, int brow);

void DrawCloud_Oblako (int x, int y, double sizeX, double sizeY, COLORREF bodyColor = RGB (255, 255, 255));

void DrawTree         (int x, int y, double sizeX, double sizeY,
                       COLORREF bodyColor = RGB (0, 128, 0), COLORREF trunkColor = RGB (139, 69, 19));

void DrawBush         (int x, int y, double sizeX, double sizeY, COLORREF bodyColor = RGB (0, 128, 0));

void DrawSignal       (int x, int y, double sizeX, double sizeY, COLORREF bodyColor = RGB (128, 128, 128),
                       COLORREF phanarUpColor = RGB (128, 128, 128),
                       COLORREF phanarcenterColor = RGB (128, 128, 128),
                       COLORREF phanarDownColor = RGB (128, 128, 128));

void ExampleOne       ();
void ExampleTwo       ();




//{=============================================================================
//!@ingroup Persons
//!
//!Рисуем Мальчика
//!
//! @note Влюбленный герой, нарушающий правила....
//!
//! @param x                    х-координата левого верхнего угла тела Мальчика
//! @param y                    у-координата левого верхнего угла тела Мальчика
//! @param sizeX                размер Мальчика по оси Х
//! @param sizeY                размер Мальчика по оси Y
//! @param legsDistanceX        изменение расстояния между ног по оси Х
//! @param legsDistanceY        изменение расстояния между ног по оси Y
//! @param locationHand         изменение расстояния между рук
//! @param rHandUp              движение правой руки вверх-вниз
//! @param lHandUp              движение левой руки вверх-вниз
//! @param HandRDistance        движение правой руки лево-право
//! @param HandLDistance        движение левой руки лево-право
//! @param bodyColor            цвет одежды Мальчика
//!
//! @par Пример использования
//!
//! @code
//!         DrawMan (550, 300, 1, 1, 0, 0, 0, 60, 60, 0, 0, RGB (0, 255, 0);
//! @endcode
//!
//}=============================================================================


void DrawMan (int x, int y, double sizeX, double sizeY, int legsDistanceX, int legsDistanceY,
              int locationHand, int rHandUp, int lHandUp, int HandRDistance, int HandLDistance,
              COLORREF bodyColor)
    {
    txSetColor     (RGB (0, 0, 0), 3);
    txSetFillColor (bodyColor);

    txLine      (x + (20*sizeX - 5*locationHand), y, x + (40 + legsDistanceX + HandLDistance)*sizeX - 15*locationHand, y + (30 - lHandUp)*sizeY);
    txRectangle (x,                               y, x +  20*sizeX,                                                    y + 50*sizeY);
    txLine      (x +   5*locationHand,            y, x - (20 + legsDistanceX + HandRDistance)*sizeX +  5*locationHand, y + (30 - rHandUp)*sizeY);

    txLine (x +   5*sizeX, y + 50*sizeY, x + ( 5 - legsDistanceX)*sizeX, y + (80 + legsDistanceY) *sizeY);
    txLine (x +  15*sizeX, y + 50*sizeY, x + (15 + legsDistanceX)*sizeX, y + (80 - legsDistanceY)*sizeY);

    txSetFillColor (RGB (255, 228, 196));
    txCircle       (x + 10*sizeX, y - 15*sizeY, 15);
    }

//{=============================================================================
//!@ingroup Persons
//!
//! Рисуем ДЕВОЧКУ
//!
//! @note Всегда ждет и верит в лучшее
//!
//! @param x                   х-координата вершины туловища ДЕВОЧКИ
//! @param y                   у-координата вершины туловища ДЕВОЧКИ
//! @param sizeX               размер ДЕВОЧКИ по оси Х
//! @param sizeY               размер ДЕВОЧКИ по оси Y
//! @param legsDistanceX       изменение расстояния между ног по оси Х
//! @param legsDistanceY       изменение расстояния между ног по оси Y
//! @param locationHand        изменение расстояния между рук,
//! @param rHandUp             движение правой руки вверх-вниз
//! @param lHandUp             движение левой руки вверх-вниз
//! @param HandRDistance       движение правой руки лево-право
//! @param HandLDistance       движение левой руки лево-право
//! @param bodyColor           цвет платья ДЕВОЧКИ
//! @param bowColor            цвет бантика ДЕВОЧКИ
//!
//! @par Пример использования
//!
//! @code
//!         DrawGirl (600, 250, 1, 1, 0, 0, 0, 0, 0, 0, 0, RGB (255, 255, 0), RGB (220, 20, 60);
//! @endcode
//!
//}=============================================================================

void DrawGirl(int x, int y, double sizeX, double sizeY, int legsDistanceX, int legsDistanceY,
              int locationHand, int rHandUp, int lHandUp, int HandRDistance, int HandLDistance,
              COLORREF bodyColor, COLORREF bowColor)
    {
    txSetColor     (RGB (0, 0, 0), 3);
    txSetFillColor (bodyColor);

    txLine (x + (5*sizeX - 5*locationHand), y, x + (35 + legsDistanceX + HandLDistance)*sizeX - 15*locationHand, y + (30 - lHandUp)*sizeY);

    POINT body[4] = {{ROUND (x - 5*sizeX), y}, {ROUND (x + 5*sizeX), y},
                    {ROUND (x + 25*sizeX), ROUND (y + 50*sizeY)}, {ROUND (x - 25*sizeX), ROUND (y + 50*sizeY)}};
    txPolygon (body, 4);

    txSetFillColor (bowColor);
    POINT bow[5] = {{x, ROUND (y - 30*sizeY)}, {ROUND (x + 15*sizeX), ROUND (y - 25*sizeY)},
                    {ROUND (x + 15*sizeX), ROUND (y - 40*sizeY)}, {ROUND (x - 15*sizeX), ROUND (y - 25*sizeY)},
                    {ROUND (x - 15*sizeX), ROUND (y - 40*sizeY)}};
    txPolygon (bow, 5);

    txLine (x - 5 + locationHand, y,            x - (35 + legsDistanceX + HandRDistance)*sizeX +  5*locationHand, y + (30 - rHandUp)*sizeY);

    txLine (x - 5*sizeX,          y + 50*sizeY, x - (5 + legsDistanceX)*sizeX,                                    y + (80 + legsDistanceY) *sizeY);
    txLine (x + 5*sizeX,          y + 50*sizeY, x + (5 + legsDistanceX)*sizeX,                                    y + (80 - legsDistanceY)*sizeY);

    txSetFillColor (RGB (255, 228, 196));
    txCircle       (x, y - 15*sizeY, 15);
    }

//{=============================================================================
//!@ingroup Persons
//!
//! Рисуем Машину
//!
//! @note Опасный, но очень необходимый транспорт. Водитель! Будь всегда внимателен!!!
//!
//! @param x                    х-координата капота машины
//! @param y                    у-координата капота машины
//! @param sizeX                размер машины по оси Х
//! @param sizeY                размер машины по оси Y
//! @param carColor             цвет машины
//! @param movewheel            движение колес по оси Y
//!
//! @par Пример использования
//!
//! @code
//!         DrawCar (600, 350, 1, 1, RGB (255, 255, 0), 0);
//! @endcode
//!
//}==============================================================================

void DrawCar (int x, int y, double sizeX, double sizeY, COLORREF carColor, int movewheel)
    {
    txSetColor     (RGB (  0,   0,   0), 3);
    txSetFillColor (carColor);

    txRectangle    (x, y, x + 200*sizeX, y + 40*sizeY);

    txSetFillColor (RGB (255, 255, 255));
    POINT roof[4] = {{ROUND (x + 50*sizeX), y}, {ROUND (x + 75*sizeX), ROUND(y - 25*sizeY)},
                     {ROUND (x + 155*sizeX), ROUND (y - 25*sizeY)}, {ROUND (x + 170*sizeX), y}};
    txPolygon (roof, 4);
    txLine         (x +  75*sizeX, y - 25*sizeY, x +  75*sizeX, y + 40*sizeY);
    txLine         (x + 155*sizeX, y - 25*sizeY, x + 155*sizeX, y + 40*sizeY);

    txSetFillColor (RGB (  0,   0,   0));
    txCircle       (x +  40*sizeX, y + 40*sizeY - movewheel, 20);
    txSetFillColor (RGB (255, 255, 255));
    txCircle       (x +  40*sizeX, y + 40*sizeY - movewheel, 10);

    txSetFillColor (RGB (  0,   0,   0));
    txCircle       (x + 170*sizeX, y + 40*sizeY - movewheel, 20);
    txSetFillColor (RGB (255, 255, 255));
    txCircle       (x + 170*sizeX, y + 40*sizeY - movewheel, 10);
    }

//{=============================================================================
//!@ingroup Persons
//!
//! Рисуем Солнце
//!
//! @note Дарит счастье
//!
//! @param x                    х-координата центра солнца
//! @param y                    у-координата центра солнца
//! @param sizeX                размер солнца по оси Х
//! @param sizeY                размер солнца по оси Y
//! @param bodyColor            цвет солнца
//! @param smail                движение рта
//! @param surprise             изменение размера зрачков
//! @param lengthray            измененеие размера лучей
//! @param brow                 движение бровей
//!
//! @par Пример использования
//!
//! @code
//!        DrawSun (1150, 50, 1, 1, RGB (255, 255, 0), 5, 0, 1, 5);
//! @endcode
//!
//}=============================================================================

void DrawSun (int x, int y, double sizeX, double sizeY, COLORREF bodyColor,
              int smail, double surprise, double lengthray, int brow)
    {
    txSetColor     (bodyColor, 3);
    txSetFillColor (bodyColor);

    txCircle (x,            y,            45 * sizeX);
    txLine   (x - 45*sizeX, y           , x - 95*lengthray*sizeX,  y                     );
    txLine   (x,            y + 45*sizeY, x,                       y + 95*lengthray*sizeY);
    txLine   (x - 25*sizeX, y + 25*sizeY, x - 75*lengthray*sizeX,  y + 75*lengthray*sizeY);
    txLine   (x - 25*sizeX, y - 25*sizeY, x - 50*lengthray*sizeX,  y - 50*lengthray*sizeY);
    txLine   (x + 25*sizeX, y + 25*sizeY, x + 50*lengthray*sizeX,  y + 50*lengthray*sizeY);

    txSetColor     (TX_WHITE);
    txSetFillColor (TX_WHITE);
    txCircle       (x - 15*sizeX, y - 12*sizeY, (10 - surprise)*sizeX);
    txSetFillColor (TX_BLACK);
    txCircle       (x - 15*sizeX, y - 12*sizeY, 3 * sizeX);

    txSetFillColor (TX_WHITE);
    txCircle       (x + 15*sizeX, y - 12*sizeY, (10 + surprise)*sizeX);
    txSetFillColor (TX_BLACK);
    txCircle       (x + 15*sizeX, y - 12*sizeY, 3 * sizeX);

    txSetColor (RGB (220, 20, 60), 3);
    txLine     (x - 10*sizeX, y + (20 + smail)*sizeY, x, y + (30 - smail)*sizeY);
    txLine     (x + 10*sizeX, y + (20 + smail)*sizeY, x, y + (30 - smail)*sizeY);

    txSetColor (RGB (139, 69, 19), 2);
    txLine     (x - 25*sizeX, y - 30*sizeY, x - 5*sizeX, y - (30 + brow)*sizeY);
    txLine     (x + 25*sizeX, y - 30*sizeY, x + 5*sizeX, y - (30 + brow)*sizeY);
    }

//{=============================================================================
//!@ingroup Persons
//!
//! Рисуем Облако
//!
//! @note Облако состоит из трех эллипсов. Центр находится в верхнем левом углу нижнего левого эллипса.
//!
//! @param x                    х-координата облака
//! @param y                    у-координата капота
//! @param sizeX                размер облака по оси Х
//! @param sizeY                размер машины по оси Y
//! @param bodyColor            цвет облака
//!
//! @par Пример использования
//!
//! @code
//!       DrawCloud_Oblako (200, 100, 1, 1, RGB (169, 169, 169));
//! @endcode
//!
//}==============================================================================

void DrawCloud_Oblako (int x, int y, double sizeX, double sizeY, COLORREF bodyColor)
    {
    txSetColor     (bodyColor);
    txSetFillColor (bodyColor);
    txEllipse      (x,            y,             x +  90*sizeX, y +  55*sizeY);
    txEllipse      (x + 40*sizeX, y +  10*sizeY, x + 145*sizeX, y +  75*sizeY);
    txEllipse      (x - 20*sizeX, y +  30*sizeY, x +  80*sizeX, y +  80*sizeY);
    }

//{=============================================================================
//!@ingroup Persons
//!
//! Рисуем дерево
//!
//! @note Дерево состоит из ствола и 4 окружностей. Центр находится в верхнем левом углу ствола.
//!
//! @param x                    х-координата центра дерева
//! @param y                    у-координата центра дерева
//! @param sizeX                размер дерева по оси Х
//! @param sizeY                размер дерева по оси Y
//! @param bodyColor            цвет кроны дерева
//! @param trunkColor           цвет ствола
//!
//! @par Пример использования
//!
//! @code
//!       DrawTree (500, 200, -1.2, 2, RGB (0, 128, 0), RGB (139, 69, 19));
//! @endcode
//!
//}==============================================================================

void DrawTree ( int x, int y, double sizeX, double sizeY, COLORREF bodyColor, COLORREF trunkColor)
    {
    txSetColor     (trunkColor);
    txSetFillColor (trunkColor);
    txRectangle    (x, y, x + 20*sizeX, y + 50*sizeY);

    txSetColor     (bodyColor);
    txSetFillColor (bodyColor);

    txCircle (x - 10*sizeX, y - 10*sizeY, 25 * sizeX);
    txCircle (x - 10*sizeX, y - 40*sizeY, 25 * sizeX);
    txCircle (x + 25*sizeX, y - 25*sizeY, 35 * sizeX);
    txCircle (x + 48*sizeX, y - 52*sizeY, 10 * sizeX);
    }

//{=============================================================================
//!@ingroup Persons
//!
//! Рисуем куст
//!
//! @note Куст состоит из 4 секторов эллипса. Центр находится в верхнем левом углу левого эллипса.
//!
//! @param x                    х-координата центра куста
//! @param y                    у-координата центра куста
//! @param sizeX                размер куста по оси Х
//! @param sizeY                размер куста по оси Y
//! @param bodyColor            цвет куста
//!
//! @par Пример использования
//!
//! @code
//!       DrawBush (250, 250, 0.5, 0.5, RGB (0, 128, 0));
//! @endcode
//!
//}==============================================================================

void DrawBush (int x, int y, double sizeX, double sizeY, COLORREF bodyColor)
    {
    txSetColor     (bodyColor);
    txSetFillColor (bodyColor);
    txPie (x,             y,            x +  50*sizeX, y + 50*sizeY, 0, 180);
    txPie (x +  35*sizeX, y - 15*sizeY, x +  90*sizeX, y + 65*sizeY, 0, 180);
    txPie (x +  80*sizeX, y - 15*sizeY, x + 135*sizeX, y + 65*sizeY, 0, 180);
    txPie (x + 125*sizeX, y,            x + 175*sizeX, y + 50*sizeY, 0, 180);
    }

//{=============================================================================
//!@ingroup Persons
//!
//! Рисуем Светофор
//!
//! @note Один из самых важных и ответственных героев мультфильма). Центр находится в верхнем левом углу ножки светофора.
//!
//! @param x                    х-координата центра куста
//! @param y                    у-координата центра куста
//! @param sizeX                размер куста по оси Х
//! @param sizeY                размер куста по оси Y
//! @param bodyColor            цвет светофора
//! @param phanarUpColor        цвет верхнего "глазика"
//! @param phanarcenterColor    цвет среднего "глазика"
//! @param phanarDownColor      цвет нижнего "глазика"
//!
//! @par Пример использования
//!
//! @code
//!       DrawSignal (605, 250, 1, 1, RGB (128, 128, 128), RGB (250, 0, 0));
//! @endcode
//!
//}==============================================================================

void DrawSignal(int x, int y, double sizeX, double sizeY, COLORREF bodyColor,
                COLORREF phanarUpColor, COLORREF phanarcenterColor, COLORREF phanarDownColor)
    {
    txSetColor     (RGB (  0,   0,   0));
    txSetFillColor (bodyColor);

    txRectangle    (x,            y, x + 20*sizeX, y +  80*sizeY);
    txRectangle    (x - 10*sizeX, y, x + 30*sizeX, y - 120*sizeY);

    txSetFillColor (phanarDownColor);
    txCircle       (x + 10*sizeX, y -  20*sizeY, 15);
    txSetFillColor (phanarcenterColor);
    txCircle       (x + 10*sizeX, y -  60*sizeY, 15);
    txSetFillColor (phanarUpColor);
    txCircle       (x + 10*sizeX, y - 100*sizeY, 15);
    }

//{============================================================================
//!@ingroup Examples
//!@page    ExampleOne  Пример 1: Рисование Солнца с разными параметрами
//!
//!      Простой пример вызова функции рисования Солнца на экране.
//!      Можно поэкспериментировать с разными параметрами, чтобы получить
//!      разные виды Солнца - большое или маленькое, веселое и доброе, удивленное или злое
//!      яркое или нет, с лучами или без.
//!
//!      Пробуй и посмотри, что у тебя получится
//!
//!@par Пример кода программы:
//!
//!@code
//!#include "TXlib.h"
//!#include "HeroesLibSDK\Heroeslib.h"
//!
//!int main()
//!    {
//!    txCreateWindow (800, 600);
//!
//!    txSetColor     (TX_WHITE);
//!    txSelectFont   ("Comic Sans MS", 30);
//!    txTextOut      (50, 20, "ПРИМЕР 1: Рисование солнца с разными параметрами");
//!
//!    DrawSun   (100, 150, 1, 1, RGB (255, 255, 0), 5, 0, 1, 0);
//!    txSetColor(TX_WHITE);
//!    txTextOut (10, 300, "Размер 1, стандарный");
//!    txTextOut (10, 320, "     размер лучей");
//!
//!    DrawSun   (100, 450, 0.5, 0.5, RGB (255, 255, 0), 7, 0, 2, 0);
//!    txSetColor(TX_WHITE);
//!    txTextOut (10, 550, "Размер 0.5, лучи увеличены");
//!    txTextOut (10, 570, "     в двое, грустное");
//!
//!    DrawSun   (600, 150, 1.5, 1.5, RGB (255, 255, 0), 0, 0, 1, 5);
//!    txSetColor(TX_WHITE);
//!    txTextOut (500, 300, "Размер 1.5, улыбается,");
//!    txTextOut (500, 320, "     брови подняты");
//!
//!    DrawSun   (600, 450, - 1,  1, RGB (255, 69, 0), 5, 2, 1, - 5);
//!    txSetColor(TX_WHITE);
//!    txTextOut (500, 550, "   Перевернутое, ");
//!    txTextOut (500, 570, "удивленное и злое");
//!
//!    return 0;
//!    }
//!         }
//! @endcode
//!
//}=============================================================================


//=============================================================================
//!@ingroup Examples
//!@page    ExampleTwo  Пример 2: Простая анимация Солнца
//!
//!
//!      Пример анимации движения Солнца. Для создания данного эффекта используется
//!      параметр для смещения координаты Х - центра Солнца на некоторую величину.
//!
//!      Для сияния лучей используем формула 1 * (t % 3). В зависимости от полученных
//!      остатков от деления на 3, длина лучей меняет.
//!
//!      Пробуй и посмотри, что у тебя получится
//!
//!@par Пример кода программы:
//!
//!@code
//!#include "TXlib.h"
//!#include "Heroeslib.h"
//!
//!int main()
//!    {
//!    txCreateWindow (800, 600);
//!
//!    for (int t = 0; t < 120; t++)
//!        {
//!        txClear ();
//!        txSetColor     (TX_WHITE);
//!        txSelectFont   ("Comic Sans MS", 30);
//!        txTextOut      (50, 20, "ПРИМЕР 2: Движение солнца и сияние");
//!
//!        DrawSun  (750 - t*5, 150, 1, 1, RGB (255, 255, 0), 0, 0, 1 * (t%3), 5);
//!
//!        txSleep (100);
//!        }
//!
//!    return 0;
//!    }
//! @endcode
//!
//}============================================================================

