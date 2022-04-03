#include "htmlnetworking.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    HtmlNetworking w;
    w.show();

    return a.exec();
}
