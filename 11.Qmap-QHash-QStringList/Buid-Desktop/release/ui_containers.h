/********************************************************************************
** Form generated from reading UI file 'containers.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTAINERS_H
#define UI_CONTAINERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Containers
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Containers)
    {
        if (Containers->objectName().isEmpty())
            Containers->setObjectName(QString::fromUtf8("Containers"));
        Containers->resize(400, 300);
        menuBar = new QMenuBar(Containers);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        Containers->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Containers);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Containers->addToolBar(mainToolBar);
        centralWidget = new QWidget(Containers);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        Containers->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Containers);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Containers->setStatusBar(statusBar);

        retranslateUi(Containers);

        QMetaObject::connectSlotsByName(Containers);
    } // setupUi

    void retranslateUi(QMainWindow *Containers)
    {
        Containers->setWindowTitle(QApplication::translate("Containers", "Containers", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Containers: public Ui_Containers {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTAINERS_H
