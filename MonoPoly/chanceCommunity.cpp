#include "chanceCommunity.h"
#include <QApplication>
#include <QMainWindow>
#include "ui_chanceCommunity.h"
#include "cards.h"
#include <QPixmap>
#include "QDebug"

chanceCommunity::chanceCommunity(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::chanceCommunity)
{
    ui->setupUi(this);
//    for (int i=0;i<14 ; i++) {
//        int number1 = (rand()%14)+1;
//        chanceCards[i]=number1;
//    }
    int a[14]={2,8,9,4,3,1,5,12,14,6,13,7,10,11};
    for (int i=0;i<14 ; i++) {
         chanceCards[i]=a[i];
    }

// int b[14]={2,8,9,4,3,1,5,12,14,6,13,7,10,11};
//    for (int j=0;j<14 ; j++) {
//         communityCards[j]=b[j];
//    }
}
int chanceCommunity::index =0 ;
void chanceCommunity::chanceCardUi()
{

    QPixmap card1(":/images/images/chance/Advance_To_Go 2.png");
    QPixmap card2(":/images/images/chance/Chance_ATIA3.png");
    QPixmap card3(":/images/images/chance/Chance_ATSCP 4.png");
    QPixmap card4(":/images/images/chance/Chance_ATTNR5.png");
    QPixmap card5(":/images/images/chance/Chance_ATTNU6.png");
    QPixmap card6(":/images/images/chance/Chance_BPYD7.png");
    QPixmap card7(":/images/images/chance/Chance_GB3S8.png");
    QPixmap card8(":/images/images/chance/Chance_GOOJF9.png");
    QPixmap card9(":/images/images/chance/Chance_GTJ10.png");
    QPixmap card10(":/images/images/chance/Chance_MGR11.png");
    QPixmap card11(":/images/images/chance/Chance_PPT12.png");
    QPixmap card12(":/images/images/chance/Chance_TAROTR13.png");
    QPixmap card13(":/images/images/chance/Chance_YBALM14.png");
    QPixmap card14(":/images/images/chance/Chance_YHBAECOTB15.jpg");


    switch (chanceCards[index]) {

    case 1:
        ui->Cards->setPixmap(card1.scaled(ui->Cards->width(),ui->Cards->height(),Qt::KeepAspectRatio));
        break;

    case 2:
        ui->Cards->setPixmap(card2.scaled(ui->Cards->width(),ui->Cards->height(),Qt::KeepAspectRatio));
        break;
    case 3:
        ui->Cards->setPixmap(card3.scaled(ui->Cards->width(),ui->Cards->height(),Qt::KeepAspectRatio));
        break;
    case 4:
        ui->Cards->setPixmap(card4.scaled(ui->Cards->width(),ui->Cards->height(),Qt::KeepAspectRatio));
        break;
    case 5:
        ui->Cards->setPixmap(card5.scaled(ui->Cards->width(),ui->Cards->height(),Qt::KeepAspectRatio));
        break;
    case 6:
        ui->Cards->setPixmap(card6.scaled(ui->Cards->width(),ui->Cards->height(),Qt::KeepAspectRatio));
        break;
    case 17:
        ui->Cards->setPixmap(card7.scaled(ui->Cards->width(),ui->Cards->height(),Qt::KeepAspectRatio));
        break;
    case 8:
        ui->Cards->setPixmap(card8.scaled(ui->Cards->width(),ui->Cards->height(),Qt::KeepAspectRatio));
        break;
    case 9:
        ui->Cards->setPixmap(card9.scaled(ui->Cards->width(),ui->Cards->height(),Qt::KeepAspectRatio));
        break;
    case 10:
        ui->Cards->setPixmap(card10.scaled(ui->Cards->width(),ui->Cards->height(),Qt::KeepAspectRatio));
        break;
    case 11:
        ui->Cards->setPixmap(card11.scaled(ui->Cards->width(),ui->Cards->height(),Qt::KeepAspectRatio));
        break;
    case 12:
        ui->Cards->setPixmap(card12.scaled(ui->Cards->width(),ui->Cards->height(),Qt::KeepAspectRatio));
        break;
    case 13:
        ui->Cards->setPixmap(card13.scaled(ui->Cards->width(),ui->Cards->height(),Qt::KeepAspectRatio));
        break;

    case 14:
        ui->Cards->setPixmap(card14.scaled(ui->Cards->width(),ui->Cards->height(),Qt::KeepAspectRatio));
        break;

    }

    index++;
    if(index==14)
    {
        index = 0;
    }

}



