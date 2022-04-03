#include "containers.h"
#include "ui_containers.h"

Containers::Containers(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Containers)
{
    ui->setupUi(this);
    //qmapExample();
    //qhashExample();
    qstringListExample();
}

Containers::~Containers()
{
    delete ui;
}

//QMAP EXAMPLE
void Containers::qmapExample()
{
    mEmployees.insert(1,"Burak");
    mEmployees.insert(2,"YunusEmre");
    mEmployees.insert(3,"Bob");

    //Simple operations
    if(!mEmployees.isEmpty()){
        qDebug()<<"Get key of the employee : "<<mEmployees.key("Burak");
        qDebug()<<"Find string according to key : "<<mEmployees.find(2).value();
    }

    //Gets each key and show representation of each key
    foreach (int i, mEmployees.keys()) {
        qDebug()<<mEmployees[i];

    }

    //Show each key with Iterator,Iterator infrastructure
    QMapIterator <int,QString> Iter(mEmployees);

    while(Iter.hasNext()){
        Iter.next();
        qDebug()<<Iter.key()<<"="<<Iter.value();
    }


}

/****************************************************************************
QHash provides very similar functionality to QMap. The differences are:
* QHash provides faster lookups than QMap. (See Algorithmic Complexity for details.)
* When iterating over a QMap, the items are always sorted by key. With QHash, the items are arbitrarily ordered.
* The key type of a QMap must provide operator<(). The key type of a QHash must provide operator==() and a global hash function called qHash() (see qHash).
****************************************************************************/
void Containers::qhashExample()
{
    mEmployeeshash.insert(1,"Burak");
    mEmployeeshash.insert(2,"YunusEmre");
    mEmployeeshash.insert(3,"Bob");

    //Simple operations
    if(!mEmployeeshash.isEmpty()){
        qDebug()<<"Get key of the employee : "<<mEmployeeshash.key("Burak");
        qDebug()<<"Find string according to key : "<<mEmployeeshash.find(2).value();
        qDebug()<<"Get value according to key"<<mEmployeeshash.value(3);
    }

    //Gets each key and show representation of each key
    foreach (int i, mEmployeeshash.keys()) {
        qDebug()<<mEmployeeshash[i];

    }

    //Show each key with Iterator,Iterator infrastructure
    QHashIterator <int,QString> Iter(mEmployeeshash);

    while(Iter.hasNext()){
        //Iter.next();
        qDebug()<<Iter.key()<<"="<<Iter.value();
    }
}

//QSTRINGLIST Example
void Containers::qstringListExample()
{
    QString tletters= "a,b,c,d,e,f";
    mStringList = tletters.split(","); //split by , and add to the list
    mStringList.replaceInStrings("b","batman");//change b with batman
    qDebug()<<"String List : "<<mStringList;

    QString tAfterString = mStringList.join(",");//join each parameters to tafterString
    qDebug()<<tAfterString;
    qDebug()<<tAfterString.mid(3,tAfterString.size()-11);


}
