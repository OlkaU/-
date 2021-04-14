//{===========================================================================
//!
//!  Мультфильм "Азбука дорожного движения"
//!
//!  Первая зачетная работа по КПК
//!
//!  2021
//!
//! (C) Усова Ольга Викторовна
//}===========================================================================

#include "TXlib.h"

void DrawBand_Polosa   (int x, int y, double sizeX, double sizeY);
void DrawCloud_Oblako  (int x, int y, double sizeX, double sizeY, COLORREF bodyColor = RGB (255, 255, 255));
void DrawSun           (int x, int y, double sizeX, double sizeY, COLORREF bodyColor,
                       int smail,    double surprise, double lengthray, int brow);
void DrawTree          (int x, int y, double sizeX, double sizeY,
                       COLORREF bodyColor = RGB (0, 128, 0), COLORREF trunkColor = RGB (139, 69, 19));
void DrawBush          (int x, int y, double sizeX, double sizeY, COLORREF bodyColor = RGB (0, 128, 0));
void DrawSignal        (int x, int y, COLORREF phanarUpColor = RGB (128, 128, 128),
                       COLORREF phanarcenterColor = RGB (128, 128, 128), COLORREF phanarDownColor = RGB (128, 128, 128));
void DrawMan           (int x, int y, double sizeX, double sizeY, int legsDistanceX = 0, int legsDistanceY = 0,
                       int locationHand = 0, int rHandUp = 0, int lHandUp = 0,
                       int HandRDistance = 0, int HandLDistance = 0, COLORREF bodyColor = RGB (0, 191, 255));
void DrawGirl          (int x, int y, double sizeX, double sizeY, int legsDistanceX = 0, int legsDistanceY = 0,
                       int locationHand = 0, int rHandUp = 0, int lHandUp = 0,
                       int HandRDistance = 0, int HandLDistance = 0, COLORREF bodyColor = RGB (255, 0, 255));
void DrawCar           (int x, int y, double sizeX, double sizeY, COLORREF carColor);
void DrawPhrase        ();

void DrawRoad          ();
void DrawForest        ();

void StartTitles       ();
void Scene_Nach        ();
void SceneRed_Cener    ();
void SceneRed_Sun_Cener();
void SceneYellow_Cener ();
void SceneGreen_Cener  ();
void Scene_End         ();

void Start             ();
void StepForward       ();
void Culmination       ();
void Stepback          ();
void YellowLight       ();
void Transition        ();
void Finish            ();
void FinishTitles      ();


int main ()
    {
    txCreateWindow (1200, 700);
    txBegin ();

    txSetFillColor (RGB (176, 224, 230));
    txClear ();

    StartTitles ();
    Start ();
    StepForward ();
    Culmination ();
    Stepback ();
    YellowLight ();
    Transition ();
    Finish ();
    FinishTitles() ;

    txEnd ();
    return 0;
    }

 //--------------------------------------------------------

void Scene_Nach ()
    {
    DrawForest ();
    DrawRoad ();
    DrawSignal (605, 250, RGB (250, 0, 0));
    }

void SceneRed_Cener ()
    {
    DrawForest ();
    DrawRoad ();
    DrawSignal (605, 250, RGB (250, 0, 0));
    }

void SceneRed_Sun_Cener ()
    {
    DrawForest ();
    DrawRoad ();
    DrawSignal (605, 250, RGB (250, 0, 0));
    DrawSun (1150, 50, 1, 1, RGB (255, 255, 0), 5, 0, 1, 5);
    }

void SceneYellow_Cener ()
    {
    DrawForest ();
    DrawRoad ();
    DrawSignal (605, 250, RGB (128, 128, 128), RGB (255, 255, 0));
    DrawSun (1150, 50, 1, 1, RGB (255, 255, 0), 5, 0, 1, 5);
    }

