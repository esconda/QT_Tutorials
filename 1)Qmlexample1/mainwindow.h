#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QQmlEngine>
#include <QQmlContext>
#include <QMessageBox>
#include <QQuickItem>
#include <QQuickView>
#include <QFileDialog>
#include <iostream>
#include <opencv2/imgcodecs/imgcodecs.hpp>
#include <opencv2/video/video.hpp>
#include <opencv2/videoio/videoio.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/features2d/features2d.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <QtConcurrent/QtConcurrent>
using namespace std;
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    //MainWindow *mainwindow = new MainWindow();
    //Calling function by qml
    Q_INVOKABLE void showmessage(); //Q_INVOKABLE is necessary for calling function by qml
    Q_INVOKABLE void showimage();
    Q_INVOKABLE void opencamera();


    QObject *item;
    cv::VideoCapture Cameracapture;
    QObject *showimageqml;
    bool mybooleancheckbox =false;
    QString imgfilename;
    QString qmlimgfilename;
    cv::Mat openedimg;
    QImage imgIn;
    QImage dest;


public slots:
    bool cppcheckboxstatus(bool checkbox);

    void opencamerathread();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
