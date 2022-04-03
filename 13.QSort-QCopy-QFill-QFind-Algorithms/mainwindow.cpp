#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //qsortAlgorithm(mList);
    //qcopyAlgorithm();
    //qfillAlgorithm();
    qfindAlgorithm(mList);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::qsortAlgorithm(QList<int> pList)
{
    pList<<2<<3<<1<<0;
    qSort(pList);
    foreach (int i, pList) {
        qDebug()<<i;
    }

    qSort(pList.begin()+1,pList.end()-1);

    foreach(int j,pList){
        qDebug()<<j;
    }
}

void MainWindow::qcopyAlgorithm()
{
    QStringList tList;
    tList <<"a" <<"b" <<"c";

    QVector<QString> tVect(3);

    qCopy(tList.begin(),tList.end(),tVect.begin());

    foreach (QString tString, tVect) {
        qDebug()<<"Copy Strings"<<tString;
    }
}

void MainWindow::qfillAlgorithm()
{
    QVector<QString> tVector(5);

    qFill(tVector,"Filling Vector");
    foreach (QString tString, tVector) {
        qDebug()<<"Fill Strings"<<tString;
    }

}

void MainWindow::qfindAlgorithm(QList<int> pList)
{
    pList<<5<<15<<25<<35<<50<<70;

    QList<int>::const_iterator tIter = qFind(pList.begin(),pList.end(),15);

    if(tIter != pList.end()){
        qDebug()<<"Found : "<<*tIter;
    }

    else{
        qDebug()<<"Not Found";
    }

}

