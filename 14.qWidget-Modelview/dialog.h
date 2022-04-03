#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QObject>
#include <QtCore>
#include <QtGui>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

    QStringListModel *model;

    private slots:

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_delete_2_clicked();

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
