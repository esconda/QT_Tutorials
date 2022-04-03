#include "tcpserver.h"
#include "ui_tcpserver.h"

TcpServer::TcpServer(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TcpServer)
{
    ui->setupUi(this);

    mTcpServer = new QTcpServer();
    connect(mTcpServer,SIGNAL(newConnection()),this,SLOT(newConnection()));

    if(!mTcpServer->listen(QHostAddress::Any,1234))
    {
        qDebug()<<"Server is not started";
    }

    else{
        qDebug()<<"Server Started";
    }
}

TcpServer::~TcpServer()
{
    delete ui;
}

void TcpServer::newConnection()
{
    QTcpSocket *tsocket = mTcpServer->nextPendingConnection();
    tsocket->write("Hello Client\r\n");
    tsocket->flush();

    tsocket->waitForBytesWritten(3000);

    tsocket->close();


}
