//========================================================================
//! @file       Main.cpp
//{=======================================================================
//!
//! @brief      <Заголовок>\n
//! @brief      <Подзаголовок>
//!
//! @version    [Version 0.01 alpha, build 1]
//! @author     Copyright (C) <Автор>, <Год> (<Имя> <Почта>)
//! @date       <Дата>
//!
//! @par        Протестировано
//!           - (TODO: список платформ)
//!
//! @todo     - (TODO: список ближайших планов по этому файлу)
//!
//! @bug      - (TODO: список найденных ошибок в этом файле)
//!
//! @par        История изменений файла
//!           - Версия 0.01 Alpha
//!             - Только что созданный файл
//!
//}=======================================================================

#include "TXLib.h"
 //область создания функций
void Man(int x, int y, int xLegs)
{
    txSetColor(TX_BLACK, 5);
    txSetFillColor(TX_BLACK);
  //legs
  txSetColor(TX_BLUE,5);
  //655-657
  //r
  txLine(x,y+400-291,x+615-657+xLegs,y+485-291);
  //l
  txLine(x,y+400-291,x+685-657-xLegs,y+485-291);


  // telo
  txSetColor(TX_GREEN,5);
  txLine(x+655-657,y+400-291,x+655-657,y+315-291);
  // hands
  // left hand
  txLine(x+655-657,y+315-291,x+630-657,y+350-291);
  txLine(x+630-657,y+350-291,x+630-657, y+385-291);
  //right hand

  txLine(x+655-657,y+315-291,x+685-657,y+350-291);
  txLine(x+685-657,y+350-291,x+685-657,y+385-291);
  //head
  //x=657, y=256
  txSetColor(RGB(239,228,176),5);
    txSetFillColor(RGB(239,228,176));
  txCircle(x+657-657,y+291-291,25);
  }


 void fon()
 {// Фон

    txLine(200, 450, 0, 450);
    txLine(560, 450, 800, 450);}

 void drawSky(COLORREF color)
 //RGB (31, 196, 224)
 {txSetColor(color);
 txSetFillColor(color);
    txRectangle(0, 0, 800, 600);

 }

 void drawSun(int x, int y)
 {txSetColor(RGB (255,255,0));
    txSetFillColor(RGB (255,255,0));
    txCircle  ( x, y,60 );}
    // 700, 102

