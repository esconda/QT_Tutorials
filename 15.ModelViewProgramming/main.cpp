#include "modelviewprogramming.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ModelViewProgramming w;
    w.show();

    return a.exec();
}
