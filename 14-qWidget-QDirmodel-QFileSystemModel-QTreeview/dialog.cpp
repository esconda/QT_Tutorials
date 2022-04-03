#include "dialog.h"
#include "ui_dialog.h"

trydefinition::Dialog::Dialog(QWidget *parent) noexcept :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    initDirmodel();
    initSystemDirModelOne("C:/");
    initSystemDirModelTwo("C:/");
}

trydefinition::Dialog::~Dialog()
{
    delete ui;
}

trydefinition::Dialog *trydefinition::Dialog::instance()
{
    static Dialog tdialog;
    return &tdialog;
}

void trydefinition::Dialog::initDirmodel()
{
    //CREATE DIR MODEL
    dirmodel = new QDirModel(this); // create model first
    dirmodel->setReadOnly(false);
    dirmodel->setSorting(QDir::DirsFirst | QDir::IgnoreCase | QDir::Name);

    ui->treeView->setModel(dirmodel);

    QModelIndex index = dirmodel->index("C:/");
    ui->treeView->expand(index);
    ui->treeView->scrollTo(index);
    ui->treeView->setCurrentIndex(index);
    ui->treeView->resizeColumnToContents(0);
}

void trydefinition::Dialog::initSystemDirModelOne(const QString &path)
{
    //CREATE SYSTEM FILE DIR MODEL
    systemdirmodel = new QFileSystemModel(this);
    systemdirmodel->setRootPath(path);
    systemdirmodel->setFilter(QDir::NoDotAndDotDot | QDir::AllDirs);

    ui->treeView_2->setModel(systemdirmodel);
}

void trydefinition::Dialog::initSystemDirModelTwo(const QString &path)
{
    //CREATE SYSTEM FILE DIR MODEL
    systemfilemodel = new QFileSystemModel(this);
    systemfilemodel->setRootPath(path);
    systemfilemodel->setFilter(QDir::NoDotAndDotDot | QDir::AllDirs);
    ui->listView->setModel(systemfilemodel);
}

void trydefinition::Dialog::on_pushButton_clicked()
{
    //Make Qdirmodel
    QModelIndex index = ui->treeView->currentIndex();
    if(!index.isValid()) return;
    QString name = QInputDialog::getText(this, "Name","Enter a name");
    if(name.isEmpty()) return;
    dirmodel->mkdir(index,name);
}

void trydefinition::Dialog::on_pushButton_2_clicked()
{
    QModelIndex index = ui->treeView->currentIndex();
    if(!index.isValid()) return;

    if(dirmodel->fileInfo(index).isDir()){
        //REMOVE DIRECTORY
        dirmodel->rmdir(index);}

    else{
        //REMOVE FILE
        dirmodel->remove(index);
    }
}

void trydefinition::Dialog::on_treeView_2_clicked(const QModelIndex &index)
{

    QString sPath = systemdirmodel->fileInfo(index).absolutePath();
    ui->listView->setRootIndex(systemfilemodel->setRootPath(sPath));

}
