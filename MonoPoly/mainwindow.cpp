#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QApplication>
#include <QMainWindow>
#include <QPixmap>
#include "QDebug"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap p("E:/k/university/term 2/computer/projectMonoPoly/MonoPoly/images/firstPage.png");
     ui->label_image->setPixmap(p.scaled(ui->label_image->width(),ui->label_image->height(),Qt::KeepAspectRatio));

}

MainWindow::~MainWindow()
{
    delete ui;
}