void SceneGreen_Cener ()
    {
    DrawForest ();
    DrawRoad ();
    DrawSignal (605, 250, RGB (128, 128, 128), RGB (128, 128, 128), RGB (0, 250, 0));
    DrawSun    (1150, 50, 1, 1, RGB (255, 255, 0), 1, 0, 1, 1);
    }

void Scene_End ()
    {
    DrawForest ();
    DrawRoad ();
    DrawSignal (605, 250, RGB (250, 0, 0));
    DrawSun (1150, 50, 1, 1, RGB (255, 255, 0), 1, 0, 1, 1);
    }

//--------------------------------------------------------

void StartTitles ()
    {
    int t = 0;

    while (t <= 100)
        {
        txClear ();
        Scene_Nach ();

        DrawCloud_Oblako ( 200, 100,   1,   1, RGB (169, 169, 169));
        DrawCloud_Oblako (   0,  20, 0.5, 0.5, RGB (169, 169, 169));
        DrawCloud_Oblako ( 500,  50,   1,   1, RGB (169, 169, 169));
        DrawCloud_Oblako (  50,  80, 1.5, 1.5, RGB (169, 169, 169));
        DrawCloud_Oblako ( 700,  30,   1,   1, RGB (169, 169, 169));
        DrawCloud_Oblako (1000,  40, 0.8, 0.8, RGB (169, 169, 169));

        txSetTextAlign (TA_CENTER);

        txSetColor     (TX_BLACK);
        txSelectFont   ("Comic Sans MS", 100);
        txTextOut      (-100 + t * 15, 210, "Азбука");

        txSetColor     (TX_BLACK);
        txSelectFont   ("Comic Sans MS", 100);
        txTextOut      (-100 + t * 15, 310, "дорожного");

        txSetColor     (TX_BLACK);
        txSelectFont   ("Comic Sans MS", 100);
        txTextOut      (-100 + t * 15, 410, "движения");

        txSetFillColor (RGB (70, 130, 180));

        txSleep (100);
        t++;
        }
    txSleep (300);
    }

void Start ()
    {
    int t = 0;

    while (t <= 100)
        {
        txClear ();
        Scene_Nach ();

        DrawCloud_Oblako ( 200 + t*12, 100,   1,   1, RGB (169, 169, 169));
        DrawCloud_Oblako (   0 + t*12,  20, 0.5, 0.5, RGB (169, 169, 169));
        DrawCloud_Oblako ( 500 + t*12,  50,   1,   1, RGB (169, 169, 169));
        DrawCloud_Oblako (  50 + t*12,  80, 1.5, 1.5, RGB (169, 169, 169));
        DrawCloud_Oblako ( 700 + t*12,  30,   1,   1, RGB (169, 169, 169));
        DrawCloud_Oblako (1000 + t*12,  40, 0.8, 0.8, RGB (169, 169, 169));

        DrawMan  (0 + ROUND(5.5 * t), 250, 0.5, 1, ((t/2)%2)*35, 0, 1);

        DrawCar  (1100 - t*15, 350,  1, 1, RGB(255, 140,   0));
        DrawCar  (   0 + t*15, 450, -1, 1, RGB(  0,   0, 128));

        DrawGirl (600, 520, 1, 1, 0, 0, 0, 60, 0, ((t/2)%2)*30);

        txSetFillColor (RGB (70 + t * 1.06, 130 + t * 0.94, 180 + t * 0.5));

        txSleep (100);
        t++;
        }
    }


