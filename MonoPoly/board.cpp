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
    a.setval("abd","E:/k/university/term/computer/projectMonoPoly/MonoPoly/images/Advance_To_Boardwalk.webp");
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

    ui->groupBox_player1->hide();
    ui->groupBox_player2->hide();

    ui->groupBox_player3->hide();
    ui->groupBox_player4->hide();

    ui->groupBox_player5->hide();
    ui->groupBox_player6->hide();

    ui->groupBox_player7->hide();
    ui->groupBox_player8->hide();

}



void board::playerCount(QString names[8], int count)
{
    for (int i=0 ;i < count ;i++ ) {
        nameOfPlayerss[i] = names[i];
//        money[i]=1500;
    }
    countOfPlayers = count;

}


void board::setPlayerInfoVal()
{

    switch(countOfPlayers)
    {
        case 2:
              ui->groupBox_player1->show();
              ui->groupBox_player2->show();

              ui->groupBox_player1->setTitle(nameOfPlayerss[0]);
              ui->groupBox_player2->setTitle(nameOfPlayerss[1]);
//               ui->label_money_player1->setText("1500");
//                ui->label_money_player2->setText("1500");
              ui->label_status_player1->setText("ok");
              ui->label_status_player2->setText("ok");
            break;
        case 3:
            ui->groupBox_player1->show();
            ui->groupBox_player2->show();
            ui->groupBox_player3->show();

            ui->groupBox_player1->setTitle(nameOfPlayerss[0]);
            ui->groupBox_player2->setTitle(nameOfPlayerss[1]);
            ui->groupBox_player3->setTitle(nameOfPlayerss[2]);

            ui->label_status_player1->setText("ok");
            ui->label_status_player2->setText("ok");
            ui->label_status_player3->setText("ok");
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


//        ui->label_money_player1->setText(QString::number(money[0]));
//        ui->label_money_player2->setText(QString::number(money[1]));
//        ui->label_money_player3->setText(QString::number(money[2]));
//        ui->label_money_player4->setText(QString::number(money[3]));

        ui->label_status_player1->setText("ok");
        ui->label_status_player2->setText("ok");
        ui->label_status_player3->setText("ok");
        ui->label_status_player4->setText("ok");
            break;
        case 5:
        ui->groupBox_player1->show();
        ui->groupBox_player2->show();
        ui->groupBox_player3->show();
        ui->groupBox_player4->show();
        ui->groupBox_player5->show();

//        ui->label_money_player1->setText(QString::number(money[0]));
//        ui->label_money_player2->setText(QString::number(money[1]));
//        ui->label_money_player3->setText(QString::number(money[2]));
//        ui->label_money_player4->setText(QString::number(money[3]));
//        ui->label_money_player5->setText(QString::number(money[4]));

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
            break;
        case 6:
        ui->groupBox_player1->show();
        ui->groupBox_player2->show();
        ui->groupBox_player3->show();
        ui->groupBox_player4->show();
        ui->groupBox_player5->show();
        ui->groupBox_player6->show();

//        ui->label_money_player1->setText(QString::number(money[0]));
//        ui->label_money_player2->setText(QString::number(money[1]));
//        ui->label_money_player3->setText(QString::number(money[2]));
//        ui->label_money_player4->setText(QString::number(money[3]));
//        ui->label_money_player5->setText(QString::number(money[4]));
//        ui->label_money_player6->setText(QString::number(money[5]));

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
            break;
        case 7:
        ui->groupBox_player1->show();
        ui->groupBox_player2->show();
        ui->groupBox_player3->show();
        ui->groupBox_player4->show();
        ui->groupBox_player5->show();
        ui->groupBox_player6->show();
        ui->groupBox_player7->show();

//        ui->label_money_player1->setText(QString::number(money[0]));
//        ui->label_money_player2->setText(QString::number(money[1]));
//        ui->label_money_player3->setText(QString::number(money[2]));
//        ui->label_money_player4->setText(QString::number(money[3]));
//        ui->label_money_player5->setText(QString::number(money[4]));
//        ui->label_money_player6->setText(QString::number(money[5]));
//        ui->label_money_player7->setText(QString::number(money[6]));

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

//        ui->label_money_player1->setText(QString::number(money[0]));
//        ui->label_money_player2->setText(QString::number(money[1]));
//        ui->label_money_player3->setText(QString::number(money[2]));
//        ui->label_money_player4->setText(QString::number(money[3]));
//        ui->label_money_player5->setText(QString::number(money[4]));
//        ui->label_money_player6->setText(QString::number(money[5]));
//        ui->label_money_player7->setText(QString::number(money[6]));
//        ui->label_money_player8->setText(QString::number(money[7]));


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
            break;


    }

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


void board::on_pushButton_5_clicked()
{
    srand(time(0));  // Initialize random number generator.
    int number1 = (rand()%6)+1;
    int number2 = (rand()%6)+1;
     result = number1+number2;

    QString addressImage1;
    switch(number1)
    {
        case 1:
          addressImage1 =  "E:/k/university/term/computer/projectMonoPoly/MonoPoly/images/one.jpg";
            break;
        case 2:
            addressImage1 =  "E:/k/university/term/computer/projectMonoPoly/MonoPoly/images/two.jpg";
            break;
        case 3:
            addressImage1 =  "E:/k/university/term/computer/projectMonoPoly/MonoPoly/images/three.jpg";
            break;
        case 4:
            addressImage1 =  "E:/k/university/term/computer/projectMonoPoly/MonoPoly/images/four.jpg";
            break;
        case 5:
            addressImage1 =  "E:/k/university/term/computer/projectMonoPoly/MonoPoly/images/five.jpg";
            break;
        case 6:
            addressImage1 =  "E:/k/university/term/computer/projectMonoPoly/MonoPoly/images/six.jpg";
            break;


    }
     QPixmap image1(addressImage1);
     ui->number1->setPixmap(image1.scaled(ui->number1->width(),ui->number1->height(),Qt::KeepAspectRatio));


    QString addressImage2;
     switch(number2)
     {
         case 1:
           addressImage2 =  "E:/k/university/term/computer/projectMonoPoly/MonoPoly/images/one.jpg";
             break;
         case 2:
             addressImage2 =  "E:/k/university/term/computer/projectMonoPoly/MonoPoly/images/two.jpg";
             break;
         case 3:
             addressImage2 =  "E:/k/university/term/computer/projectMonoPoly/MonoPoly/images/three.jpg";
             break;
         case 4:
             addressImage2 =  "E:/k/university/term/computer/projectMonoPoly/MonoPoly/images/four.jpg";
             break;
         case 5:
             addressImage2 =  "E:/k/university/term/computer/projectMonoPoly/MonoPoly/images/five.jpg";
             break;
         case 6:
             addressImage2 =  "E:/k/university/term/computer/projectMonoPoly/MonoPoly/images/six.jpg";
             break;


     }

      QPixmap image2(addressImage2);
      ui->number2->setPixmap(image2.scaled(ui->number2->width(),ui->number2->height(),Qt::KeepAspectRatio));
}


