#ifndef FIRSTCLASS_H
#define FIRSTCLASS_H
#include <QtCore>
#include <QtQuick>
#include <iostream>
#include <QString>
#include <QFileDialog>

using namespace std;

class Firstclass : public QWidget
{
    Q_OBJECT
public:
    Firstclass(QWidget *parent = nullptr);
    Q_INVOKABLE void print(QString printstring);
    Q_INVOKABLE void fileread();

    QString imgfilename;
};

#endif // FIRSTCLASS_H
