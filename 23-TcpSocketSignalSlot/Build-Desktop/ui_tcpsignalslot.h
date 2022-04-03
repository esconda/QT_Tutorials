/********************************************************************************
** Form generated from reading UI file 'tcpsignalslot.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TCPSIGNALSLOT_H
#define UI_TCPSIGNALSLOT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TcpSignalSlot
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TcpSignalSlot)
    {
        if (TcpSignalSlot->objectName().isEmpty())
            TcpSignalSlot->setObjectName(QString::fromUtf8("TcpSignalSlot"));
        TcpSignalSlot->resize(400, 300);
        menuBar = new QMenuBar(TcpSignalSlot);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        TcpSignalSlot->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TcpSignalSlot);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        TcpSignalSlot->addToolBar(mainToolBar);
        centralWidget = new QWidget(TcpSignalSlot);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        TcpSignalSlot->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(TcpSignalSlot);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        TcpSignalSlot->setStatusBar(statusBar);

        retranslateUi(TcpSignalSlot);

        QMetaObject::connectSlotsByName(TcpSignalSlot);
    } // setupUi

    void retranslateUi(QMainWindow *TcpSignalSlot)
    {
        TcpSignalSlot->setWindowTitle(QApplication::translate("TcpSignalSlot", "TcpSignalSlot", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TcpSignalSlot: public Ui_TcpSignalSlot {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TCPSIGNALSLOT_H
