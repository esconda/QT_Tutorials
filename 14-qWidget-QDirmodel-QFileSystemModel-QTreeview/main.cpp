#include "dialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    trydefinition::Dialog w;
    //trydefinition::Dialog::instance()->show();
    w.show();

    return a.exec();
}
