#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtCore>
#include <QtGui>
#include <QScrollBar>
#include <delegate.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QStandardItemModel *model;
    Delegate *mydelegate;

    QScrollBar *verticalScroll;
     QScrollBar *horizontalScroll;
};

#endif // MAINWINDOW_H
