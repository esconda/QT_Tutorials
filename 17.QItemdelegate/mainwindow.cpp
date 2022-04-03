#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{


    ui->setupUi(this);
    mydelegate = new Delegate(this);
    model = new QStandardItemModel(8,2,this);

    //Create table view with data
    for(int row=0;row < 8; ++row)
    {
        for(int col=0;col < 2; ++col)
        {
            QModelIndex index = model->index(row,col,QModelIndex());
            model->setData(index,0);
        }
    }


    //set model to tableview and delegate properties
    //
    ui->tableView->setModel(model); 
    ui->tableView->setItemDelegate(mydelegate);

}


MainWindow::~MainWindow()
{
    delete ui;
}
