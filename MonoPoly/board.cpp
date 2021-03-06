#include "board.h"
#include <QApplication>
#include <QMainWindow>
#include "ui_board.h"
#include "cards.h"
#include <QPixmap>
#include "QDebug"
#include "showCards.h"
#include "iostream"
#include "UsersData.h"
#include "QMessageBox"
#include "movement.h"

using namespace std;
board::board(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::board)
{
    ui->setupUi(this);
    a.setval("abd",":/images/images/Advance_To_Boardwalk.webp");
    QPixmap p(a.address);

    setMapLocation(); // location of map

    ui->chanceCards->setPixmap(p.scaled(ui->chanceCards->width(),ui->chanceCards->height(),Qt::KeepAspectRatio));
    allUserData = UsersData::singleton();

    // title of every card in pushbutton
    ui->pushButton_red1->setText("Kentucky Avenue ($220)");
    ui->pushButton_red2->setText("Indiana Avenue ($220)");
    ui->pushButton_red3->setText("Illinois Avenue ($240)");
    ui->pushButton_yellow1->setText("Atlantic Avenue ($260)");
    ui->pushButton_yellow2->setText("Ventnor Avenue (260)");
    ui->pushButton_yellow3->setText("Marvin Gardens ($280)");
    ui->pushButton_green1->setText("Pacific Avenue ($300)");
    ui->pushButton_green2->setText("North Carolina Avenue ($300)");
    ui->pushButton_green3->setText("Pennsylvania Avenue ($320)");
    ui->pushButton_blue1->setText("Park Place ($350)");
    ui->pushButton_blue2->setText("Boardwalk ($400)");
    ui->pushButton_purple1->setText("Mediterranean Avenue ($60)");
    ui->pushButton_purple2->setText("Baltic Avenue ($60)");
    ui->pushButton_lightBlue1->setText("Oriental Avenue ($100)");
    ui->pushButton_lightBlue2->setText("Vermont Avenue ($100) ");
    ui->pushButton_lightBlue3->setText("Connecticut Avenue ($120) ");
    ui->pushButton_lightPurple1->setText("St. Charles Place ($140) ");
    ui->pushButton_lightPurple2->setText("States Avenue ($140) ");
    ui->pushButton_lightPurple3->setText("Virginia Avenue ($160) ");
    ui->pushButton_orange1->setText("St. James Place ($180) ");
    ui->pushButton_orange2->setText("Tennessee Avenue ($180) ");
    ui->pushButton_orange3->setText("New York Avenue ($200) ");


    // player info that show in right
    ui->groupBox_player1->hide();
    ui->groupBox_player2->hide();
    ui->groupBox_player3->hide();
    ui->groupBox_player4->hide();
    ui->groupBox_player5->hide();
    ui->groupBox_player6->hide();
    ui->groupBox_player7->hide();
    ui->groupBox_player8->hide();


    // mohre har player
    ui->label_player1->hide();
    ui->label_player2->hide();
    ui->label_player3->hide();
    ui->label_player4->hide();
    ui->label_player5->hide();
    ui->label_player6->hide();
    ui->label_player7->hide();
    ui->label_player8->hide();


    // tas baraye part II
    ui->pushButton_run->hide();


}


//user info
//set data like money name and nobat
void board::playerCount(QString names[8], int count)
{
    for (int i=0 ;i < count ;i++ ) {
        nameOfPlayerss[i] = names[i];
        money[i]=1500;
        turnU[i][0]=i;
    }
    countOfPlayers = count;

}


