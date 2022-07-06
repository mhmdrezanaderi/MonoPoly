#ifndef CHANCECOMMUNITY_H
#define CHANCECOMMUNITY_H
#include <QMainWindow>
#include <QApplication>
#include <QPixmap>
#include "QDebug"
#include "QWidget"
#include <QPixmap>
#include "ui_chanceCommunity.h"

QT_BEGIN_NAMESPACE
namespace Ui { class chanceCommunity; }
QT_END_NAMESPACE

class chanceCommunity : public QMainWindow
{
    Q_OBJECT

public:
   explicit chanceCommunity(QWidget *parent = nullptr);
    int chanceCards[14];
    int communityCards[14];
    static int index;
//    static int index2;

    void chanceCardUi();
//    void communityCardUi();
private slots:
    void on_pushButton_clicked();

private:
    Ui::chanceCommunity *ui;

};



#endif // CHANCECOMMUNITY_H
