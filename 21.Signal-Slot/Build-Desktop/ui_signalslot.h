/********************************************************************************
** Form generated from reading UI file 'signalslot.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNALSLOT_H
#define UI_SIGNALSLOT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SignalSlot
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *SignalSlot)
    {
        if (SignalSlot->objectName().isEmpty())
            SignalSlot->setObjectName(QString::fromUtf8("SignalSlot"));
        SignalSlot->resize(400, 300);
        menuBar = new QMenuBar(SignalSlot);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        SignalSlot->setMenuBar(menuBar);
        mainToolBar = new QToolBar(SignalSlot);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        SignalSlot->addToolBar(mainToolBar);
        centralWidget = new QWidget(SignalSlot);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        SignalSlot->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(SignalSlot);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        SignalSlot->setStatusBar(statusBar);

        retranslateUi(SignalSlot);

        QMetaObject::connectSlotsByName(SignalSlot);
    } // setupUi

    void retranslateUi(QMainWindow *SignalSlot)
    {
        SignalSlot->setWindowTitle(QApplication::translate("SignalSlot", "SignalSlot", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SignalSlot: public Ui_SignalSlot {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNALSLOT_H
