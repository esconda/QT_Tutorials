#ifndef TESTCL_H
#define TESTCL_H
#include <iostream>
#include <QtCore>
#include <string.h>
#include <QDir>
//#include <QtGlobal>
//#include <qendian.h>

using namespace std;

class testcl: public QObject
{
    Q_OBJECT
public:
    testcl();

    QTimer *timer;


public slots:
    void qdirimplementation();
};

#endif // TESTCL_H
