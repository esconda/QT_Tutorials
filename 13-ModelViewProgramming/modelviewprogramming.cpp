#include "modelviewprogramming.h"
#include "ui_modelviewprogramming.h"

ModelViewProgramming::ModelViewProgramming(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ModelViewProgramming)
{
    ui->setupUi(this);

    model = new QStringListModel(this);

    QStringList tList;
    tList <<"Plane"<<"Car"<<"Motorcycle";

    //Setstringlist to model
    model->setStringList(tList);

    ui->listView->setModel(model);
    ui->comboBox->setModel(model);

    ui->listView->setEditTriggers(QAbstractItemView::AnyKeyPressed | QAbstractItemView::DoubleClicked);
}

ModelViewProgramming::~ModelViewProgramming()
{
    delete ui;
}

void ModelViewProgramming::on_Add_clicked()
{
    int row = model->rowCount();
    model->insertRows(row,1);

    QModelIndex index = model->index(row);
    ui->listView->setCurrentIndex(index);
    ui->listView->edit(index);

}

void ModelViewProgramming::on_Insert_clicked()
{
    int row = ui->listView->currentIndex().row();
    model->insertRows(row,1);

    QModelIndex index = model->index(row);
    ui->listView->setCurrentIndex(index);
    ui->listView->edit(index);

}

void ModelViewProgramming::on_Delete_clicked()
{
    model->removeRows(ui->listView->currentIndex().row(),1);
}

void ModelViewProgramming::on_comboBox_currentIndexChanged(int index)
{
    QModelIndex tmodelIndex = model->index(index);
    ui->listView->setCurrentIndex(tmodelIndex);
}
