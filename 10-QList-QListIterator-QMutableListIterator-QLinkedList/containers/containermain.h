#ifndef CONTAINERMAIN_H
#define CONTAINERMAIN_H

#include <QMainWindow>
#include <QDebug>
#include <QList>
#include <QLinkedList>

namespace Ui {
class ContainerMain;
}

class ContainerMain : public QMainWindow
{
    Q_OBJECT

public:
    explicit ContainerMain(QWidget *parent = nullptr);
    ~ContainerMain();
public:
    enum containerRole{
        ListContainer = 0,
        IteratorInfrastructure,
    };

    struct ContainerList{
        QList<int> numbers;
        QLinkedList<QString> strings;
        QListIterator<int> *listIter = nullptr;
        QMutableListIterator<int> *mutableListIter = nullptr;

    }contanerList;

protected:
    void defineList();
    void fwIteratorOperation(QList<int> list); //copy assignment
    void backIteratorOperation();
    void mutableIteratorListOperation(QList<int> list);
    void showList(QList<int> &list);

    void linkedListOperation();

private:
    Ui::ContainerMain *ui;
};

#endif // CONTAINERMAIN_H
