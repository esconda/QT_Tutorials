#include "test2.h"

Test2::Test2()
{

}

//QSORT EXAMPLE
void Test2::QSort(){
    qDebug()<<"QSORT EXAMPLE";
    QList<int>  list;

    list <<2<<3<<1<<0;

    //qSort(list);//Sort list from lower to bigger
    qSort(list.begin(),list.end());


    foreach(int i, list){

        qDebug()<<i;
    }

}

//QCOPY EXAMPLE
void Test2::QCopy(){
    qDebug()<<"QCOPY EXAMPLE";
    QStringList stringlist;

    stringlist<<"a"<<"b"<<"c";

    QVector<QString> Vector(3);

    qCopy(stringlist.begin(),stringlist.end(),Vector.begin());

    foreach(QString itr, Vector){
        qDebug()<<itr;
    }

}

//QFILL EXAMPLE, FILLS VECTOR WITH STRINGS
void Test2::QFill(){

    QVector<QString> Vector(5);
    qDebug()<<"QFILL EXAMPLE";

    qFill(Vector,"BURAK DOGANCAY");

    foreach(QString itr, Vector){
        qDebug()<<itr;
    }

}

//QLINKEDLIST EXAMPLE it is faster than listiterators which is defined above because it moves between pointers to the next item adress
void Test2::QFind(){

    QList<int> List;
    qDebug()<<"QFIND EXAMPLE";

    List<<1<<3<<5;//İT İS SOMETHİNG LİKE APPEND FUNCTİON "List.append"

    QList<int>::const_iterator iter = qFind(List.begin(),List.end(),20);

    if(iter != List.end()){
        qDebug()<<"Found : "<<*iter;
    }

    else{

        qDebug()<<"Not Found";
    }
}
