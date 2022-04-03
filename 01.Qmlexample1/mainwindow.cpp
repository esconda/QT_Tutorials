
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->quickWidget->setSource(QUrl("qrc:/Mainqml.qml")); //Load qml file
    ui->quickWidget->show();


    ui->quickWidget->engine()->rootContext()->setContextProperty("mainwindowcpp",this);//mainwindow functions can be called by qml with this line
    item = qobject_cast<QObject*>(ui->quickWidget->rootObject()); //Reach to "Item" object in qml which is root
    showimageqml =qobject_cast<QObject*>(ui->quickWidget->rootObject()->findChild<QObject*>("showimage"));//Reach to the qml object name which is show image

    QObject::connect(item, SIGNAL(qmlSignal(bool)),this, SLOT(cppcheckboxstatus(bool))); //Signal and slot listen when clicked button in qml

}
bool MainWindow::cppcheckboxstatus(bool checkbox)
{
        mybooleancheckbox = checkbox;
    }
MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::showimage(){

    imgfilename = QFileDialog::getOpenFileName(this,
                                   tr("Open Image File"), "",
                                   tr("All Files (*);;Image Type (*.png);;Image Type (*.jpg)"));

    qmlimgfilename = "file:///"+imgfilename;//file should be added to show image


    if(showimageqml)//if showimage is available in qml then continue
        showimageqml->setProperty("source",qmlimgfilename); //add image to qml imageview adding filename to source


    //OPENCV COMMANDS
//    openedimg = cv::imread(imgfilename.toStdString());
//    cv::imshow("OpenedImage",openedimg);
//    cv::waitKey(0);
}

void MainWindow::opencamerathread(){
    Cameracapture.open(0);//Open cam

    while(Cameracapture.isOpened()){

        Cameracapture.read(openedimg);
        cv::cvtColor(openedimg,openedimg,cv::COLOR_BGR2GRAY);

        cv::imshow("Mysource",openedimg);

        if (cv::waitKey(33)==27){

            break;}

}
    Cameracapture.release();
    cv::destroyAllWindows();
}

void MainWindow::opencamera(){
  QtConcurrent::run(this,&MainWindow::opencamerathread);//Open camera with thread , because otherwise it is not possible to click functions
}


void MainWindow::showmessage(){


    if(mybooleancheckbox){
    QMessageBox::information(this,"My İnformation","Function is called correctly,checkbox is true and clicked");}

    else{
    QMessageBox::information(this,"My İnformation","Checbox is not clicked , it is false");
    }
 //std::cout<<mybooleancheckbox<<endl;

}