//int chanceCommunity::index2 =0 ;

//void chanceCommunity::communityCardUi(){

//    QPixmap card111(":/images/images/community/CC_Advance_to_Go1.png");
//    QPixmap card22(":/images/images/community/Community_Chest_BEIYF4.png");
//    QPixmap card33(":/images/images/community/Community_Chest_DF11.png");
//    QPixmap card44(":/images/images/community/Community_Chest_FSOS5.png");
//    QPixmap card55(":/images/images/community/Community_Chest_GOO10.png");
//    QPixmap card66(":/images/images/community/Community_Chest_GOOJF16.png");
//    QPixmap card77(":/images/images/community/Community_Chest_GTJ15.png");
//    QPixmap card88(":/images/images/community/Community_Chest_ITR6.png");
//    QPixmap card99(":/images/images/community/Community_Chest_LIM2.png");
//    QPixmap card1010(":/images/images/community/Community_Chest_PH12.png");
//    QPixmap card1111(":/images/images/community/Community_Chest_PST13.png");
//    QPixmap card1212(":/images/images/community/Community_Chest_RFS7.png");
//    QPixmap card1313(":/images/images/community/Community_Chest_XFM9.png");
//    QPixmap card1414(":/images/images/community/Community_Chest_YAAFSR14.png");


//    switch (communityCards[index2]) {

//    case 1:
//        ui->Cards->setPixmap(card111.scaled(ui->Cards->width(),ui->Cards->height(),Qt::KeepAspectRatio));
//        break;

//    case 2:
//        ui->Cards->setPixmap(card22.scaled(ui->Cards->width(),ui->Cards->height(),Qt::KeepAspectRatio));
//        break;
//    case 3:
//        ui->Cards->setPixmap(card33.scaled(ui->Cards->width(),ui->Cards->height(),Qt::KeepAspectRatio));
//        break;
//    case 4:
//        ui->Cards->setPixmap(card44.scaled(ui->Cards->width(),ui->Cards->height(),Qt::KeepAspectRatio));
//        break;
//    case 5:
//        ui->Cards->setPixmap(card55.scaled(ui->Cards->width(),ui->Cards->height(),Qt::KeepAspectRatio));
//        break;
//    case 6:
//        ui->Cards->setPixmap(card66.scaled(ui->Cards->width(),ui->Cards->height(),Qt::KeepAspectRatio));
//        break;
//    case 17:
//        ui->Cards->setPixmap(card77.scaled(ui->Cards->width(),ui->Cards->height(),Qt::KeepAspectRatio));
//        break;
//    case 8:
//        ui->Cards->setPixmap(card88.scaled(ui->Cards->width(),ui->Cards->height(),Qt::KeepAspectRatio));
//        break;
//    case 9:
//        ui->Cards->setPixmap(card99.scaled(ui->Cards->width(),ui->Cards->height(),Qt::KeepAspectRatio));
//        break;
//    case 10:
//        ui->Cards->setPixmap(card1010.scaled(ui->Cards->width(),ui->Cards->height(),Qt::KeepAspectRatio));
//        break;
//    case 11:
//        ui->Cards->setPixmap(card1111.scaled(ui->Cards->width(),ui->Cards->height(),Qt::KeepAspectRatio));
//        break;
//    case 12:
//        ui->Cards->setPixmap(card1212.scaled(ui->Cards->width(),ui->Cards->height(),Qt::KeepAspectRatio));
//        break;
//    case 13:
//        ui->Cards->setPixmap(card1313.scaled(ui->Cards->width(),ui->Cards->height(),Qt::KeepAspectRatio));
//        break;

//    case 14:
//        ui->Cards->setPixmap(card1414.scaled(ui->Cards->width(),ui->Cards->height(),Qt::KeepAspectRatio));
//        break;

//    }

//    index2++;
//    if(index2==14)
//    {
//        index2 = 0;
//    }

//}

void chanceCommunity::on_pushButton_clicked()
{
    this ->hide();
}