// show players (mohre)
void board::showPlayeInMap(int number)
{

    QPixmap player1(":/images/images/players/player1.png");
    QPixmap player2(":/images/images/players/player2.png");
    QPixmap player3(":/images/images/players/player3.png");
    QPixmap player4(":/images/images/players/player4.png");
    QPixmap player5(":/images/images/players/player5.png");
    QPixmap player6(":/images/images/players/player6.png");
    QPixmap player7(":/images/images/players/player7.png");
    QPixmap player8(":/images/images/players/player8.png");

    switch (number) {

     case 2:
        ui->label_player1->setPixmap(player1.scaled(ui->label_player1->width(),ui->label_player1->height(),Qt::KeepAspectRatio));
        ui->label_player2->setPixmap(player2.scaled(ui->label_player2->width(),ui->label_player2->height(),Qt::KeepAspectRatio));
        ui->label_player1->show();
        ui->label_player2->show();

        break;
    case 3:
        ui->label_player1->setPixmap(player1.scaled(ui->label_player1->width(),ui->label_player1->height(),Qt::KeepAspectRatio));
        ui->label_player2->setPixmap(player2.scaled(ui->label_player2->width(),ui->label_player2->height(),Qt::KeepAspectRatio));
        ui->label_player3->setPixmap(player3.scaled(ui->label_player3->width(),ui->label_player3->height(),Qt::KeepAspectRatio));
        ui->label_player1->show();
        ui->label_player2->show();
        ui->label_player3->show();

        break;
    case 4:
        ui->label_player1->setPixmap(player1.scaled(ui->label_player1->width(),ui->label_player1->height(),Qt::KeepAspectRatio));
        ui->label_player2->setPixmap(player2.scaled(ui->label_player2->width(),ui->label_player2->height(),Qt::KeepAspectRatio));
        ui->label_player3->setPixmap(player3.scaled(ui->label_player3->width(),ui->label_player3->height(),Qt::KeepAspectRatio));
        ui->label_player4->setPixmap(player4.scaled(ui->label_player4->width(),ui->label_player4->height(),Qt::KeepAspectRatio));
        ui->label_player1->show();
        ui->label_player2->show();
        ui->label_player3->show();
        ui->label_player4->show();

        break;
    case 5:
        ui->label_player1->setPixmap(player1.scaled(ui->label_player1->width(),ui->label_player1->height(),Qt::KeepAspectRatio));
        ui->label_player2->setPixmap(player2.scaled(ui->label_player2->width(),ui->label_player2->height(),Qt::KeepAspectRatio));
        ui->label_player3->setPixmap(player3.scaled(ui->label_player3->width(),ui->label_player3->height(),Qt::KeepAspectRatio));
        ui->label_player4->setPixmap(player4.scaled(ui->label_player4->width(),ui->label_player4->height(),Qt::KeepAspectRatio));
        ui->label_player5->setPixmap(player5.scaled(ui->label_player5->width(),ui->label_player5->height(),Qt::KeepAspectRatio));
        ui->label_player1->show();
        ui->label_player2->show();
        ui->label_player3->show();
        ui->label_player4->show();
        ui->label_player5->show();

        break;
    case 6:
        ui->label_player1->setPixmap(player1.scaled(ui->label_player1->width(),ui->label_player1->height(),Qt::KeepAspectRatio));
        ui->label_player2->setPixmap(player2.scaled(ui->label_player2->width(),ui->label_player2->height(),Qt::KeepAspectRatio));
        ui->label_player3->setPixmap(player3.scaled(ui->label_player3->width(),ui->label_player3->height(),Qt::KeepAspectRatio));
        ui->label_player4->setPixmap(player4.scaled(ui->label_player4->width(),ui->label_player4->height(),Qt::KeepAspectRatio));
        ui->label_player5->setPixmap(player5.scaled(ui->label_player5->width(),ui->label_player5->height(),Qt::KeepAspectRatio));
        ui->label_player6->setPixmap(player6.scaled(ui->label_player6->width(),ui->label_player6->height(),Qt::KeepAspectRatio));
        ui->label_player1->show();
        ui->label_player2->show();
        ui->label_player3->show();
        ui->label_player4->show();
        ui->label_player5->show();
        ui->label_player6->show();

        break;

    case 7:
        ui->label_player1->setPixmap(player1.scaled(ui->label_player1->width(),ui->label_player1->height(),Qt::KeepAspectRatio));
        ui->label_player2->setPixmap(player2.scaled(ui->label_player2->width(),ui->label_player2->height(),Qt::KeepAspectRatio));
        ui->label_player3->setPixmap(player3.scaled(ui->label_player3->width(),ui->label_player3->height(),Qt::KeepAspectRatio));
        ui->label_player4->setPixmap(player4.scaled(ui->label_player4->width(),ui->label_player4->height(),Qt::KeepAspectRatio));
        ui->label_player5->setPixmap(player5.scaled(ui->label_player5->width(),ui->label_player5->height(),Qt::KeepAspectRatio));
        ui->label_player6->setPixmap(player6.scaled(ui->label_player6->width(),ui->label_player6->height(),Qt::KeepAspectRatio));
        ui->label_player7->setPixmap(player7.scaled(ui->label_player7->width(),ui->label_player7->height(),Qt::KeepAspectRatio));
        ui->label_player1->show();
        ui->label_player2->show();
        ui->label_player3->show();
        ui->label_player4->show();
        ui->label_player5->show();
        ui->label_player6->show();
        ui->label_player7->show();

        break;
    case 8:
        ui->label_player1->setPixmap(player1.scaled(ui->label_player1->width(),ui->label_player1->height(),Qt::KeepAspectRatio));
        ui->label_player2->setPixmap(player2.scaled(ui->label_player2->width(),ui->label_player2->height(),Qt::KeepAspectRatio));
        ui->label_player3->setPixmap(player3.scaled(ui->label_player3->width(),ui->label_player3->height(),Qt::KeepAspectRatio));
        ui->label_player4->setPixmap(player4.scaled(ui->label_player4->width(),ui->label_player4->height(),Qt::KeepAspectRatio));
        ui->label_player5->setPixmap(player5.scaled(ui->label_player5->width(),ui->label_player5->height(),Qt::KeepAspectRatio));
        ui->label_player6->setPixmap(player6.scaled(ui->label_player6->width(),ui->label_player6->height(),Qt::KeepAspectRatio));
        ui->label_player7->setPixmap(player7.scaled(ui->label_player7->width(),ui->label_player7->height(),Qt::KeepAspectRatio));
        ui->label_player8->setPixmap(player8.scaled(ui->label_player8->width(),ui->label_player8->height(),Qt::KeepAspectRatio));
        ui->label_player1->show();
        ui->label_player2->show();
        ui->label_player3->show();
        ui->label_player4->show();
        ui->label_player5->show();
        ui->label_player6->show();
        ui->label_player7->show();
        ui->label_player8->show();
        break;

    default :
        QMessageBox::information(this,"Wrong","Wrong Number of players" );
        break;
    }




}


