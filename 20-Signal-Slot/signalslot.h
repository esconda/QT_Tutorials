#ifndef SIGNALSLOT_H
#define SIGNALSLOT_H

#include <QMainWindow>
#include <QString>
#include <QDebug>

namespace Ui {
class SignalSlot;
}

class SignalSlot : public QMainWindow
{
    Q_OBJECT

public:
    explicit SignalSlot(QWidget *parent = nullptr);
    ~SignalSlot();

public slots:
    void slotcall(QString info);

signals:
    void emitsignal(QString info);

private:
    Ui::SignalSlot *ui;
    void callSignalSlot();
};

#endif // SIGNALSLOT_H
