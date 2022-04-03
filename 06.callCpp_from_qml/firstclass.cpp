#include "firstclass.h"

Firstclass::Firstclass(QObject *parent) : QObject {parent}
{

}

void Firstclass::print(QString printstring){

    cout<<printstring.toStdString()<<endl;
}
