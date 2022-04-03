#ifndef TCPSIGNALSLOT_H
#define TCPSIGNALSLOT_H

#include <QMainWindow>
#include <QTcpSocket>

namespace Ui {
class TcpSignalSlot;
}

class TcpSignalSlot : public QMainWindow
{
    Q_OBJECT

public:
    explicit TcpSignalSlot(QWidget *parent = nullptr);
    ~TcpSignalSlot();

    void test();

private:
    Ui::TcpSignalSlot *ui;
    QTcpSocket *msocket;

signals:


public slots:
    void tcpConnected();
    void tcpDisconnected();
    void bytesWritten(qint64 bytes);
    void readyRead();
};

#endif // TCPSIGNALSLOT_H
