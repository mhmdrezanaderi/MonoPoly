#ifndef BOARD_H
#define BOARD_H
#include "cards.h"
#include "ui_board.h"
#include <QMainWindow>
#include "QWidget"
#include <QPixmap>
#include "showCards.h"
#include <ctime>
#include <cstdlib>
#include "iostream"
#include "UsersData.h"
#include "movement.h"
#include "chanceCommunity.h"
using namespace std ;
QT_BEGIN_NAMESPACE
namespace Ui { class board; }
QT_END_NAMESPACE

class board : public QMainWindow ,public movement
{
    Q_OBJECT

public:
   explicit board(QWidget *parent = nullptr);
    chanceCards a;
    showCards red[3];
    showCards yellow[3];
    showCards green[3];
    showCards blue[2];
    showCards purple[2];
    showCards lightBlue[3];
    showCards lightPurple[3];
    showCards orange[3];
    void resultTas();
    int result;
    int turnU[8][2];
    int money[8];
    int tas[8];
     UsersData *allUserData;
    QString nameOfPlayerss[8];
    int countOfPlayers;
    void playerCount(QString names[8], int count);
    void setPlayerInfoVal();
    void showPlayeInMap(int number);
    void nobatPlayer(int number);
    void checkTas(int player);
    int nobatNahayi=0;

    chanceCommunity chance;
    chanceCommunity commi;

private slots:

    void on_pushButton_red1_clicked();
    void on_pushButton_red2_clicked();
    void on_pushButton_red3_clicked();
    void on_pushButton_yellow1_clicked();
    void on_pushButton_yellow2_clicked();
    void on_pushButton_yellow3_clicked();
    void on_pushButton_green1_clicked();
    void on_pushButton_green2_clicked();
    void on_pushButton_green3_clicked();
    void on_pushButton_blue1_clicked();
    void on_pushButton_blue2_clicked();
    void on_pushButton_purple1_clicked();
    void on_pushButton_purple2_clicked();
    void on_pushButton_lightBlue1_clicked();
    void on_pushButton_lightBlue2_clicked();
    void on_pushButton_lightBlue3_clicked();
    void on_pushButton_lightPurple1_clicked();
    void on_pushButton_lightPurple2_clicked();
    void on_pushButton_lightPurple3_clicked();
    void on_pushButton_orange1_clicked();
    void on_pushButton_orange2_clicked();
    void on_pushButton_orange3_clicked();
    void on_pushButton_run_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_chance1_clicked();

    void on_pushButton_chance2_clicked();

    void on_pushButton_chance3_clicked();

//    void on_pushButton_community2_clicked();

//    void on_pushButton_community1_clicked();

//    void on_pushButton_community3_clicked();

private:
    Ui::board *ui;
};

#endif // BOARD_H
