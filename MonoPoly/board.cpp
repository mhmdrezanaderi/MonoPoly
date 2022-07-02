#include "board.h"
#include <QApplication>
#include <QMainWindow>
#include "ui_board.h"
#include "cards.h"
#include <QPixmap>
#include "QDebug"

board::board(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::board)
{
    ui->setupUi(this);
    a.setval("abd","E:/k/university/term 2/computer/projectMonoPoly/MonoPoly/images/Advance_To_Boardwalk.webp");
    qDebug()<<a.address;
    QPixmap p(a.address);

    ui->chanceCards->setPixmap(p.scaled(ui->chanceCards->width(),ui->chanceCards->height(),Qt::KeepAspectRatio));



}


void board::colorOfCards()
{


}



void board::on_pushButton_red1_clicked()
{

}

