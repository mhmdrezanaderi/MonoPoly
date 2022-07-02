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

}
