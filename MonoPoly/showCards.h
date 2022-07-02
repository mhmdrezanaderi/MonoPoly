#ifndef SHOWCARDS_H
#define SHOWCARDS_H


#include "cards.h"
#include "ui_showCards.h"
#include <QMainWindow>
#include "QWidget"
#include <QPixmap>
QT_BEGIN_NAMESPACE
namespace Ui { class showCards; }
QT_END_NAMESPACE

class showCards : public QMainWindow
{
    Q_OBJECT

public:
   explicit showCards(QWidget *parent = nullptr);

private slots:



private:
    Ui::showCards *ui;
};




#endif // SHOWCARDS_H
