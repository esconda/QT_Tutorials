#include "myimagesaver.h"
#include <QFile>
#include <QImage>
#include <QDebug>
#include <QBuffer>
#include <QStandardPaths>
#include <QQuickItemGrabResult>


MyImageSaver::MyImageSaver(QObject *parent): QObject {parent}
{

}

bool MyImageSaver::savePicture(const QString &id, QObject *objectImage ){

    const int nImages = mImages.size(); //size of the images in list
    for(int ix=0; ix<nImages;++ix){
        if(mImages.at(ix).id()==id){
            return false;
        }
    }

    QQuickItemGrabResult *item = static_cast<QQuickItemGrabResult*>(objectImage);
    QByteArray imageData;
    QBuffer buffer(&imageData);
    if (item->image().save(&buffer,"PNG")){
        MyImage image(id,imageData);//Can be changed

        image.setdData(imageData);//set camera
        image.setId(id);//set id of the camera
        mImages.append(image);//set all images in list
        return true;
    }
    return false;
}

bool MyImageSaver::writePictures(){

    const int nImages = mImages.size();
            for(int ix=0; ix<nImages;++ix){
                QFile file;
                QString filename = mImages.at(ix).id().split("/").last()+".png";
                QString directory = QStandardPaths::writableLocation(QStandardPaths::DesktopLocation);
                QString path = directory + "/" + filename;
                file.setFileName(path);
                if (file.open((QIODevice::WriteOnly))){
                    if(file.write(mImages.at(ix).data())>0){
                        file.flush();
                        file.close();
                    }

                    else{
                        qDebug()<<"Error appeard while write"<<file.errorString();
                        return false;
                    }
                }

                else{
                    qDebug()<<"Error appeard to open speified file name";
                    return false;
                }
            }
    return true;
}
