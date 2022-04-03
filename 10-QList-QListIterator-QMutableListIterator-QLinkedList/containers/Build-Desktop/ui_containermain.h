/********************************************************************************
** Form generated from reading UI file 'containermain.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTAINERMAIN_H
#define UI_CONTAINERMAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ContainerMain
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ContainerMain)
    {
        if (ContainerMain->objectName().isEmpty())
            ContainerMain->setObjectName(QString::fromUtf8("ContainerMain"));
        ContainerMain->resize(400, 300);
        menuBar = new QMenuBar(ContainerMain);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        ContainerMain->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ContainerMain);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        ContainerMain->addToolBar(mainToolBar);
        centralWidget = new QWidget(ContainerMain);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        ContainerMain->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(ContainerMain);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        ContainerMain->setStatusBar(statusBar);

        retranslateUi(ContainerMain);

        QMetaObject::connectSlotsByName(ContainerMain);
    } // setupUi

    void retranslateUi(QMainWindow *ContainerMain)
    {
        ContainerMain->setWindowTitle(QApplication::translate("ContainerMain", "ContainerMain", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ContainerMain: public Ui_ContainerMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTAINERMAIN_H
