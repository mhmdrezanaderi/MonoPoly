#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QPixmap>
#include <QMainWindow>
#include "board.h"
#include "showCards.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow,public UsersData
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    board d;

    QString nameOfPlayers[8];
    int numberOfPlayers;
    int sw = 1;
private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_member2_clicked();

    void on_pushButton_member3_clicked();

    void on_pushButton_member4_clicked();

    void on_pushButton_member5_clicked();

    void on_pushButton_member6_clicked();

    void on_pushButton_member8_clicked();

    void on_pushButton_member7_clicked();

    void on_pushButton_run_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
