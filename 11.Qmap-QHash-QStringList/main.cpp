#include "containers.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Containers w;
    w.show();

    return a.exec();
}
