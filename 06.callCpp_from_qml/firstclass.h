#ifndef FIRSTCLASS_H
#define FIRSTCLASS_H
#include <QtCore>
#include <QtQuick>
#include <iostream>
#include <QString>

using namespace std;

class Firstclass : public QObject
{
    Q_OBJECT
public:
    Firstclass(QObject *parent = nullptr);
    Q_INVOKABLE void print(QString printstring);
};

#endif // FIRSTCLASS_H