void StepForward ()
    {
    int t = 0;

    while (t <= 100)
        {
        txClear ();
        SceneRed_Cener ();

        DrawCloud_Oblako ( 210 + t*12, 100, 0.3, 0.3);
        DrawCloud_Oblako (   0 + t*12,  20, 0.5, 0.5);
        DrawCloud_Oblako ( 500 + t*12,  50, 0.2, 0.2);
        DrawCloud_Oblako (  50 + t*12,  80, 0.5, 0.5);
        DrawCloud_Oblako ( 700 + t*12,  30, 0.4, 0.4);
        DrawCloud_Oblako (1000 + t*12, 100, 0.3, 0.3);

        DrawSun  (1300 - ROUND(t * 1.5), 150 - t, 1, 1, RGB (255, 255, 0), 5, 0, 1, 5);

        DrawCar  (1800 - t*12, 350,  1, 1, RGB( 75,   0, 130));
        DrawCar  (   0 + t*15, 450, -1, 1, RGB(255, 215,   0));

        DrawMan  (550, 250 + ROUND(t * 0.5), 1, 1, 1, ((t/2)%2)*5, 0,  0, 60,            0, ((t/2)%2)*30);
        DrawGirl (600,                  520, 1, 1, 0,           0, 0, 60,  0, ((t/2)%2)*30);

        txSetFillColor (RGB (176, 224, 230));

        txSleep (100);
        t++;
        }
    }


void Culmination ()
    {
    int t = 0;

    while (t <= 80)
        {
        txClear ();
        SceneRed_Sun_Cener ();

        DrawCar (600,      350,  1, 1, RGB( 75,  0, 130));
        DrawCar (0 + t*15, 450, -1, 1, RGB(255, 69,   0));

        DrawMan  (550, 300, 1, 1);
        DrawGirl (600, 520, 1, 1);

        DrawPhrase ();

        txSetFillColor (RGB (176, 224, 230));

        txSleep (50);
        t++;
        }
    }

void Stepback ()
    {
    int t = 0;

    while (t <= 100)
        {
        txClear ();
        SceneRed_Sun_Cener ();

        DrawMan  (550, 300 - ROUND(t * 0.5), 1, 1, 1, ((t/2)%2)*5);

        DrawCar  (600 - t * 12, 350,  1, 1, RGB( 75,   0, 130));
        DrawCar  (  0 + t * 15, 450, -1, 1, RGB(240, 128, 128));

        DrawGirl (600, 520, 1, 1);

        txSetFillColor (RGB (176, 224, 230));

        txSleep (100);
        t++;
        }

    }

void YellowLight ()
    {
    int t = 0;

    while (t <= 100)
        {
        txClear ();
        SceneYellow_Cener ();

        DrawMan  (550, 250, 1, 1);


        DrawCar  (1200 - t*6, 350,  1, 1, RGB(0, 255,   0));
        DrawCar  (   0 + t*5, 450, -1, 1, RGB(0,   0, 128));

        DrawGirl (600, 520, 1, 1);

        txSetFillColor (RGB (176, 224, 230));

        txSleep (30);
        t++;
        }
    }

void Transition ()
    {
    int t = 0;

    while (t <= 125)
        {
        txClear ();
        SceneGreen_Cener ();

        DrawSun  (1150,  50,  1, 1, RGB (255, 255,   0), 1, 0, 1, 1);

        DrawCar  ( 600, 350,  1, 1, RGB (  0, 255,   0));
        DrawCar  ( 500, 450, -1, 1, RGB (  0,   0, 128));

        DrawMan  ( 550, 250 + t*2, 1, 1, 1, ((t/2)%2)*5);
        DrawGirl ( 600,       520, 1, 1);

        txSetFillColor (RGB (176, 224, 230));

        txSleep (100);
        t++;
        }
    }

void Finish ()
    {
    int t = 0;

    while (t <= 100)
        {
        txClear ();
        Scene_End ();

        DrawCar  (600 - t*8, 350,   1, 1, RGB(  0, 255,   0));
        DrawCar  (500 + t*9, 450,  -1, 1, RGB(  0,   0, 128));

        DrawMan  (550 + t*7, 500, 0.5, 1, ((t/2)%2)*35, 0, 1);
        DrawGirl (600 + t*7, 520, 0.5, 1, ((t/2)%2)*35, 0, 1);

        txSetFillColor (RGB (176, 224, 230));

        txSleep (100);
        t++;
        }
    txSleep (3000);
    }

