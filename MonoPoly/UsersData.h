#ifndef USERSDATA_H
#define USERSDATA_H
#include "cards.h"
#include "ui_board.h"
#include <QMainWindow>
#include "QWidget"
#include <QPixmap>
#include "showCards.h"
#include <ctime>
#include <cstdlib>
#include "iostream"
class UsersData
{
public:


    void setFirstData(int turn[8][2],int money[8],int count);




private:
    int countOfPlayer;
    int MoneyOfEveryPlayer[8];
    int NobatOfEveryPlayer[8][2];



};

#endif // USERSDATA_H
