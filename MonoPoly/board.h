#ifndef BOARD_H
#define BOARD_H
#include "cards.h"
#include "ui_board.h"
#include <QMainWindow>
#include "QWidget"
#include <QPixmap>
QT_BEGIN_NAMESPACE
namespace Ui { class board; }
QT_END_NAMESPACE

class board : public QMainWindow
{
    Q_OBJECT

public:
   explicit board(QWidget *parent = nullptr);
    chanceCards a;
    void colorOfCards();
private slots:

    void on_pushButton_red1_clicked();

private:
    Ui::board *ui;
};

#endif // BOARD_H
