#include "containermain.h"
#include "ui_containermain.h"

ContainerMain::ContainerMain(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ContainerMain)
{
    ui->setupUi(this);
    defineList();
    linkedListOperation();
}

ContainerMain::~ContainerMain()
{
    delete ui;

    delete contanerList.listIter;
    contanerList.listIter = nullptr;

    delete contanerList.mutableListIter;
    contanerList.mutableListIter =  nullptr;

}

void ContainerMain::defineList()
{
    for(int i=0; i<10; i++){
        contanerList.numbers.append(i);
    }

    //Copy List for iteration operations
    fwIteratorOperation(contanerList.numbers);

    //Backward List iteration
    backIteratorOperation();

    //MutableListıterator Operation
    mutableIteratorListOperation(contanerList.numbers);

    //Qlist show elements
    contanerList.numbers.removeOne(5);//removes 5 number name from list
    contanerList.numbers.removeAt(3);//removes 4. element from the list
    contanerList.numbers.removeLast();//removes Last element 9 from the list
    contanerList.numbers.removeFirst();//removes First element 0 from the list



    //Show all elements in console
    showList(contanerList.numbers);
}
//mutation is changing something, mutable is used to change value in list,in this case better than the list iterator
void ContainerMain::mutableIteratorListOperation(QList<int> list)
{
    contanerList.mutableListIter = new QMutableListIterator<int>(list);

    while(contanerList.mutableListIter->hasNext()){
        int i =contanerList.mutableListIter->next();
        if( i == 5){

            contanerList.mutableListIter->remove();//remove 5 number from the list
            contanerList.mutableListIter->insert(10);//set val but does not show it
        }
            }

    contanerList.mutableListIter->toFront();//Start again from front
     while(contanerList.mutableListIter->hasNext()){

         qDebug()<<"Mutable operation :"<< contanerList.mutableListIter->next();
     }
}

void ContainerMain::fwIteratorOperation(QList<int> list)
{
    contanerList.listIter = new QListIterator<int>(list);//Initialization of the iteration

    while(contanerList.listIter->hasNext()){
        qDebug()<<"Forward Iteration : "<<contanerList.listIter->next();
    }
}

void ContainerMain::backIteratorOperation()
{
    contanerList.listIter->toBack();
    while(contanerList.listIter->hasPrevious()){
        qDebug()<<"Backward Iteration : "<<contanerList.listIter->previous();

        if(contanerList.listIter->hasPrevious()){
            qDebug()<<"Backward Next... : "<<contanerList.listIter->peekPrevious();
        }
    }
}

void ContainerMain::showList(QList<int> &list)
{
    for(int tnumber:list){
        qDebug()<<"Container Numbers of QList : "<<tnumber;
    }
}

//Check difference between list and linkedlist ,it is smilar to Qlist
void ContainerMain::linkedListOperation()
{
    contanerList.strings = {"Burak","Doğançay","Mechatronics Engineer"};
    contanerList.strings.removeOne("Burak");
    contanerList.strings.insert(contanerList.strings.begin()+2,"Engineer");// +2 give specified point
    for(QString string: contanerList.strings){
        qDebug()<<"Qlinked Lists"<<string;
    }
}
