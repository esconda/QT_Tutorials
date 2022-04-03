#ifndef TCPSOCKET_H
#define TCPSOCKET_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QDebug>

namespace Ui {
class TcpSocket;
}

class TcpSocket : public QMainWindow
{
    Q_OBJECT

public:
    explicit TcpSocket(QWidget *parent = nullptr);
    ~TcpSocket();

    void Connect();

private:
    Ui::TcpSocket *ui;
    QTcpSocket *mtcpsocket;
};

#endif // TCPSOCKET_H
