#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtAlgorithms>
#include <QList>
#include <QDebug>
#include <QVector>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    QList<int> mList;

protected:
    void qsortAlgorithm(QList<int> pList);
    void qcopyAlgorithm();
    void qfillAlgorithm();
    void qfindAlgorithm(QList<int> pList);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