void FinishTitles ()
    {
    int t = 0;

    while (t <= 85)
        {
        txClear ();
        Scene_End ();
        txSetTextAlign (TA_CENTER);

        txSetColor     (TX_WHITE);
        txSelectFont   ("Comic Sans MS", 40);
        txTextOut      (1300 - t * 4, 550, "Усова Ольга Викторовна");

        txSetColor     (TX_WHITE);
        txSelectFont   ("Comic Sans MS", 40);
        txTextOut      (1300 - t * 4, 590, "учитель информатики");

        txSetColor     (TX_WHITE);
        txSelectFont   ("Comic Sans MS", 40);
        txTextOut      (1300 - t * 4, 630, "МАОУ ООШ №4 г. Соликамск");

        txSetFillColor (RGB (176, 224, 230));

        txSleep (100);
        t++;
        }

    txSleep (3000);
    }

//--------------------------------------------------------

void DrawBand_Polosa (int x, int y, double sizeX, double sizeY)
    {
    txSetColor     (RGB (  0,   0,   0));
    txSetFillColor (RGB (255, 255, 255));
    txRectangle    (x, y, x + 70*sizeX , y + 10*sizeY);
    }

void DrawRoad ()
    {
    txSetColor     (RGB (  0,   0,  0));
    txSetFillColor (RGB (105, 105, 105));
    txRectangle    (0, 350, 1200, 550);

    for (int x = 0;    x <= 1200; x += 100)
        {
        DrawBand_Polosa (x  , 440,   1, 1);
        }

    for (int y = 350;  y <  550; y += 45)
        {
        DrawBand_Polosa (500, y  , 1.5, 2);
        }
    }

void DrawCloud_Oblako (int x, int y, double sizeX, double sizeY, COLORREF bodyColor)
    {
    txSetColor     (bodyColor);
    txSetFillColor (bodyColor);
    txEllipse      (x,            y,             x +  90*sizeX, y +  55*sizeY);
    txEllipse      (x + 40*sizeX, y +  10*sizeY, x + 145*sizeX, y +  75*sizeY);
    txEllipse      (x - 20*sizeX, y +  30*sizeY, x +  80*sizeX, y +  80*sizeY);
    }

void DrawSun (int x, int y, double sizeX, double sizeY, COLORREF bodyColor, int smail, double surprise, double lengthray, int brow)
    {
    txSetColor     (bodyColor, 3);
    txSetFillColor (bodyColor);

    txCircle       (x,            y,            45 * sizeX);
    txLine         (x - 45*sizeX, y           , x - 95*lengthray*sizeX,  y                     );
    txLine         (x,            y + 45*sizeY, x,                       y + 95*lengthray*sizeY);
    txLine         (x - 25*sizeX, y + 25*sizeY, x - 75*lengthray*sizeX,  y + 75*lengthray*sizeY);
    txLine         (x - 25*sizeX, y - 25*sizeY, x - 50*lengthray*sizeX,  y - 50*lengthray*sizeY);
    txLine         (x + 25*sizeX, y + 25*sizeY, x + 50*lengthray*sizeX,  y + 50*lengthray*sizeY);

    txSetColor     (TX_WHITE);
    txSetFillColor (TX_WHITE);
    txCircle       (x - 15*sizeX, y - 12*sizeY, (10 - surprise)*sizeX);
    txSetFillColor (TX_BLACK);
    txCircle       (x - 15*sizeX, y - 12*sizeY, 3 * sizeX);

    txSetFillColor (TX_WHITE);
    txCircle       (x + 15*sizeX, y - 12*sizeY, (10 + surprise)*sizeX);
    txSetFillColor (TX_BLACK);
    txCircle       (x + 15*sizeX, y - 12*sizeY, 3 * sizeX);

    txSetColor     (RGB (220, 20, 60), 3);
    txLine         (x - 10*sizeX, y + (20 + smail)*sizeY, x, y + (30 - smail)*sizeY);
    txLine         (x + 10*sizeX, y + (20 + smail)*sizeY, x, y + (30 - smail)*sizeY);

    txSetColor     (RGB (139, 69, 19), 2);
    txLine         (x - 25*sizeX, y - 30*sizeY, x - 5*sizeX, y - (30 + brow)*sizeY);
    txLine         (x + 25*sizeX, y - 30*sizeY, x + 5*sizeX, y - (30 + brow)*sizeY);
    }

