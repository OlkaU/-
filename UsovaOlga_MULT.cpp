//{===========================================================================
//!
//!  ���������� "������ ��������� ��������"
//!
//!  ������ �������� ������ �� ���
//!
//!  2021
//!
//! (C) ����� ����� ����������
//}===========================================================================

#include "TXlib.h"
#include "HeroesLibSDK\Heroeslib.h"

void DrawBand_Polosa   (int x, int y, double sizeX, double sizeY);

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

 //{background_Scene-------------------------------------------------------

void Scene_Nach ()
    {
    DrawForest ();
    DrawRoad ();
    DrawSignal (605, 250, 1, 1, RGB (128, 128, 128), RGB (250, 0, 0));
    }

void SceneRed_Cener ()
    {
    DrawForest ();
    DrawRoad ();
    DrawSignal (605, 250, 1, 1, RGB (128, 128, 128), RGB (250, 0, 0));
    }

void SceneRed_Sun_Cener ()
    {
    DrawForest ();
    DrawRoad ();
    DrawSignal ( 605, 250, 1, 1, RGB (128, 128, 128), RGB (250, 0, 0));
    DrawSun    (1150,  50, 1, 1, RGB (255, 255,   0), 5, 0, 1, 5);
    }

void SceneYellow_Cener ()
    {
    DrawForest ();
    DrawRoad ();
    DrawSignal ( 605, 250, 1, 1, RGB (128, 128, 128), RGB (128, 128, 128), RGB (255, 255, 0));
    DrawSun    (1150,  50, 1, 1, RGB (255, 255,   0), 5, 0, 1, 5);
    }

void SceneGreen_Cener ()
    {
    DrawForest ();
    DrawRoad ();
    DrawSignal ( 605, 250, 1, 1, RGB (128, 128, 128), RGB (128, 128, 128), RGB (128, 128, 128), RGB (0, 250, 0));
    DrawSun    (1150,  50, 1, 1, RGB (255, 255,   0), 1, 0, 1, 1);
    }

void Scene_End ()
    {
    DrawForest ();
    DrawRoad ();
    DrawSignal ( 605, 250, 1, 1, RGB (128, 128, 128), RGB (250, 0, 0));
    DrawSun    (1150,  50, 1, 1, RGB (255, 255,   0), 1, 0, 1, 1);
    }

//}--------------------------------------------------------

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

        txTextOut      (-100 + t * 15, 210, "������");

        txTextOut      (-100 + t * 15, 310, "���������");

        txTextOut      (-100 + t * 15, 410, "��������");

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

        DrawCar  (1100 - t*15, 350,  1, 1, RGB(255, 140,   0), ((t/7)%2)*3);
        DrawCar  (   0 + t*15, 450, -1, 1, RGB(  0,   0, 128), ((t/7)%2)*3);

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

        DrawCar  (1800 - t*12, 350,  1, 1, RGB( 75,   0, 130), ((t/7)%2)*3);
        DrawCar  (   0 + t*15, 450, -1, 1, RGB(255, 215,   0), ((t/7)%2)*3);

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
    txPlaySound ("Sounds/sound.wav");

    while (t <= 80)
        {
        txClear ();
        SceneRed_Sun_Cener ();

        DrawCar (600,      350,  1, 1, RGB( 75,  0, 130));
        DrawCar (0 + t*15, 450, -1, 1, RGB(255, 69,   0), ((t/7)%2)*3);

        DrawMan  (550, 300, 1, 1);
        DrawGirl (600, 520, 1, 1);

        DrawPhrase ();

        txSetFillColor (RGB (176, 224, 230));

        txSleep (50);
        t++;

        }

    txPlaySound (NULL);
    }

void Stepback ()
    {
    int t = 0;

    while (t <= 100)
        {
        txClear ();
        SceneRed_Sun_Cener ();

        DrawMan  (550, 300 - ROUND(t * 0.5), 1, 1, 1, ((t/2)%2)*5);

        DrawCar  (600 - t * 12, 350,  1, 1, RGB( 75,   0, 130), ((t/7)%2)*3);
        DrawCar  (  0 + t * 15, 450, -1, 1, RGB(240, 128, 128), ((t/7)%2)*3);

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

        DrawCar  (1200 - t*6, 350,  1, 1, RGB(0, 255,   0), ((t/7)%2)*3);
        DrawCar  (   0 + t*5, 450, -1, 1, RGB(0,   0, 128), ((t/7)%2)*3);

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

        DrawCar  (600 - t*8, 350,   1, 1, RGB(  0, 255,   0), ((t/7)%2)*3);
        DrawCar  (500 + t*9, 450,  -1, 1, RGB(  0,   0, 128), ((t/7)%2)*3);

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

        txTextOut      (1300 - t * 4, 550, "����� ����� ����������");

        txTextOut      (1300 - t * 4, 590, "������� �����������");

        txTextOut      (1300 - t * 4, 630, "���� ��� �4, �������� ����");

        txSetFillColor (RGB (176, 224, 230));

        txSleep (100);
        t++;
        }

    txSleep (3000);
    }

//{--------------------------------------------------------

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

    txLine (615, 265, 645, 295);
    txLine (645, 265, 615, 295);

    txSetFillColor (RGB (  0, 250,   0));
    txCircle       (670, 280,  10);
    }

//}----------------------------------------------------------------------------

