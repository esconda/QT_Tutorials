#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtGui>
#include <QtCore>
#include <QtSql/QSql>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlDriver>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlQueryModel>
#include <QtSql/QSqlTableModel>
#include <QtSql/QSqlRelationalTableModel>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_tableView_clicked(const QModelIndex &index);

private:
    Ui::MainWindow *ui;
    QSqlQueryModel *model1;
    QSqlTableModel *model2;
    QSqlRelationalTableModel *modelrelational;
    QSqlDatabase db;
    QSqlQuery qry;
};

#endif // MAINWINDOW_H
