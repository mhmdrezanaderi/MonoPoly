
#include <QMainWindow>
#include "QWidget"
#include <QPixmap>
#include <ctime>
#include <cstdlib>
#include "iostream"
#include "movement.h"
// void movement::movementPlayer(int nobatPlayer)
// {

//    switch(nobatPlayer)
//    {
//        case 0:

//           break;
//        case 1:
//           break;
//        case 2:
//           break;
//        case 3:
//           break;
//        case 4:
//           break;
//        case 5:
//           break;
//        case 6:
//           break;
//        case 7:
//           break;






//    }









// }


 void movement::setMapLocation()
  {

      //down

       location[0][0]= 1252;
       location[1][0]= 1086;
       location[2][0]= 920;
       location[3][0]= 750;
       location[4][0]= 585;
       location[5][0]= 500;
       location[6][0]= 380;
       location[7][0]= 215;
       location[8][0]= 15;
       for(int i=0; i<9;i++)
       {
         location[i][1]= 765;//Y
       }

       //END down


       //left
       location[9][1]= 670;
       location[10][1]= 580;
       location[11][1]= 490;
       location[12][1]= 404;
       location[13][1]= 315;
       location[14][1]= 224;
       location[15][1]= 133;
       location[16][1]= 3;
       for(int i=9; i<17;i++)
       {
         location[i][0]= 15;//X
       }
       //END left


       //up
       location[17][0]= 213;
       location[18][0]= 380;
       location[19][0]= 470;
       location[20][0]= 638;
       location[21][0]= 749;
       location[22][0]= 917;
       location[23][0]= 1084;
       location[24][0]= 1252;
       for(int i=17; i<25;i++)
       {
         location[i][1]= 3; //Y
       }
       //END up



       //right
       location[25][1]= 137;
       location[26][1]= 225;
       location[27][1]= 314;
       location[28][1]= 402;
       location[29][1]= 491;
       location[30][1]= 580;
       location[31][1]= 668;
       for(int i=25; i<32;i++)
       {
         location[i][0]= 1252; //X
       }
       //END right


  }
