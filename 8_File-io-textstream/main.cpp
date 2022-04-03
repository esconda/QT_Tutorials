#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include<QApplication>
#include <firstclass.h>


int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QApplication app(argc, argv);

    QQmlApplicationEngine engine;
    Firstclass firstclass;
    engine.rootContext()->setContextProperty("firstclass",&firstclass);
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
