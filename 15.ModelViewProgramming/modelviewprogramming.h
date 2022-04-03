#ifndef MODELVIEWPROGRAMMING_H
#define MODELVIEWPROGRAMMING_H

#include <QMainWindow>
#include <QStringListModel>

namespace Ui {
class ModelViewProgramming;
}

class ModelViewProgramming : public QMainWindow
{
    Q_OBJECT

public:
    explicit ModelViewProgramming(QWidget *parent = 0);
    ~ModelViewProgramming();

private slots:
    void on_Add_clicked();
    void on_Insert_clicked();
    void on_Delete_clicked();

    void on_comboBox_currentIndexChanged(int index);

private:
    Ui::ModelViewProgramming *ui;
    QStringListModel *model;
};

#endif // MODELVIEWPROGRAMMING_H