// set value of every players in right location
void board::setPlayerInfoVal()
{

    switch(countOfPlayers)
    {
        case 2:
          ui->groupBox_player1->show();
          ui->groupBox_player2->show();
          ui->groupBox_player1->setTitle(nameOfPlayerss[0]);
          ui->groupBox_player2->setTitle(nameOfPlayerss[1]);

          ui->label_money_player1->setText(QString::number(money[0]));
          ui->label_money_player2->setText(QString::number(money[1]));
          ui->label_status_player1->setText("ok");
          ui->label_status_player2->setText("ok");
          showPlayeInMap(2);
            break;
        case 3:
        ui->groupBox_player1->show();
        ui->groupBox_player2->show();
        ui->groupBox_player3->show();


        ui->groupBox_player1->setTitle(nameOfPlayerss[0]);
        ui->groupBox_player2->setTitle(nameOfPlayerss[1]);
        ui->groupBox_player3->setTitle(nameOfPlayerss[2]);

        ui->label_money_player1->setText(QString::number(money[0]));
        ui->label_money_player2->setText(QString::number(money[1]));
        ui->label_money_player3->setText(QString::number(money[2]));

        ui->label_status_player1->setText("ok");
        ui->label_status_player2->setText("ok");
        ui->label_status_player3->setText("ok");

             showPlayeInMap(3);
            break;
        case 4:
        ui->groupBox_player1->show();
        ui->groupBox_player2->show();
        ui->groupBox_player3->show();
        ui->groupBox_player4->show();

        ui->groupBox_player1->setTitle(nameOfPlayerss[0]);
        ui->groupBox_player2->setTitle(nameOfPlayerss[1]);
        ui->groupBox_player3->setTitle(nameOfPlayerss[2]);
        ui->groupBox_player4->setTitle(nameOfPlayerss[3]);


        ui->label_money_player1->setText(QString::number(money[0]));
        ui->label_money_player2->setText(QString::number(money[1]));
        ui->label_money_player3->setText(QString::number(money[2]));
        ui->label_money_player4->setText(QString::number(money[3]));

        ui->label_status_player1->setText("ok");
        ui->label_status_player2->setText("ok");
        ui->label_status_player3->setText("ok");
        ui->label_status_player4->setText("ok");

        showPlayeInMap(4);
            break;
        case 5:
        ui->groupBox_player1->show();
        ui->groupBox_player2->show();
        ui->groupBox_player3->show();
        ui->groupBox_player4->show();
        ui->groupBox_player5->show();

        ui->label_money_player1->setText(QString::number(money[0]));
        ui->label_money_player2->setText(QString::number(money[1]));
        ui->label_money_player3->setText(QString::number(money[2]));
        ui->label_money_player4->setText(QString::number(money[3]));
        ui->label_money_player5->setText(QString::number(money[4]));

        ui->groupBox_player1->setTitle(nameOfPlayerss[0]);
        ui->groupBox_player2->setTitle(nameOfPlayerss[1]);
        ui->groupBox_player3->setTitle(nameOfPlayerss[2]);
        ui->groupBox_player4->setTitle(nameOfPlayerss[3]);
        ui->groupBox_player5->setTitle(nameOfPlayerss[4]);

        ui->label_status_player1->setText("ok");
        ui->label_status_player2->setText("ok");
        ui->label_status_player3->setText("ok");
        ui->label_status_player4->setText("ok");
        ui->label_status_player5->setText("ok");

        showPlayeInMap(5);
            break;
        case 6:
        ui->groupBox_player1->show();
        ui->groupBox_player2->show();
        ui->groupBox_player3->show();
        ui->groupBox_player4->show();
        ui->groupBox_player5->show();
        ui->groupBox_player6->show();
        ui->label_money_player1->setText(QString::number(money[0]));
        ui->label_money_player2->setText(QString::number(money[1]));
        ui->label_money_player3->setText(QString::number(money[2]));
        ui->label_money_player4->setText(QString::number(money[3]));
        ui->label_money_player5->setText(QString::number(money[4]));
        ui->label_money_player6->setText(QString::number(money[5]));
        ui->groupBox_player1->setTitle(nameOfPlayerss[0]);
        ui->groupBox_player2->setTitle(nameOfPlayerss[1]);
        ui->groupBox_player3->setTitle(nameOfPlayerss[2]);
        ui->groupBox_player4->setTitle(nameOfPlayerss[3]);
        ui->groupBox_player5->setTitle(nameOfPlayerss[4]);
        ui->groupBox_player6->setTitle(nameOfPlayerss[5]);
        ui->label_status_player1->setText("ok");
        ui->label_status_player2->setText("ok");
        ui->label_status_player3->setText("ok");
        ui->label_status_player4->setText("ok");
        ui->label_status_player5->setText("ok");
        ui->label_status_player6->setText("ok");
        showPlayeInMap(6);
            break;
        case 7:
        ui->groupBox_player1->show();
        ui->groupBox_player2->show();
        ui->groupBox_player3->show();
        ui->groupBox_player4->show();
        ui->groupBox_player5->show();
        ui->groupBox_player6->show();
        ui->groupBox_player7->show();
        ui->label_money_player1->setText(QString::number(money[0]));
        ui->label_money_player2->setText(QString::number(money[1]));
        ui->label_money_player3->setText(QString::number(money[2]));
        ui->label_money_player4->setText(QString::number(money[3]));
        ui->label_money_player5->setText(QString::number(money[4]));
        ui->label_money_player6->setText(QString::number(money[5]));
        ui->label_money_player7->setText(QString::number(money[6]));
        ui->groupBox_player1->setTitle(nameOfPlayerss[0]);
        ui->groupBox_player2->setTitle(nameOfPlayerss[1]);
        ui->groupBox_player3->setTitle(nameOfPlayerss[2]);
        ui->groupBox_player4->setTitle(nameOfPlayerss[3]);
        ui->groupBox_player5->setTitle(nameOfPlayerss[4]);
        ui->groupBox_player6->setTitle(nameOfPlayerss[5]);
        ui->groupBox_player7->setTitle(nameOfPlayerss[6]);
        ui->label_status_player1->setText("ok");
        ui->label_status_player2->setText("ok");
        ui->label_status_player3->setText("ok");
        ui->label_status_player4->setText("ok");
        ui->label_status_player5->setText("ok");
        ui->label_status_player6->setText("ok");
        ui->label_status_player7->setText("ok");
        showPlayeInMap(7);
            break;
        case 8:
        ui->groupBox_player1->show();
        ui->groupBox_player2->show();
        ui->groupBox_player3->show();
        ui->groupBox_player4->show();
        ui->groupBox_player5->show();
        ui->groupBox_player6->show();
        ui->groupBox_player7->show();
        ui->groupBox_player8->show();
        ui->label_money_player1->setText(QString::number(money[0]));
        ui->label_money_player2->setText(QString::number(money[1]));
        ui->label_money_player3->setText(QString::number(money[2]));
        ui->label_money_player4->setText(QString::number(money[3]));
        ui->label_money_player5->setText(QString::number(money[4]));
        ui->label_money_player6->setText(QString::number(money[5]));
        ui->label_money_player7->setText(QString::number(money[6]));
        ui->label_money_player8->setText(QString::number(money[7]));
        ui->groupBox_player1->setTitle(nameOfPlayerss[0]);
        ui->groupBox_player2->setTitle(nameOfPlayerss[1]);
        ui->groupBox_player3->setTitle(nameOfPlayerss[2]);
        ui->groupBox_player4->setTitle(nameOfPlayerss[3]);
        ui->groupBox_player5->setTitle(nameOfPlayerss[4]);
        ui->groupBox_player6->setTitle(nameOfPlayerss[5]);
        ui->groupBox_player7->setTitle(nameOfPlayerss[6]);
        ui->groupBox_player8->setTitle(nameOfPlayerss[7]);
          ui->label_status_player1->setText("ok");
          ui->label_status_player2->setText("ok");
          ui->label_status_player3->setText("ok");
          ui->label_status_player4->setText("ok");
          ui->label_status_player5->setText("ok");
          ui->label_status_player6->setText("ok");
          ui->label_status_player7->setText("ok");
          ui->label_status_player8->setText("ok");
          showPlayeInMap(8);
            break;

        default :
            QMessageBox::information(this,"Wrong","Wrong info" );
            break;
        }

}






