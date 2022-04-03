#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QString servername = "D:/Projeler/Tutorials/Qt-Tutorials/Important-Examples/";
    QString dbname = "example-database.db";

    const QString DRIVER("QSQLITE");
    db = QSqlDatabase::addDatabase(DRIVER);
    db.setConnectOptions();

    //GET DATABASE
    QString dsn = servername+dbname;
    db.setDatabaseName(dsn);

    db.open();

    //SHOW DATABASE VALUES IN TABLE
    this->model1 = new QSqlQueryModel();
    model1->setQuery("SELECT * FROM table1");
    ui->sqlTableview->setModel(model1);

    //SHOW DATABASE VALUES IN TBLE MODEL
    this->model2 = new QSqlTableModel();
    model2->setTable("table1");
    model2->select();
    ui->sqlTableview_2->setModel(model2);

    //RELATIONAL DATABASE EXAMPLE, CONNECT TWO DATABASE TO EACHOTHER
    this->modelrelational = new QSqlRelationalTableModel();
    modelrelational->setTable("table1");
    modelrelational->setRelation(0,QSqlRelation("wages","id","salary"));
    modelrelational->select();
    ui->sqlTableview_3->setModel(modelrelational);

    setWindowTitle(tr("Sqlrelation Examples"));



}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_tableView_clicked(const QModelIndex &index)
{
}
