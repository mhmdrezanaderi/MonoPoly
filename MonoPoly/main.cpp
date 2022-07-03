#include "mainwindow.h"
#include "board.h"
#include "showCards.h"
#include <QApplication>
#include <QPixmap>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;


//    showCards red;
//    red.setVal("Kentucky Avenue ",18,90,250,700,875,1050,110,150,150);
//    red.setbackgroundColor("");
//    red.setUi();
//    red.show();
//    showCards g;
//    g.show();

    w.show();
    return a.exec();
}