void DrawTree ( int x, int y, double sizeX, double sizeY, COLORREF bodyColor, COLORREF trunkColor)
    {
    txSetColor     (trunkColor);
    txSetFillColor (trunkColor);
    txRectangle    (x, y, x + 20*sizeX, y + 50*sizeY);

    txSetColor     (bodyColor);
    txSetFillColor (bodyColor);

    txCircle       (x - 10*sizeX, y - 10*sizeY, 25 * sizeX);
    txCircle       (x - 10*sizeX, y - 40*sizeY, 25 * sizeX);
    txCircle       (x + 25*sizeX, y - 25*sizeY, 35 * sizeX);
    txCircle       (x + 48*sizeX, y - 52*sizeY, 10 * sizeX);
    }

void DrawBush (int x, int y, double sizeX, double sizeY, COLORREF bodyColor)
    {
    txSetColor     (bodyColor);
    txSetFillColor (bodyColor);
    txPie          (x,             y,            x +  50*sizeX, y + 50*sizeY, 0, 180);
    txPie          (x +  35*sizeX, y - 15*sizeY, x +  90*sizeX, y + 65*sizeY, 0, 180);
    txPie          (x +  80*sizeX, y - 15*sizeY, x + 135*sizeX, y + 65*sizeY, 0, 180);
    txPie          (x + 125*sizeX, y,            x + 175*sizeX, y + 50*sizeY, 0, 180);
    }

void DrawForest ()
    {
    txSetColor     (RGB (50, 205, 50));
    txSetFillColor (RGB (50, 205, 50));
    txRectangle    (0, 200, 1200, 700);

    DrawTree ( 100, 150,    1,   1);
    DrawTree ( 500, 200, -1.2, 1.2);
    DrawTree ( 800, 150,    1,   1);
    DrawTree (1000, 250, -1.5, 1.5);

    DrawBush ( 600, 620,    1,   1);
    DrawBush ( 250, 250,  0.5, 0.5);
    DrawBush ( 700, 300,  0.7, 0.7);
    DrawBush (1100, 200,  0.5, 0.5);
    DrawBush ( 150, 650,    1,   1);
    }

void DrawSignal(int x, int y, COLORREF phanarUpColor, COLORREF phanarcenterColor, COLORREF phanarDownColor)
    {
    txSetColor     (RGB (  0,   0,   0));
    txSetFillColor (RGB (128, 128, 128));

    txRectangle    (x,      y, x + 20, y +  80);
    txRectangle    (x - 10, y, x + 30, y - 120);

    txSetFillColor (phanarDownColor);
    txCircle       (x + 10, y - 20, 15);
    txSetFillColor (phanarcenterColor);
    txCircle       (x + 10, y - 60, 15);
    txSetFillColor (phanarUpColor);
    txCircle       (x + 10, y - 100, 15);
    }

void DrawMan (int x, int y, double sizeX, double sizeY, int legsDistanceX, int legsDistanceY, int locationHand, int rHandUp, int lHandUp, int HandRDistance, int HandLDistance, COLORREF bodyColor)
    {
    txSetColor     (RGB (0, 0, 0), 3);
    txSetFillColor (bodyColor);

    txLine         (x + (20*sizeX - 5*locationHand), y,            x + (40 + legsDistanceX + HandLDistance)*sizeX - 15*locationHand, y + (30 - lHandUp)*sizeY);
    txRectangle    (x,                               y,            x +  20*sizeX,                                                    y + 50*sizeY);
    txLine         (x +   5*locationHand,            y,            x - (20 + legsDistanceX + HandRDistance)*sizeX +  5*locationHand, y + (30 - rHandUp)*sizeY);

    txLine         (x +   5*sizeX,                   y + 50*sizeY, x + ( 5 - legsDistanceX)*sizeX,                                   y + (80 + legsDistanceY) *sizeY);
    txLine         (x +  15*sizeX,                   y + 50*sizeY, x + (15 + legsDistanceX)*sizeX,                                   y + (80 - legsDistanceY)*sizeY);

    txSetFillColor (RGB (255, 228, 196));
    txCircle       (x + 10*sizeX, y - 15*sizeY, 15);
    }

