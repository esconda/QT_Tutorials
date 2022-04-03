#include "containermain.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ContainerMain w;
    w.show();

    return a.exec();
}
