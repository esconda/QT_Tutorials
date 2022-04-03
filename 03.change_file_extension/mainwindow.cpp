#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    int result;
    filedirectory = QFileDialog::getExistingDirectory(this, tr("Open Directory"),
                                                 "/home", QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks);
    //cout<<(filedirectory+"/").toStdString()<<endl;
    QDir directory(filedirectory);
    filename = directory.entryList(QStringList() << "*.JPG"<<"*.jpg",QDir::Files );
    foreach(QString imagefile, filename){

        if(imagefile.contains(".jpg")){

           finalname = imagefile.remove(".jpg")+".png";

           QFile::rename((filedirectory+"/"+imagefile+".jpg").toStdString().c_str(),(filedirectory+"/"+finalname).toStdString().c_str());
            // rename(imagefile.toStdString().c_str(),finalname.toStdString().c_str());

        }

        else{

           finalname = imagefile.remove(".JPG")+".png";

           QFile::rename((filedirectory+"/"+imagefile+".JPG").toStdString().c_str(),(filedirectory+"/"+finalname).toStdString().c_str());

        }
    }
}
