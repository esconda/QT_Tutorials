#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QObject>
#include <QTimer>
#include <QtDebug>
#include <QtConcurrent/QtConcurrent>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QTimer *waittimer = nullptr;
    bool aborted = false;
    void Qtimerwaitfunction();

public slots:
    void timeoutfunction();

private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