// every cards has a button that when users click on they can see info of cards
void board::on_pushButton_red1_clicked()
{
    red[0].setVal("Kentucky Avenue ",18,90,250,700,875,1050,110,150,150);
    red[0].setbackgroundColor("background-color:red;");
    red[0].setUi();
    red[0].whichCard(213,3);
    red[0].show();

}

void board::on_pushButton_red2_clicked()
{
    red[1].setVal("Indiana Avenue",18,90,250,700,875,1050,110,150,150);
    red[1].setbackgroundColor("background-color:red;");
    red[1].setUi();
    red[1].whichCard(470,3);
    red[1].show();
}

void board::on_pushButton_red3_clicked()
{
    red[2].setVal("Illinois Avenue",20,100,300,750,925,1100,120,150,150);
    red[2].setbackgroundColor("background-color:red;");
    red[2].setUi();
    red[2].whichCard(638,3);
    red[2].show();
}


void board::on_pushButton_yellow1_clicked()
{
    yellow[0].setVal("Atlantic Avenue",22,110,330,800,975,1150,130,150,150);
    yellow[0].setbackgroundColor("background-color:yellow;");
    yellow[0].setUi();
    yellow[0].whichCard(749,3);
    yellow[0].show();
}

void board::on_pushButton_yellow2_clicked()
{
    yellow[1].setVal("Ventnor Avenue",22,110,330,800,975,1150,130,150,150);
    yellow[1].setbackgroundColor("background-color:yellow;");
    yellow[1].setUi();
    yellow[1].whichCard(917,3);
    yellow[1].show();
}

