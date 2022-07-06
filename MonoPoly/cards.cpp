#include "cards.h"
#include <QApplication>
#include <QMainWindow>
#include "QDebug"
#include <QPixmap>
allcards::allcards(QWidget *parent)
    : QMainWindow(parent)
{


}
chanceCards::chanceCards()
{

}

void chanceCards::setval(QString title,QString address_c )
{
    allcards::title = title;
    address = address_c;
}

