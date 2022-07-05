#ifndef SHOWCARDS_H
#define SHOWCARDS_H

#include "UsersData.h"
#include "cards.h"
#include "ui_showCards.h"
#include <QMainWindow>
#include "QWidget"
#include <QPixmap>
#include "QMessageBox"

QT_BEGIN_NAMESPACE
namespace Ui { class showCards; }
QT_END_NAMESPACE

class showCards : public QMainWindow
{
    Q_OBJECT

public:
   explicit showCards(QWidget *parent = nullptr);


   void setVal(QString  nameOfHouse_c,int rent_c,int oneHouse_c ,int twoHouses_c ,int threeHouses_c  ,int fourHouses_c  ,int hotel_c  ,int mortgageVal_c ,int housesCost_c  ,int hotelCost_c);
    QString nameOfHouse;
    int rent;
    int oneHouse;
    int twoHouses;
    int threeHouses;
    int fourHouses;
    int hotel;
    int mortgageVal;
    int housesCost;
    int hotelCost;
    void whichCard(int locX,int locY);
    int locationX;
    int locationY;
    QString backgroundColor;
    void setbackgroundColor( QString backgroundColor_c);
    void setUi();
    UsersData *allUserData;
private slots:



    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::showCards *ui;
};




#endif // SHOWCARDS_H