void board::on_pushButton_yellow3_clicked()
{
    yellow[2].setVal("Marvin Gardens",24,120,360,850,1025,1200,140,150,150);
    yellow[2].setbackgroundColor("background-color:yellow;");
    yellow[2].setUi();
    yellow[2].whichCard(1084,3);
    yellow[2].show();
}

void board::on_pushButton_green1_clicked()
{
    green[0].setVal("Pacific Avenue",26,130,390,900,1100,1275,150,200,200);
    green[0].setbackgroundColor("background-color:green;");
    green[0].setUi();
    green[0].whichCard(1252,137);
    green[0].show();
}

void board::on_pushButton_green2_clicked()
{
    green[1].setVal("North Carolina Avenue ",26,130,390,900,1100,1275,150,200,200);
    green[1].setbackgroundColor("background-color:green;");
    green[1].setUi();
    green[1].whichCard(1252,225);
    green[1].show();
}

void board::on_pushButton_green3_clicked()
{
    green[2].setVal("Pennsylvania Avenue ",28,150,450,1000,1200,1400,160,200,200);
    green[2].setbackgroundColor("background-color:green;");
    green[2].setUi();
    green[2].whichCard(1252,402);
    green[2].show();
}

void board::on_pushButton_blue1_clicked()
{
    blue[0].setVal("Park Place",35,175,500,1100,1300,1500,175,200,200);
    blue[0].setbackgroundColor("background-color:#2D46B9;");
    blue[0].setUi();
    blue[0].whichCard(1252,491);
    blue[0].show();
}

void board::on_pushButton_blue2_clicked()
{
    blue[1].setVal("Boardwalk",50,200,600,1400,1700,2000,200,200,200);
    blue[1].setbackgroundColor("background-color:#2D46B9;");
    blue[1].setUi();
    blue[1].whichCard(1252,668);
    blue[1].show();
}

void board::on_pushButton_purple1_clicked()
{
    purple[0].setVal("Mediterranean Avenue",2,10,30,90,160,250,30,50,50);
    purple[0].setbackgroundColor("background-color:#890596;");
    purple[0].setUi();
    purple[0].whichCard(1086,765);
    purple[0].show();
}

void board::on_pushButton_purple2_clicked()
{
    purple[1].setVal("Baltic Avenue",4,20,60,180,320,450,30,50,50);
    purple[1].setbackgroundColor("background-color:#890596;");
    purple[1].setUi();
    purple[1].whichCard(750,765);
    purple[1].show();
}


void board::on_pushButton_lightBlue1_clicked()
{
    lightBlue[0].setVal("Oriental Avenue",6,30,90,270,400,550,50,50,50);
    lightBlue[0].setbackgroundColor("background-color:#1CC5DC;");
    lightBlue[0].setUi();
    lightBlue[0].whichCard(585,765);
    lightBlue[0].show();
}

void board::on_pushButton_lightBlue2_clicked()
{
    lightBlue[1].setVal("Vermont Avenue ",6,30,90,270,400,550,50,50,50);
    lightBlue[1].setbackgroundColor("background-color:#1CC5DC;");
    lightBlue[1].setUi();
    lightBlue[1].whichCard(380,765);
    lightBlue[1].show();
}


void board::on_pushButton_lightBlue3_clicked()
{
    lightBlue[2].setVal("Connecticut Avenue ",8,40,100,300,450,600,60,50,50);
    lightBlue[2].setbackgroundColor("background-color:#1CC5DC;");
    lightBlue[2].setUi();
    lightBlue[2].whichCard(215,765);
    lightBlue[2].show();
}


void board::on_pushButton_lightPurple1_clicked()
{
    lightPurple[0].setVal("St. Charles Place",10,50,150,450,625,750,70,100,100);
    lightPurple[0].setbackgroundColor("background-color:#ED50F1;");
    lightPurple[0].setUi();
    lightPurple[0].whichCard(15,670);
    lightPurple[0].show();
}

void board::on_pushButton_lightPurple2_clicked()
{
    lightPurple[1].setVal("States Avenue ",10,50,150,450,625,750,70,100,100);
    lightPurple[1].setbackgroundColor("background-color:#ED50F1;");
    lightPurple[1].setUi();
    lightPurple[1].whichCard(15,580);
    lightPurple[1].show();
}


void board::on_pushButton_lightPurple3_clicked()
{
    lightPurple[2].setVal("Virginia Avenue ",12,60,180,500,700,900,80,100,100);
    lightPurple[2].setbackgroundColor("background-color:#ED50F1;");
    lightPurple[2].setUi();
    lightPurple[2].whichCard(15,490);
    lightPurple[2].show();
}


