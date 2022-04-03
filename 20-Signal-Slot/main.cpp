#include "signalslot.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SignalSlot w;
    w.show();

    return a.exec();
}
