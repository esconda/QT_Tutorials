#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->pushButton->setToolTip("Hello <font color = 'red'><b>World</b></font>"
                               "<ul>"
                               "<li>Item</li>"
                               "<li>Item2</li>"
                               "<li>Item3</li>"
                               "</ul>");
    ui->pushButton_2->setToolTip("<img src=':/icons/icons/icon.png'>Hello World</img>");
    //QTimer does not work in Concurrent
    //QtConcurrent::run(this,&MainWindow::Qtimerwaitfunction);
    Qtimerwaitfunction();

}

MainWindow::~MainWindow()
{
    aborted = true;
    delete ui;

}

void MainWindow::Qtimerwaitfunction()
{
    //    while(true){
    //        if (aborted)
    //            return;
    if(!waittimer){

        waittimer = new QTimer;
        connect(waittimer,&QTimer::timeout,this,&MainWindow::timeoutfunction);
        waittimer->start(5000);

    }


    //}

}


void MainWindow::timeoutfunction()
{
    qDebug()<<"Timer running";
    waittimer->stop();
    waittimer->deleteLater();

}
