#include "testcl.h"

testcl::testcl()
{
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(qdirimplementation()));
    timer->start(2000);
}

void testcl::qdirimplementation(){

    QDir qdir("D:/Projeler/Tutorials/Qt-Tutorials/Important-Examples/9-Qdir-QTimer-QThread");


    if(qdir.exists()){
        foreach(QFileInfo info, qdir.entryList()){
            //qDebug()<<"dir : "<< info.absoluteFilePath();

            if(info.isDir()) qDebug()<<"dir : "<< info.absoluteFilePath();

        }
    }
}