void board::on_pushButton_orange1_clicked()
{
    orange[0].setVal("St. James Place ",14,70,200,550,750,950,90,100,100);
    orange[0].setbackgroundColor("background-color:#F37121;");
    orange[0].setUi();
    orange[0].whichCard(15,404);
    orange[0].show();
}

void board::on_pushButton_orange2_clicked()
{
    orange[1].setVal("States Avenue ",14,70,200,550,750,950,90,100,100);
    orange[1].setbackgroundColor("background-color:#F37121;");
    orange[1].setUi();
     orange[1].whichCard(15,224);
    orange[1].show();
}


void board::on_pushButton_orange3_clicked()
{
    orange[2].setVal("Virginia Avenue ",16,80,220,600,800,1000,100,100,100);
    orange[2].setbackgroundColor("background-color:#F37121;");
    orange[2].setUi();
    orange[2].whichCard(15,133);
    orange[2].show();
}



// tas part I --> set turn of players
void board::on_pushButton_5_clicked()
{
    srand(time(0));  // Initialize random number generator.
    int number1 = (rand()%6)+1;
    int number2 = (rand()%6)+1;
     result = number1+number2;

     //tas1
    QString addressImage1;
    switch(number1)
    {
        case 1:
          addressImage1 =  ":/images/images/one.jpg";
            break;
        case 2:
            addressImage1 =  ":/images/images/two.jpg";
            break;
        case 3:
            addressImage1 =  ":/images/images/three.jpg";
            break;
        case 4:
            addressImage1 =  ":/images/images/four.jpg";
            break;
        case 5:
            addressImage1 =  ":/images/images/five.jpg";
            break;
        case 6:
            addressImage1 =  ":/images/images/six.jpg";
            break;
        default :
            QMessageBox::information(this,"Wrong","Wrong info" );
            break;
    }
     QPixmap image1(addressImage1);
     ui->number1->setPixmap(image1.scaled(ui->number1->width(),ui->number1->height(),Qt::KeepAspectRatio));


       //tas 2
    QString addressImage2;
     switch(number2)
     {
         case 1:
           addressImage2 =  ":/images/images/one.jpg";
             break;
         case 2:
             addressImage2 =  ":/images/images/two.jpg";
             break;
         case 3:
             addressImage2 =  ":/images/images/three.jpg";
             break;
         case 4:
             addressImage2 =  ":/images/images/four.jpg";
             break;
         case 5:
             addressImage2 =  ":/images/images/five.jpg";
             break;
         case 6:
             addressImage2 =  ":/images/images/six.jpg";
             break;
         default :
             QMessageBox::information(this,"Wrong","Wrong info" );
             break;
     }

      QPixmap image2(addressImage2);
      ui->number2->setPixmap(image2.scaled(ui->number2->width(),ui->number2->height(),Qt::KeepAspectRatio));


      // set turn of every player in nobatPlayer and sent info to basic database(UserData)
    static int i =0;
    tas[i]=result;
    if(i+1==countOfPlayers)
    {
        resultTas();
        ui->pushButton_5->hide();
        nobatPlayer(countOfPlayers);
        allUserData->setFirstData(turnU,money,countOfPlayers);
        QMessageBox::information(this,"Message","Ok, Now U can Play. Enjoy it ;)" );
        ui->pushButton_run->show();
    }
    i++;
}


