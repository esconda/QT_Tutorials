#include "tcpsignalslot.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TcpSignalSlot w;
    w.show();

    return a.exec();
}
