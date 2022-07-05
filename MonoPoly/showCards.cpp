#include "showCards.h"
#include <QApplication>
#include <QMainWindow>
#include "ui_showCards.h"
#include "cards.h"
#include <QPixmap>
#include "QDebug"

showCards::showCards(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::showCards)
{
    ui->setupUi(this);
    allUserData = UsersData::singleton();

}
void showCards::setUi()
{
    ui->backgroundColor->setStyleSheet(backgroundColor);
    ui->nameOfCard->setText(nameOfHouse);
    ui->rent->setText(QString::number(rent));
    ui->label_oneHouse->setText(QString::number(oneHouse));
     ui->label_twoHouses->setText(QString::number(twoHouses));
     ui->label_threeHouses->setText(QString::number(threeHouses));
      ui->label_fourHouses->setText(QString::number(fourHouses));
     ui->label_hotelCost->setText(QString::number(hotelCost));
     ui->label_housesCost->setText(QString::number(housesCost));
     ui->label_mortgage->setText(QString::number(mortgageVal));
     ui->label_hotel->setText(QString::number(hotel));

}

void showCards::setVal(QString nameOfHouse_c ,int rent_c,int oneHouse_c ,int twoHouses_c ,int threeHouses_c  ,int fourHouses_c  ,int hotel_c  ,int mortgageVal_c ,int housesCost_c  ,int hotelCost_c )
{
    nameOfHouse=nameOfHouse_c;
    rent = rent_c;
    oneHouse=oneHouse_c;
    twoHouses=twoHouses_c;
    threeHouses=threeHouses_c;
    fourHouses=fourHouses_c;
    hotel=hotel_c;
    mortgageVal=mortgageVal_c;
    housesCost=housesCost_c;
    hotelCost=hotelCost_c;

}


void showCards::setbackgroundColor( QString backgroundColor_c)
{
    backgroundColor=backgroundColor_c;
};

void showCards::on_pushButton_2_clicked()
{
    close();
}

void showCards::on_pushButton_clicked()
{

    qDebug ()<< "whichPlayer" <<allUserData->whichPlayer;

     qDebug ()<< "locationX" <<locationX;

     qDebug ()<< "newLocationx" <<allUserData->newLocation[0][0];
      qDebug ()<< "locationY" <<locationY;
      qDebug ()<< "newLocationy" <<allUserData->newLocation[0][1];


    if(locationX == allUserData->newLocation[allUserData->whichPlayer][0] && locationY == allUserData->newLocation[allUserData->whichPlayer][1])
    {
        qDebug ()<< "correct";
    }
    else
    {
        QMessageBox::information(this,"Wrong","player "+ QString::number(allUserData->whichPlayer)+" U are not in correct location" );


    }
}

void showCards::whichCard(int locX, int locY)
{
    locationX = locX;
    locationY = locY;
}
