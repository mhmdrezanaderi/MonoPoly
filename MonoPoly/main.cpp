#include "mainwindow.h"
#include "board.h"
#include "showCards.h"
#include <QApplication>
#include <QPixmap>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    MainWindow w;
//    board d;
//    d.show();

    showCards g;
    g.show();

//    w.show();
    return a.exec();
}
