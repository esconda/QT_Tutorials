#ifndef MYIMAGE_H
#define MYIMAGE_H
#include <QByteArray>
#include <QString>

class MyImage
{
public:
    MyImage(const QString &id, const QByteArray &data);
    void setdData(const QByteArray &data);
    void setId(const QString &id);
    QByteArray data() const; //it is something like get data
    QString id() const;//it is something like get id

    typedef struct{
        int myval;
        int anval;

    }Variable_def;

private:
    QByteArray mData;
    QString mId;
};

#endif // MYIMAGE_H