// button show afte part I so start partII
void board::on_pushButton_run_clicked()
{

    srand(time(0));  // Initialize random number generator.
    int number1 = (rand()%6)+1;
    int number2 = (rand()%6)+1;
     result = number1+number2;
     //tas1
    QString addressImage1;
    switch(number1)
    {
        case 1:
          addressImage1 =  ":/images/images/one.jpg";
            break;
        case 2:
            addressImage1 =  ":/images/images/two.jpg";
            break;
        case 3:
            addressImage1 =  ":/images/images/three.jpg";
            break;
        case 4:
            addressImage1 =  ":/images/images/four.jpg";
            break;
        case 5:
            addressImage1 =  ":/images/images/five.jpg";
            break;
        case 6:
            addressImage1 =  ":/images/images/six.jpg";
            break;
        default :
            QMessageBox::information(this,"Wrong","Wrong info" );
            break;

    }
     QPixmap image1(addressImage1);
     ui->number1->setPixmap(image1.scaled(ui->number1->width(),ui->number1->height(),Qt::KeepAspectRatio));

    //tas2
    QString addressImage2;
     switch(number2)
     {
         case 1:
           addressImage2 =  ":/images/images/one.jpg";
             break;
         case 2:
             addressImage2 =  ":/images/images/two.jpg";
             break;
         case 3:
             addressImage2 =  ":/images/images/three.jpg";
             break;
         case 4:
             addressImage2 =  ":/images/images/four.jpg";
             break;
         case 5:
             addressImage2 =  ":/images/images/five.jpg";
             break;
         case 6:
             addressImage2 =  ":/images/images/six.jpg";
             break;
         default :
             QMessageBox::information(this,"Wrong","Wrong info" );
             break;
     }
      QPixmap image2(addressImage2);
      ui->number2->setPixmap(image2.scaled(ui->number2->width(),ui->number2->height(),Qt::KeepAspectRatio));


      static int nobatPlayer=0;
      if(nobatPlayer==countOfPlayers)
      {
        nobatPlayer=0;
      }

      for (int i=0;i<countOfPlayers ;i++ ) {

          if(allUserData->NobatOfEveryPlayer[i][1]==nobatPlayer)
          {

             nobatNahayi=allUserData->NobatOfEveryPlayer[i][0];
          }


      }


  //    movementPlayer(nobatNahayi);

      // update location
      switch(nobatNahayi)
      {
          case 0:
          static int locResult = 0;
          locResult=result+locResult;
            if(locResult>=32)
            {
               locResult= locResult -32;
            }
          ui->label_player1->setGeometry(location[locResult][0]+20,location[locResult][1]+20,28,28);
          ui->label_player1->show();
          allUserData->updateLocation(location[locResult][0],location[locResult][1],0);
             break;

          case 1:
          static int locResult1 = 0;
          locResult1=result+locResult1;
          if(locResult1>=32)
          {
             locResult1= locResult1 -32;
          }
          ui->label_player2->setGeometry(location[locResult1][0]+20,location[locResult1][1]+20,28,28);
          ui->label_player2->show();
          allUserData-> updateLocation(location[locResult1][0],location[locResult1][1],1);
             break;

          case 2:
          static int locResult2 = 0;
          locResult2=result+locResult2;

          if(locResult2>=32)
          {
             locResult2= locResult2 -32;
          }
          ui->label_player3->setGeometry(location[locResult2][0]+20,location[locResult2][1]+20,28,28);
          ui->label_player3->update();
          allUserData-> updateLocation(location[locResult2][0],location[locResult2][1],2);

             break;

          case 3:
          static int locResult3 = 0;
          locResult3=result+locResult3;
          if(locResult3>=32)
          {
             locResult3= locResult3 -32;
          }
          ui->label_player4->setGeometry(location[locResult3][0]+20,location[locResult3][1]+20,28,28);
          ui->label_player4->update();
          allUserData-> updateLocation(location[locResult3][0],location[locResult3][1],3);
             break;

          case 4:
          static int locResult4 = 0;
          locResult4=result+locResult4;
          if(locResult4>=32)
          {
              locResult4=locResult4 -32;
          }
          ui->label_player5->setGeometry(location[locResult4][0]+20,location[locResult4][1]+20,28,28);
          ui->label_player5->update();
          allUserData->updateLocation(location[locResult4][0],location[locResult4][1],4);
             break;



          case 5:
          static int locResult5 = 0;
          locResult5=result+locResult5;

          if(locResult5>=32)
          {
            locResult5 = locResult5 -32;
          }
          ui->label_player6->setGeometry(location[locResult5][0],location[locResult5][1],28,28);
          ui->label_player6->update();
          allUserData-> updateLocation(location[locResult5][0],location[locResult5][1],5);
             break;

          case 6:
          static int locResult6 = 0;
          locResult6=result+locResult6;
          if(locResult6>=32)
          {
            locResult6=  locResult6 -32;
          }
          ui->label_player7->setGeometry(location[locResult6][0],location[locResult6][1],28,28);
          ui->label_player7->update();
          allUserData-> updateLocation(location[locResult6][0],location[locResult6][1],6);
            break;

          case 7:
          static int locResult7= 0;
          locResult7=result+locResult7;
          if(locResult7>=32)
          {
            locResult7 = locResult7 -32;
          }
          ui->label_player8->setGeometry(location[locResult7][0]+20,location[locResult7][1]+20,28,28);
          ui->label_player8->update();
          allUserData->updateLocation(location[locResult7][0],location[locResult7][1],7);
             break;
          default :
              QMessageBox::information(this,"Wrong","Wrong info" );
              break;
      }


      // check konim braraye tekrari omadan tas
       static int check=0;
       if(number1==number2)
       {
           check++;
           if(check == 3)
           {
                checkTas(nobatNahayi);
                nobatPlayer++;
                // update location --> bug
           }
       }

      //agar tas tekrari nabud nobat player badi
      if(number1!=number2)
      {
          check = 0;
          nobatPlayer++;
      }
}



// change location of player in every tound
void board::checkTas(int player)
{

    switch (player) {
            case 0:
            ui->label_player1->setGeometry(location[8][0],location[8][1],28,28);
            ui->label_player1->show();
               break;

            case 1:
            ui->label_player2->setGeometry(location[8][0],location[8][1],28,28);
            ui->label_player2->show();
               break;
            case 2:

            ui->label_player3->setGeometry(location[8][0],location[8][1],28,28);
            ui->label_player3->show();
               break;
            case 3:
            ui->label_player4->setGeometry(location[8][0],location[8][1],28,28);
            ui->label_player4->show();
               break;

            case 4:
            ui->label_player5->setGeometry(location[8][0],location[8][1],28,28);
            ui->label_player5->show();
               break;

            case 5:
            ui->label_player6->setGeometry(location[8][0],location[8][1],28,28);
            ui->label_player6->show();
               break;

            case 6:

            ui->label_player7->setGeometry(location[8][0],location[8][1],28,28);
            ui->label_player7->show();
               break;

            case 7:
            ui->label_player8->setGeometry(location[8][0],location[8][1],28,28);
            ui->label_player8->update();
               break;
            default :
                QMessageBox::information(this,"Wrong","Wrong info" );
                break;

        }

}


