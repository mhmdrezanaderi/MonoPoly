#ifndef USERSDATA_H
#define USERSDATA_H
#include <QMainWindow>
#include "QWidget"
#include <QPixmap>
#include <ctime>
#include <cstdlib>
#include "iostream"
class UsersData
{
public:


    void setFirstData(int turn[8][2],int money[8],int count);
    void setNameOfPlayer(QString names[8],int count);

    int NobatOfEveryPlayer[8][2];

private:
    int countOfPlayer;
    int MoneyOfEveryPlayer[8];

    QString nameOfEveryPlayers[8];


};

#endif // USERSDATA_H