void DrawGirl(int x, int y, double sizeX, double sizeY, int legsDistanceX, int legsDistanceY, int locationHand, int rHandUp, int lHandUp, int HandRDistance, int HandLDistance, COLORREF bodyColor)
    {
    txSetColor     (RGB (0, 0, 0), 3);
    txSetFillColor (bodyColor);

    txLine (x + (5*sizeX - 5*locationHand), y,            x + (35 + legsDistanceX + HandLDistance)*sizeX - 15*locationHand, y + (30 - lHandUp)*sizeY);

    POINT body[4] = {{ROUND (x - 5*sizeX), y}, {ROUND (x + 5*sizeX), y},
                    {ROUND (x + 25*sizeX), ROUND (y + 50*sizeY)}, {ROUND (x - 25*sizeX), ROUND (y + 50*sizeY)}};
    txPolygon (body, 4);

    txSetFillColor (RGB (255, 182, 193));
    POINT bow[5] = {{x, ROUND (y - 30*sizeY)}, {ROUND (x + 15*sizeX), ROUND (y - 25*sizeY)},
                    {ROUND (x + 15*sizeX), ROUND (y - 40*sizeY)}, {ROUND (x - 15*sizeX), ROUND (y - 25*sizeY)},
                    {ROUND (x - 15*sizeX), ROUND (y - 40*sizeY)}};
    txPolygon (bow, 5);

    txLine (x - 5 + locationHand,           y,            x - (35 + legsDistanceX + HandRDistance)*sizeX +  5*locationHand, y + (30 - rHandUp)*sizeY);

    txLine (x - 5*sizeX,                    y + 50*sizeY, x - (5 + legsDistanceX)*sizeX,                                    y + (80 + legsDistanceY) *sizeY);
    txLine (x + 5*sizeX,                    y + 50*sizeY, x + (5 + legsDistanceX)*sizeX,                                    y + (80 - legsDistanceY)*sizeY);

    txSetFillColor (RGB (255, 228, 196));
    txCircle       (x, y - 15*sizeY, 15);
    }

void DrawCar (int x, int y, double sizeX, double sizeY, COLORREF carColor)
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
    txCircle       (x +  40*sizeX, y + 40*sizeY, 20);
    txSetFillColor (RGB (255, 255, 255));
    txCircle       (x +  40*sizeX, y + 40*sizeY, 10);

    txSetFillColor (RGB (  0,   0,   0));
    txCircle       (x + 170*sizeX, y + 40*sizeY, 20);
    txSetFillColor (RGB (255, 255, 255));
    txCircle       (x + 170*sizeX, y + 40*sizeY, 10);
    }

void DrawPhrase ()
    {
    txSetColor     (RGB (255, 255, 255));
    txSetFillColor (RGB (255, 255, 255));

    txCircle       (650, 280,  45);
    txSetFillColor (RGB (255, 255, 255));
    POINT corner[3] = {{650, 315}, {680,345},{680, 290}};
    txPolygon (corner, 3);

    txSetColor     (RGB (  0,   0,   0), 2);
    txSetFillColor (RGB (255,   0,   0));
    txCircle       (630, 280,  10);

    txLine         (615, 265, 645, 295);
    txLine         (645, 265, 615, 295);

    txSetFillColor (RGB (  0, 250,   0));
    txCircle       (670, 280,  10);
    }
