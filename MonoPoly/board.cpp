#include "board.h"
#include <QApplication>
#include <QMainWindow>
#include "ui_board.h"
#include "cards.h"
#include <QPixmap>
#include "QDebug"
#include "showCards.h"
board::board(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::board)
{
    ui->setupUi(this);
    a.setval("abd","E:/k/university/term 2/computer/projectMonoPoly/MonoPoly/images/Advance_To_Boardwalk.webp");
    qDebug()<<a.address;
    QPixmap p(a.address);

    ui->chanceCards->setPixmap(p.scaled(ui->chanceCards->width(),ui->chanceCards->height(),Qt::KeepAspectRatio));

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
}


void board::colorOfCards()
{


}



void board::on_pushButton_red1_clicked()
{

    red[0].setVal("Kentucky Avenue ",18,90,250,700,875,1050,110,150,150);
    red[0].setbackgroundColor("background-color:red;");
    red[0].setUi();
    red[0].show();
}


void board::on_pushButton_red2_clicked()
{

    red[1].setVal("Indiana Avenue",18,90,250,700,875,1050,110,150,150);
    red[1].setbackgroundColor("background-color:red;");
    red[1].setUi();
    red[1].show();
}

void board::on_pushButton_red3_clicked()
{

    red[2].setVal("Illinois Avenue",20,100,300,750,925,1100,120,150,150);
    red[2].setbackgroundColor("background-color:red;");
    red[2].setUi();
    red[2].show();
}


void board::on_pushButton_yellow1_clicked()
{

    yellow[0].setVal("Atlantic Avenue",22,110,330,800,975,1150,130,150,150);
    yellow[0].setbackgroundColor("background-color:yellow;");
    yellow[0].setUi();
    yellow[0].show();
}


void board::on_pushButton_yellow2_clicked()
{

    yellow[1].setVal("Ventnor Avenue",22,110,330,800,975,1150,130,150,150);
    yellow[1].setbackgroundColor("background-color:yellow;");
    yellow[1].setUi();
    yellow[1].show();
}

void board::on_pushButton_yellow3_clicked()
{

    yellow[2].setVal("Marvin Gardens",24,120,360,850,1025,1200,140,150,150);
    yellow[2].setbackgroundColor("background-color:yellow;");
    yellow[2].setUi();
    yellow[2].show();
}

void board::on_pushButton_green1_clicked()
{

    green[0].setVal("Pacific Avenue",26,130,390,900,1100,1275,150,200,200);
    green[0].setbackgroundColor("background-color:green;");
    green[0].setUi();
    green[0].show();
}

void board::on_pushButton_green2_clicked()
{

    green[1].setVal("North Carolina Avenue ",26,130,390,900,1100,1275,150,200,200);
    green[1].setbackgroundColor("background-color:green;");
    green[1].setUi();
    green[1].show();
}

void board::on_pushButton_green3_clicked()
{

    green[2].setVal("Pennsylvania Avenue ",28,150,450,1000,1200,1400,160,200,200);
    green[2].setbackgroundColor("background-color:green;");
    green[2].setUi();
    green[2].show();
}

void board::on_pushButton_blue1_clicked()
{

    blue[0].setVal("Park Place",35,175,500,1100,1300,1500,175,200,200);
    blue[0].setbackgroundColor("background-color:#2D46B9;");
    blue[0].setUi();
    blue[0].show();
}

void board::on_pushButton_blue2_clicked()
{

    blue[1].setVal("Boardwalk",50,200,600,1400,1700,2000,200,200,200);
    blue[1].setbackgroundColor("background-color:#2D46B9;");
    blue[1].setUi();
    blue[1].show();
}

void board::on_pushButton_purple1_clicked()
{

    purple[0].setVal("Mediterranean Avenue",2,10,30,90,160,250,30,50,50);
    purple[0].setbackgroundColor("background-color:#890596;");
    purple[0].setUi();
    purple[0].show();
}

void board::on_pushButton_purple2_clicked()
{

    purple[1].setVal("Baltic Avenue",4,20,60,180,320,450,30,50,50);
    purple[1].setbackgroundColor("background-color:#890596;");
    purple[1].setUi();
    purple[1].show();
}


void board::on_pushButton_lightBlue1_clicked()
{

    lightBlue[0].setVal("Oriental Avenue",6,30,90,270,400,550,50,50,50);
    lightBlue[0].setbackgroundColor("background-color:#1CC5DC;");
    lightBlue[0].setUi();
    lightBlue[0].show();
}

void board::on_pushButton_lightBlue2_clicked()
{

    lightBlue[1].setVal("Vermont Avenue ",6,30,90,270,400,550,50,50,50);
    lightBlue[1].setbackgroundColor("background-color:#1CC5DC;");
    lightBlue[1].setUi();
    lightBlue[1].show();
}


void board::on_pushButton_lightBlue3_clicked()
{

    lightBlue[2].setVal("Connecticut Avenue ",8,40,100,300,450,600,60,50,50);
    lightBlue[2].setbackgroundColor("background-color:#1CC5DC;");
    lightBlue[2].setUi();
    lightBlue[2].show();
}


void board::on_pushButton_lightPurple1_clicked()
{

    lightPurple[0].setVal("St. Charles Place",10,50,150,450,625,750,70,100,100);
    lightPurple[0].setbackgroundColor("background-color:#ED50F1;");
    lightPurple[0].setUi();
    lightPurple[0].show();
}

void board::on_pushButton_lightPurple2_clicked()
{

    lightPurple[1].setVal("States Avenue ",10,50,150,450,625,750,70,100,100);
    lightPurple[1].setbackgroundColor("background-color:#ED50F1;");
    lightPurple[1].setUi();
    lightPurple[1].show();
}


void board::on_pushButton_lightPurple3_clicked()
{

    lightPurple[2].setVal("Virginia Avenue ",12,60,180,500,700,900,80,100,100);
    lightPurple[2].setbackgroundColor("background-color:#ED50F1;");
    lightPurple[2].setUi();
    lightPurple[2].show();
}


void board::on_pushButton_orange1_clicked()
{

    orange[0].setVal("St. James Place ",14,70,200,550,750,950,90,100,100);
    orange[0].setbackgroundColor("background-color:#F37121;");
    orange[0].setUi();
    orange[0].show();
}

void board::on_pushButton_orange2_clicked()
{

    orange[1].setVal("States Avenue ",14,70,200,550,750,950,90,100,100);
    orange[1].setbackgroundColor("background-color:#F37121;");
    orange[1].setUi();
    orange[1].show();
}


void board::on_pushButton_orange3_clicked()
{

    orange[2].setVal("Virginia Avenue ",16,80,220,600,800,1000,100,100,100);
    orange[2].setbackgroundColor("background-color:#F37121;");
    orange[2].setUi();
    orange[2].show();
}

