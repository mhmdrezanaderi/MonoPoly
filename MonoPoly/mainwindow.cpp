#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QApplication>
#include <QMainWindow>
#include <QPixmap>
#include "QDebug"
#include "board.h"
#include "showCards.h"
#include "QMessageBox"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    allUserData = UsersData::singleton();

    ui->setupUi(this);
    QPixmap p(":/images/images/firstPage.png");
     ui->label_image->setPixmap(p.scaled(ui->label_image->width(),ui->label_image->height(),Qt::KeepAspectRatio));
     ui->label_2->close();
     ui->groupBox->close();
     ui->groupBox_5->close();
     ui->groupBox_3->close();

     ui->groupBox_6->close();
     ui->groupBox_7->close();

     ui->groupBox_8->close();
     ui->groupBox_9->close();

     ui->groupBox_10->close();
     ui->groupBox_11->close();
     ui->pushButton_run->hide();
     ui->label_3->hide();
     ui->label_4->hide();

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_2_clicked()
{
    close();
}



void MainWindow::on_pushButton_member2_clicked()
{
    ui->label_2->close();
    ui->groupBox->close();
    ui->groupBox_5->show();
    ui->groupBox_3->show();

    ui->groupBox_6->close();
    ui->groupBox_7->close();

    ui->groupBox_8->close();
    ui->groupBox_9->close();

    ui->groupBox_10->close();
    ui->groupBox_11->close();
    numberOfPlayers =2;
    ui->pushButton_run->show();
}




void MainWindow::on_pushButton_member3_clicked()
{
    ui->label_2->close();
    ui->groupBox->close();
    ui->groupBox_5->show();
    ui->groupBox_3->show();

    ui->groupBox_6->show();
    ui->groupBox_7->close();

    ui->groupBox_8->close();
    ui->groupBox_9->close();

    ui->groupBox_10->close();
    ui->groupBox_11->close();
    numberOfPlayers =3;
     ui->pushButton_run->show();
}





void MainWindow::on_pushButton_member4_clicked()
{
    ui->label_2->hide();
    ui->groupBox->hide();
    ui->groupBox_5->show();
    ui->groupBox_3->show();

    ui->groupBox_6->show();
    ui->groupBox_7->hide();

    ui->groupBox_8->show();
    ui->groupBox_9->hide();

    ui->groupBox_10->hide();
    ui->groupBox_11->hide();
     ui->pushButton_run->show();
    numberOfPlayers =4;
}


void MainWindow::on_pushButton_member5_clicked()
{
    ui->label_2->hide();
    ui->groupBox->hide();

    ui->groupBox_5->show();
    ui->groupBox_3->show();

    ui->groupBox_6->show();
    ui->groupBox_7->hide();

    ui->groupBox_8->show();
    ui->groupBox_9->show();

    ui->groupBox_10->hide();
    ui->groupBox_11->hide();
     ui->pushButton_run->show();
    numberOfPlayers =5;
}

void MainWindow::on_pushButton_member6_clicked()
{
    ui->label_2->hide();
    ui->groupBox->hide();
    ui->groupBox_5->show();
    ui->groupBox_3->show();

    ui->groupBox_6->show();
    ui->groupBox_7->show();

    ui->groupBox_8->show();
    ui->groupBox_9->show();

    ui->groupBox_10->hide();
    ui->groupBox_11->hide();
     ui->pushButton_run->show();
    numberOfPlayers =6;
}

void MainWindow::on_pushButton_member7_clicked()
{
    ui->label_2->hide();
    ui->groupBox->hide();
    ui->groupBox_5->show();
    ui->groupBox_3->show();
    ui->groupBox_6->show();
    ui->groupBox_7->show();
    ui->groupBox_8->show();
    ui->groupBox_9->show();
    ui->groupBox_11->show();

    ui->groupBox_10->hide();
     ui->pushButton_run->show();
    numberOfPlayers =7;
}


void MainWindow::on_pushButton_member8_clicked()
{
    ui->label_2->hide();
    ui->groupBox->hide();
    ui->groupBox_5->show();
    ui->groupBox_3->show();
    ui->groupBox_6->show();
    ui->groupBox_7->show();
    ui->groupBox_8->show();
    ui->groupBox_9->show();
    ui->groupBox_10->show();
    ui->groupBox_11->show();
     ui->pushButton_run->show();
    numberOfPlayers =8;
}




