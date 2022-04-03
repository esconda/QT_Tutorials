#ifndef CONTAINERS_H
#define CONTAINERS_H

#include <QMainWindow>
#include <QDebug>
#include <QMap>
#include <QHash>
#include <QStringList>

namespace Ui {
class Containers;
}

class Containers : public QMainWindow
{
    Q_OBJECT

public:
    explicit Containers(QWidget *parent = 0);
    ~Containers();

    QMap<int , QString> mEmployees;
    QHash<int , QString> mEmployeeshash;
    QStringList mStringList;

protected:
    void qmapExample();
    void qhashExample();
    void qstringListExample();

private:
    Ui::Containers *ui;
};

#endif // CONTAINERS_H