void drawLand()
    {     txSetFillColor(RGB (85, 205, 50));
    txRectangle(0, 450, 800, 600);
    txSetColor(TX_YELLOW);
    }

    void tree()
    {
        //дерево
    txSetColor(RGB(185,122,87));
    txSetFillColor(RGB(185,122,87));
    txRectangle(115,410,145,450);
    txSetColor(RGB(64,151,60));
    txSetFillColor(RGB(64,151,60));
   POINT star[3] = {{90, 410}, {170, 410}, {130,340}};
          txPolygon (star, 3);

    POINT tree [3] = {{100, 370}, {160, 370}, {130,300}};
    txPolygon (tree, 3);

    POINT tree1 [3] = {{108, 330}, {153, 330}, {130,275}};
    txPolygon (tree1, 3);}
    //void tree(int x, int y)
    //{
        //дерево
    //txSetColor(RGB(185,122,87));
    //txSetFillColor(RGB(185,122,87));
    //txRectangle(x+115-115,y+410-410,x+145-115,y+450-410);
    //txSetColor(RGB(64,151,60));
    //txSetFillColor(RGB(64,151,60));
   //POINT star[3] = {{x+90-115, y+410-410}, {x+170-115, y+410-410}, {x+130-115,y+340-410}};
         // txPolygon (star, 3);

   // POINT tree [3] = {{x+100-115, y+370-410}, {x+160-115, y+370-410}, {x+130-115,y+300-410}};
   // txPolygon (tree, 3);

   // POINT tree1 [3] = {{x+108-115, y+330-410}, {x+153-115, y+330-410}, {x+130-115,y+275-410}};
   // txPolygon (tree1, 3);}

    void drawHome()
    {//рисую дом
      //стена
     txSetColor(TX_BLACK);
    txLine(200, 280, 200,550);
    txLine(560, 280, 560, 550);
    txLine(560, 550, 200,550);
    txSetFillColor(RGB(0,128,255));
    txRectangle(200, 280, 560, 550);

    // Крыша

    txSetFillColor(TX_ORANGE);
    POINT star[3] = {{380, 30}, {180, 280}, {580, 280}};
    txPolygon (star, 3);
txSetColor(TX_BLACK);
    txLine(180, 280, 580, 280);
    txLine(380, 30, 580, 280);
    txLine(380, 30, 180, 280);



    //окно
    txSetFillColor(RGB (129,228,254));
    txRectangle(320,380, 450,480);

    txLine(320, 380, 450, 380);
    txLine(320, 380, 320, 480);
    txLine(450,380, 450, 480);
    txLine(450, 480, 320, 480);
    txLine(385, 380, 385, 480);
    txLine(320,430, 450, 430);
}
    void drawCloud(int x, int y)
    {
    //txEllipse (61, 57, 280, 141);
     //txEllipse (190,30, 340, 124);
     //txEllipse (220,78,190,150);
     //txEllipse (120,87, 280,175);
    txSetColor (TX_WHITE);
    txSetFillColor(TX_WHITE);
     txEllipse (x+61-61, y, x+280-61, 141);
     txEllipse (x+190-61,30, x+340-61, 124);
     txEllipse (x+220-61,78,x+190-61,150);
     txEllipse (x+120-61,87, x+280-61,175);
     }
 void drawMapa(int x, int y)
   {

    txSetColor(RGB(239,228,176));
    txSetFillColor(RGB(239,228,176));
    POINT mapa[4] = {{x+109-109, y+390-390},{x+138-109,y+420-390},{x+165-109,y+390-390},{x+138-109,y+364-390}};
    txPolygon (mapa, 4);
    txSetColor(RGB(236,14,26), 3);
    txLine (x+125-109,y+395-390, x+138-109, y+392-390);
    txLine (x+138-109,y+385-390,x+153-109,y+392-390);
    txLine (x+143-109,y+397-390,x+143-109,y+383-390);

    }





