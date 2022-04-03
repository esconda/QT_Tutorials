#ifndef TCPSERVER_H
#define TCPSERVER_H

#include <QMainWindow>
#include <QTcpServer>
#include <QTcpSocket>


namespace Ui {
class TcpServer;
}

class TcpServer : public QMainWindow
{
    Q_OBJECT

public:
    explicit TcpServer(QWidget *parent = nullptr);
    ~TcpServer();

private:
    Ui::TcpServer *ui;
    QTcpServer *mTcpServer;


public slots:
    void newConnection();
};

#endif // TCPSERVER_H
