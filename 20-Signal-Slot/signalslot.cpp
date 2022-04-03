#include "signalslot.h"
#include "ui_signalslot.h"

SignalSlot::SignalSlot(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SignalSlot)
{
    ui->setupUi(this);

    //TWO DIFFERENT APROACH
    connect(this,&SignalSlot::emitsignal,this,&SignalSlot::slotcall);
    connect(this,SIGNAL(emitsignal(QString)),this,SLOT(slotcall(QString)));

    callSignalSlot();

}

SignalSlot::~SignalSlot()
{
    delete ui;
}

void SignalSlot::slotcall(QString info)
{
    QString tinfo = info;
    qDebug()<<tinfo;
}

void SignalSlot::callSignalSlot()
{
    emitsignal("Information is called");
}
