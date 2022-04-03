#include "tcpsignalslot.h"
#include "ui_tcpsignalslot.h"

TcpSignalSlot::TcpSignalSlot(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TcpSignalSlot)
{
    ui->setupUi(this);
    test();
}

TcpSignalSlot::~TcpSignalSlot()
{
    delete ui;
}

void TcpSignalSlot::test()
{
    msocket = new QTcpSocket();
    connect(msocket,SIGNAL(connected()),this,SLOT(tcpConnected()));
    connect(msocket,SIGNAL(disconnected()),this,SLOT(tcpDisconnected()));
    connect(msocket,SIGNAL(readyRead()),this,SLOT(readyRead()));
    connect(msocket,SIGNAL(bytesWritten(qint64)),this,SLOT(bytesWritten(qint64)));

    msocket->connectToHost("google.com",80);

    if(!msocket->waitForConnected(1000)){
        qDebug()<<"Eror"<<msocket->errorString();
    }


}

void TcpSignalSlot::tcpConnected()
{
    qDebug()<<"Connected";

}

void TcpSignalSlot::tcpDisconnected()
{
    qDebug()<<"Disconnected";
}

void TcpSignalSlot::bytesWritten(qint64 bytes)
{
    qDebug()<<"We wrote : "<<bytes;

}

void TcpSignalSlot::readyRead()
{
    qDebug()<<"Ready Read";
    qDebug()<<msocket->readAll();

}
