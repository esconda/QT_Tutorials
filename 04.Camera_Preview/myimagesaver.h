#ifndef MYIMAGESAVER_H
#define MYIMAGESAVER_H
#include <QObject>
#include <QList>
#include "myimage.h"


class MyImageSaver : public QObject
{
    Q_OBJECT
public:
    MyImageSaver(QObject *parent = nullptr);
    Q_INVOKABLE bool savePicture(const QString &id, QObject *objectImage );
    Q_INVOKABLE bool writePictures();

private:
    QList<MyImage> mImages;
};

#endif // MYIMAGESAVER_H
