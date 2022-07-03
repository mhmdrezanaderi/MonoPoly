#ifndef ALLPLAYERS_H
#define ALLPLAYERS_H

//#include "ui_allplayer.h"
#include <QMainWindow>
#include "QWidget"
QT_BEGIN_NAMESPACE
namespace Ui { class allplayers; }
QT_END_NAMESPACE

class allplayers : public QMainWindow
{
    Q_OBJECT

public:
   explicit allplayers(QWidget *parent = nullptr);


private:
    Ui::allplayers *ui;
};
#endif // ALLPLAYERS_H
