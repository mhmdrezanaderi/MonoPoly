#ifndef CARDS_H
#define CARDS_H
#include <QMainWindow>
#include "QWidget"
#include <QPixmap>

class allcards : public QMainWindow
{
    Q_OBJECT

public:
   explicit allcards(QWidget *parent = nullptr);
    QString title = "";

};


class chanceCards : public allcards
{
    Q_OBJECT
public:
    chanceCards();

    void setval(QString title, QString address_c );
    QString address;
};

class communityChestCards  : public allcards
{

    Q_OBJECT

public:
    communityChestCards(QString title ,QString address_c );
    QPixmap address();

};


class homeCards  : public allcards
{

    Q_OBJECT

public:
    homeCards(QString title,int rent_c);
    int rent;

};


class cardInformations
{

    public:
     int cards[22][20];

};





#endif // CARDS_H