// nobat player ro mizare to label --> nobat toye board
void board::nobatPlayer(int number)
{
    switch (number) {
        case 2 :
            ui->label_nobat1->setText(QString::number(turnU[0][1]+1));
            ui->label_nobat2->setText(QString::number(turnU[1][1]+1));
         break;
        case 3 :
            ui->label_nobat1->setText(QString::number(turnU[0][1]+1));
            ui->label_nobat2->setText(QString::number(turnU[1][1]+1));
            ui->label_nobat3->setText(QString::number(turnU[2][1]+1));
         break;
        case 4 :
            ui->label_nobat1->setText(QString::number(turnU[0][1]+1));
            ui->label_nobat2->setText(QString::number(turnU[1][1]+1));
            ui->label_nobat3->setText(QString::number(turnU[2][1]+1));
            ui->label_nobat4->setText(QString::number(turnU[3][1]+1));
         break;
        case 5 :
            ui->label_nobat1->setText(QString::number(turnU[0][1]+1));
            ui->label_nobat2->setText(QString::number(turnU[1][1]+1));
            ui->label_nobat3->setText(QString::number(turnU[2][1]+1));
            ui->label_nobat4->setText(QString::number(turnU[3][1]+1));
            ui->label_nobat5->setText(QString::number(turnU[4][1]+1));
         break;
        case 6 :
            ui->label_nobat1->setText(QString::number(turnU[0][1]+1));
            ui->label_nobat2->setText(QString::number(turnU[1][1]+1));
            ui->label_nobat3->setText(QString::number(turnU[2][1]+1));
            ui->label_nobat4->setText(QString::number(turnU[3][1]+1));
            ui->label_nobat5->setText(QString::number(turnU[4][1]+1));
            ui->label_nobat6->setText(QString::number(turnU[5][1]+1));
         break;
        case 7 :
            ui->label_nobat1->setText(QString::number(turnU[0][1]+1));
            ui->label_nobat2->setText(QString::number(turnU[1][1]+1));
            ui->label_nobat3->setText(QString::number(turnU[2][1]+1));
            ui->label_nobat4->setText(QString::number(turnU[3][1]+1));
            ui->label_nobat5->setText(QString::number(turnU[4][1]+1));
            ui->label_nobat6->setText(QString::number(turnU[5][1]+1));
            ui->label_nobat7->setText(QString::number(turnU[6][1]+1));
         break;
        case 8 :
            ui->label_nobat1->setText(QString::number(turnU[0][1]+1));
            ui->label_nobat2->setText(QString::number(turnU[1][1]+1));
            ui->label_nobat3->setText(QString::number(turnU[2][1]+1));
            ui->label_nobat4->setText(QString::number(turnU[3][1]+1));
            ui->label_nobat5->setText(QString::number(turnU[4][1]+1));
            ui->label_nobat6->setText(QString::number(turnU[5][1]+1));
            ui->label_nobat7->setText(QString::number(turnU[6][1]+1));
            ui->label_nobat8->setText(QString::number(turnU[7][1]+1));
         break;

        default :
            QMessageBox::information(this,"Wrong","Wrong info" );
            break;
    }

}



//turnU[i][0]; // 1 ,2 ,3
//tas[i]; //    9, 6, 5,
//turnU[i][1]; 0 ,1 ,2;
// first bug :(


// nobat dehi ro qarar mide bar asas tas haye partI
void board::resultTas()
{
    for (int i=0;i < countOfPlayers  ;i++ ) {
        int tartib=0;

            for (int j=0; j<countOfPlayers ;j++ ) {
                if(tas[i]<tas[j])
                {
                    tartib ++ ;
                }
            }
        turnU[i][1]=tartib;
    }
}



// chance cards
void board::on_pushButton_chance1_clicked()
{
    chance.chanceCardUi();
    chance.show();
}


void board::on_pushButton_chance2_clicked()
{
    chance.chanceCardUi();
    chance.show();
}


void board::on_pushButton_chance3_clicked()
{
    chance.chanceCardUi();
    chance.show();
}

// bug :( fix it please

//void board::on_pushButton_community2_clicked()
//{
//    commi.communityCardUi();
//    commi.show();
//}


//void board::on_pushButton_community1_clicked()
//{
//    commi.communityCardUi();
//    commi.show();
//}


//void board::on_pushButton_community3_clicked()
//{
//    commi.communityCardUi();
//    commi.show();
//}


