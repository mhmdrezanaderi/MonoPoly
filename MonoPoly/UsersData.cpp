#include "UsersData.h"
#include <QApplication>
#include <QMainWindow>
#include <QPixmap>
#include "QDebug"
#include "iostream"
#include "UsersData.h"



UsersData::UsersData()
{

}


 UsersData * UsersData::mm=nullptr;
 UsersData * UsersData::singleton(){
    if(mm==nullptr)
    {
        mm = new UsersData();
    }
      return mm;
}

int UsersData::newLocation[8][2]={{0}};
void UsersData::setFirstData(int turn[8][2],int money[8],int count )
{
    for(int i=0;i<2;i++){
        for(int j=0;j<count;j++){
            NobatOfEveryPlayer[j][i] = turn[j][i];
            qDebug()<<"nobat of player " <<  NobatOfEveryPlayer[j][i];
        }
    }

    for(int i=0;i<count;i++){
        MoneyOfEveryPlayer[i] = money[i];
        qDebug()<<"money " <<   MoneyOfEveryPlayer[i];
    }


    countOfPlayer=count;
    qDebug()<<"count " <<   countOfPlayer;

}


void UsersData::setNameOfPlayer(QString names[8],int count)
{


    for(int i=0;i<count;i++){
        nameOfEveryPlayers[i] = names[i];
        qDebug()<<"names " <<    nameOfEveryPlayers[i];
    }

}


void UsersData::updateLocation(int x , int y,int player)
{
    qDebug ()<< "player"<<player;

    whichPlayer = player;

    switch (player) {
        case 0:

            newLocation[0][0]=x;
            newLocation[0][1]=y;
            qDebug ()<< "newLocationyyy000" << newLocation[0][1];

         break;
        case 1:

            newLocation[1][0]=x;
            newLocation[1][1]=y;
            qDebug ()<< "newLocationyy111" << newLocation[1][1];
         break;
        case 2:
            newLocation[2][0]=x;
            newLocation[2][1]=y;
         break;
        case 3:
            newLocation[3][0]=x;
            newLocation[3][1]=y;
         break;
        case 4:
            newLocation[4][0]=x;
            newLocation[4][1]=y;
         break;
        case 5:
            newLocation[5][0]=x;
            newLocation[5][1]=y;
         break;
        case 6:
            newLocation[6][0]=x;
            newLocation[6][1]=y;
         break;
        case 7:
            newLocation[7][0]=x;
            newLocation[7][1]=y;
         break;
    }

}
