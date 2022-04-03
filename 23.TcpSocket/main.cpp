#include "tcpsocket.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TcpSocket w;
    w.show();

    return a.exec();
}
