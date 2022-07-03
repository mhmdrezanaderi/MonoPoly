#include "board.h"
#include "UsersData.h"
#include <QApplication>
#include <QMainWindow>
#include "ui_board.h"
#include "cards.h"
#include <QPixmap>
#include "QDebug"
#include "showCards.h"
#include "iostream"




void UsersData::setFirstData(int turn[8][2],int money[8],int count)
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
