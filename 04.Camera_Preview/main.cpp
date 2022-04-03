#include <QtGui/QGuiApplication>
#include <QtCore/QDir>
#include <QtQuick/QQuickView>
#include <QtQml/QQmlEngine>
#include <QQuickStyle>
#include <QQmlContext>
#include <QQmlApplicationEngine>
#include "myimagesaver.h"


int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QQuickView viewer;
    QQuickStyle::setStyle("Material");
    MyImageSaver myImageSaver;

    viewer.engine()->addImportPath(QString::fromLatin1("qml"));

    QObject::connect(viewer.engine(), &QQmlEngine::quit, &viewer, &QWindow::close);
    viewer.rootContext()->setContextProperty("MyImageSaver",QVariant::fromValue(&myImageSaver));
    viewer.setTitle(QStringLiteral("CameraPreview"));

    viewer.setSource(QUrl("qrc:/main.qml"));
    viewer.setResizeMode(QQuickView::SizeRootObjectToView);
    viewer.show();

    return app.exec();

}