void MainWindow::on_pushButton_run_clicked()
{
    sw=1;
    switch(numberOfPlayers)
    {
        case 2:
              nameOfPlayers[0]=ui->lineEdit_name1->text();
              nameOfPlayers[1]=ui->lineEdit_name2->text();

             allUserData-> setNameOfPlayer(nameOfPlayers,numberOfPlayers);
              for (int i=0;i<2 ; i++) {
                  if(nameOfPlayers[i]=="")
                  {
                      sw = 0;
                       QMessageBox::information(this,"Wrong","please Enter Your Name player :  " + QString::number(i+1));
                  }
              }
          break;
        case 3:
                nameOfPlayers[0]=ui->lineEdit_name1->text();
                nameOfPlayers[1]=ui->lineEdit_name2->text();
                nameOfPlayers[2]=ui->lineEdit_name3->text();
                allUserData-> setNameOfPlayer(nameOfPlayers,numberOfPlayers);
                for (int i=0;i<3 ; i++) {
                    if(nameOfPlayers[i]=="")
                    {
                        sw = 0;
                         QMessageBox::information(this,"Wrong","please Enter Your Name player :  " + QString::number(i+1));
                    }
                }

         break;
        case 4:
        nameOfPlayers[0]=ui->lineEdit_name1->text();
        nameOfPlayers[1]=ui->lineEdit_name2->text();
        nameOfPlayers[2]=ui->lineEdit_name3->text();
        nameOfPlayers[3]=ui->lineEdit_name4->text();
        allUserData-> setNameOfPlayer(nameOfPlayers,numberOfPlayers);
        for (int i=0;i<4 ; i++) {
            if(nameOfPlayers[i]=="")
            {
                sw = 0;
                 QMessageBox::information(this,"Wrong","please Enter Your Name player :  " + QString::number(i+1));
            }
        }
         break;
        case 5:
        nameOfPlayers[0]=ui->lineEdit_name1->text();
        nameOfPlayers[1]=ui->lineEdit_name2->text();
        nameOfPlayers[2]=ui->lineEdit_name3->text();
        nameOfPlayers[3]=ui->lineEdit_name4->text();
        nameOfPlayers[4]=ui->lineEdit_name5->text();
        allUserData-> setNameOfPlayer(nameOfPlayers,numberOfPlayers);
        for (int i=0;i<5 ; i++) {
            if(nameOfPlayers[i]=="")
            {
                sw = 0;
                 QMessageBox::information(this,"Wrong","please Enter Your Name player :  " + QString::number(i+1));
            }
        }
         break;
        case 6:
        nameOfPlayers[0]=ui->lineEdit_name1->text();
        nameOfPlayers[1]=ui->lineEdit_name2->text();
        nameOfPlayers[2]=ui->lineEdit_name3->text();
        nameOfPlayers[3]=ui->lineEdit_name4->text();
        nameOfPlayers[4]=ui->lineEdit_name5->text();
        nameOfPlayers[5]=ui->lineEdit_name6->text();
         allUserData->setNameOfPlayer(nameOfPlayers,numberOfPlayers);
        for (int i=0;i<6 ; i++) {
            if(nameOfPlayers[i]=="")
            {
                sw = 0;
                 QMessageBox::information(this,"Wrong","please Enter Your Name player :  " + QString::number(i+1));
            }
        }
         break;
        case 7:
        nameOfPlayers[0]=ui->lineEdit_name1->text();
        nameOfPlayers[1]=ui->lineEdit_name2->text();
        nameOfPlayers[2]=ui->lineEdit_name3->text();
        nameOfPlayers[3]=ui->lineEdit_name4->text();
        nameOfPlayers[4]=ui->lineEdit_name5->text();
        nameOfPlayers[5]=ui->lineEdit_name6->text();
        nameOfPlayers[6]=ui->lineEdit_name7->text();
        allUserData-> setNameOfPlayer(nameOfPlayers,numberOfPlayers);
        for (int i=0;i<7 ; i++) {
            if(nameOfPlayers[i]=="")
            {
                sw = 0;
                 QMessageBox::information(this,"Wrong","please Enter Your Name player :  " + QString::number(i+1));
            }
        }
         break;
        case 8:
        nameOfPlayers[0]=ui->lineEdit_name1->text();
        nameOfPlayers[1]=ui->lineEdit_name2->text();
        nameOfPlayers[2]=ui->lineEdit_name3->text();
        nameOfPlayers[3]=ui->lineEdit_name4->text();
        nameOfPlayers[4]=ui->lineEdit_name5->text();
        nameOfPlayers[5]=ui->lineEdit_name6->text();
        nameOfPlayers[6]=ui->lineEdit_name7->text();
        nameOfPlayers[7]=ui->lineEdit_name8->text();
         allUserData->setNameOfPlayer(nameOfPlayers,numberOfPlayers);
        for (int i=0;i<8 ; i++) {
            if(nameOfPlayers[i]=="")
            {
                sw = 0;
                 QMessageBox::information(this,"Wrong","please Enter Your Name player :  " + QString::number(i+1));
            }
        }
         break;
    }


    if(sw==1)
    {
        d.setGeometry(50,150,1781,907);
        d.playerCount(nameOfPlayers,numberOfPlayers);
        d.setPlayerInfoVal();
        d.show();
        this->hide();
    }
}




