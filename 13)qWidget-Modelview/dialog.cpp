#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    model = new QStringListModel(this);
    QStringList stringList;
    stringList << "object1"<<"object2"<<"object3"<<"object4";
    model->setStringList(stringList);

    ui->listView->setModel(model);
    ui->comboBox->setModel(model);

    ui->listView->setEditTriggers(QAbstractItemView::AnyKeyPressed | QAbstractItemView::DoubleClicked);


}

Dialog::~Dialog()
{
    delete ui;
}

//ADD
void Dialog::on_pushButton_2_clicked()
{
    int row = ui->listView->currentIndex().row();
    model->insertRows(row,1);

    QModelIndex index = model->index(row);
    ui->listView->setCurrentIndex(index);
    ui->listView->edit(index);
}

//INSERT
void Dialog::on_pushButton_clicked()
{
    int row = model->rowCount();
    model->insertRows(row,1);

    QModelIndex index = model->index(row);
    ui->listView->setCurrentIndex(index);
    ui->listView->edit(index);
}

//REMOVE
void Dialog::on_delete_2_clicked()
{
   model->removeRows(ui->listView->currentIndex().row(),1);
}
