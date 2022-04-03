#include "tcpsocket.h"
#include "ui_tcpsocket.h"

TcpSocket::TcpSocket(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TcpSocket),
    mtcpsocket(nullptr)
{
    ui->setupUi(this);
    Connect();
}

TcpSocket::~TcpSocket()
{
    delete ui;
    if(mtcpsocket){
        delete  mtcpsocket;
        mtcpsocket = nullptr;
    }

}

void TcpSocket::Connect()
{
    mtcpsocket = new QTcpSocket(this);
    //Connected
    mtcpsocket->connectToHost("google.com",80);

    if(mtcpsocket->waitForConnected(3000)){
        qDebug()<<"Connected";

        mtcpsocket->write("Hello Server\r\n\n");

        //Reading
        mtcpsocket->waitForBytesWritten(2000);
        mtcpsocket->waitForReadyRead(1000);

        qDebug()<<"Reading : "<<mtcpsocket->bytesAvailable();
        qDebug()<<mtcpsocket->readAll();
        //close the socket
        mtcpsocket->close();
    }

    else{
        qDebug()<<"Not Connected";
    }

    //Sent

    //got

    //closed connection
}