int main()
    {
    txCreateWindow (800, 600);

        int yMan = 291;
        int xMan = 657;
        int xLegs = 0;
        int xSun = -100;
        int ySun = 250;
        int xCloud = -20;
        int xMapa = 109;
        int yMapa = 390;





        while (yMan<375)
        {
            txBegin();
            drawSky(RGB (31, 196, 224));
            drawSun(xSun, ySun);
            drawCloud(xCloud, 70);
            drawLand();
            tree();
            fon();
            drawHome();
            Man(xMan,yMan,xLegs);
            txEnd();
            xMan = xMan - 2;
            yMan = yMan + 2;
            ySun = ySun - 1;
            xSun = xSun + 3;
            xLegs = xLegs + 3;

            xCloud = xCloud + 2;

            txSleep(10);
        }

        while (yMan<375)
        {
            txBegin();
            drawSky(RGB (31, 196, 224));
            drawSun(xSun, ySun);
            drawCloud(xCloud, 70);
            drawLand();
            tree();
            fon();
            drawHome();
            Man(xMan,yMan,xLegs);
            txEnd();
            xMan = xMan - 2;
            yMan = yMan + 2;
            ySun = ySun - 1;
            xSun = xSun + 3;
            xLegs = xLegs - 3;

            xCloud = xCloud + 2;

            txSleep(10);
        }


        while (xMan>100)
        {
            txBegin();
            drawSky(RGB (31, 196, 224));
            drawSun(xSun, ySun);
            drawCloud(xCloud, 70);
            drawLand();
            tree();
            fon();
            drawHome();
            Man(xMan,yMan,xLegs);
            txEnd();
            xMan = xMan - 5;
            ySun = ySun - 1;
            xSun = xSun + 2;
            xLegs = xLegs - 3;

            xCloud = xCloud + 2;
        }

        while (xMan>100)
        {txBegin();
        drawSky(RGB (31, 196, 224));
        drawSun(xSun, ySun);
        drawCloud(xCloud, 70);
        drawLand();
        tree();
        fon();
        drawHome();
        Man(xMan,yMan,xLegs);
        txEnd();
        xMan = xMan - 5;
        ySun = ySun - 1;
        xSun = xSun + 2;
        xLegs = xLegs + 3;

        xCloud = xCloud + 2;

        txSleep(10);
        }

        while (yMan >291)
        {
            txBegin();
            drawSky(RGB (31, 196, 224));
            drawSun(xSun, ySun);
            drawCloud(xCloud, 70);
            drawLand();
            tree();
            fon();
            drawHome();
            Man(xMan,yMan,xLegs);
            txEnd();
            yMan = yMan - 3;
            xSun = xSun + 3;
            xLegs = xLegs + 3;

            xCloud = xCloud + 2;

            txSleep(10);
        }
        while (yMan >291)
        {
            txBegin();
            drawSky(RGB (31, 196, 224));
            drawSun(xSun, ySun);
            drawCloud(xCloud, 70);
            drawLand();
            tree();
            fon();
            drawHome();
            Man(xMan,yMan,xLegs);
            txEnd();
            yMan = yMan - 3;
            xSun = xSun + 3;
            xLegs = xLegs - 3;

            xCloud = xCloud + 2;

            txSleep(10);
        }


        while (yMan <375)
        {
            txBegin();
            drawSky(RGB (31, 196, 224));
            drawSun(xSun, ySun);
            drawCloud(xCloud, 70);
            drawLand();
            tree();
            fon();
            drawHome();
            Man(xMan,yMan,xLegs);
            drawMapa(xMapa, yMapa);
            txEnd();
            yMan = yMan + 3;
            yMapa = yMapa + 3;
            xSun = xSun + 3;
            xLegs = xLegs - 3;


            xCloud = xCloud + 2;

            txSleep(10);
        }

        while (yMan <375)
        {
            txBegin();
            drawSky(RGB (31, 196, 224));
            drawSun(xSun, ySun);
            drawCloud(xCloud, 70);
            drawLand();
            tree();
            fon();
            drawHome();
            Man(xMan,yMan,xLegs);
            drawMapa(xMapa, yMapa);
            txEnd();
            yMan = yMan + 3;
            yMapa = yMapa + 3;
            xSun = xSun + 3;
            xLegs = xLegs + 3;


            xCloud = xCloud + 2;

            txSleep(10);
        }


        while (xMan <890)
        {txBegin();
        drawSky(RGB (31, 196, 224));
        drawSun(xSun, ySun);
        drawCloud(xCloud, 70);
        drawLand();
        tree();
        fon();
        drawHome();
        Man(xMan,yMan,xLegs);
        drawMapa(xMapa, yMapa);
        txEnd();
        xMan = xMan + 4;
        xMapa = xMapa + 4;
        xSun = xSun + 3;
        xCloud = xCloud + 2;
         xLegs = xLegs + 3;

        txSleep(10);
    }

  while (xMan <890)
        {txBegin();
        drawSky(RGB (31, 196, 224));
        drawSun(xSun, ySun);
        drawCloud(xCloud, 70);
        drawLand();
        tree();
        fon();
        drawHome();
        Man(xMan,yMan,xLegs);
        drawMapa(xMapa, yMapa);
        txEnd();
        xMan = xMan + 4;
        xMapa = xMapa + 4;
        xSun = xSun + 3;
        xCloud = xCloud + 2;
         xLegs = xLegs - 3;

        txSleep(10);
    }





while (xSun<900)

 {       txBegin();
        drawSky(RGB (31, 196, 224));
        drawSun(xSun, ySun);
        drawCloud(xCloud, 70);
        drawLand();
        tree();
        fon();
        drawHome();
        Man(xMan,yMan,xLegs);
        drawMapa(xMapa, yMapa);
        txEnd();
        xCloud = xCloud + 2;
        xSun = xSun + 3;

        txSleep(10);
        }



        while (xCloud<900)

 {       txBegin();
        drawSky(RGB (31, 196, 224));
        drawSun(xSun, ySun);
        drawCloud(xCloud, 70);
        drawLand();
        tree();
        fon();
        drawHome();
        Man(xMan,yMan,xLegs);
        drawMapa(xMapa, yMapa);
        txEnd();
        xCloud = xCloud + 2;
        txSleep(10);
        }

















    txTextCursor (false);
    return 0;
    }

