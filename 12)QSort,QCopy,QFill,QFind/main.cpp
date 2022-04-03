#include <QCoreApplication>
#include <QList>
#include <QDebug>
#include "test2.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    Test2 somefunctions;
    //somefunctions.QSort();
    //somefunctions.QCopy();
    //somefunctions.QFill();
    somefunctions.QFind();
    //somefunctions.QMapfunc();
    //somefunctions.QHashfunc();
    //somefunctions.QStringListfunc();

    return a.exec();
}
