#include <QCoreApplication>
#include <testcl.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    testcl test;

    test.qdirimplementation();
    return a.exec();
}
