#include <QCoreApplication>
#include <jsonobject.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    JsonObject jsonobject("{ name:John }");
    return a.exec();
}
