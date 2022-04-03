#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QtCore>
#include <QtGui>
#include <QDirModel>
#include <QFileSystemModel>
#include <QInputDialog>

namespace Ui {
class Dialog;
}

namespace trydefinition{
class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr) noexcept;
    ~Dialog();
    static Dialog *instance();

    void initDirmodel();
    void initSystemDirModelOne(const QString &path);
    void initSystemDirModelTwo(const QString &path);
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_treeView_2_clicked(const QModelIndex &index);

private:
    Ui::Dialog *ui;
    QDirModel *dirmodel;

    QFileSystemModel *systemdirmodel;
    QFileSystemModel *systemfilemodel;
};
}
#endif // DIALOG_H
