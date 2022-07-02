#include "allplayers.h"
#include <QApplication>
#include <QMainWindow>

allplayers::allplayers(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::allplayers)
{
    ui->setupUi(this);
}


