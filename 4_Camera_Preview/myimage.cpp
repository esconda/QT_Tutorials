#include "myimage.h"

MyImage::MyImage(const QString &id, const QByteArray &data){

    mId = id;
    mData = data;

}
void MyImage::setdData(const QByteArray &data){
    mData = data;
}

void MyImage::setId(const QString &id){
    mId = id;
}

QByteArray MyImage::data() const {
    return mData;
}

QString MyImage::id() const {

    return mId;
}
