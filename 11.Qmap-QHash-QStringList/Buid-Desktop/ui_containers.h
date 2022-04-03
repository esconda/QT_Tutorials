/********************************************************************************
** Form generated from reading UI file 'containers.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTAINERS_H
#define UI_CONTAINERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
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
            Containers->setObjectName(QStringLiteral("Containers"));
        Containers->resize(400, 300);
        menuBar = new QMenuBar(Containers);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        Containers->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Containers);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Containers->addToolBar(mainToolBar);
        centralWidget = new QWidget(Containers);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Containers->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Containers);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Containers->setStatusBar(statusBar);

        retranslateUi(Containers);

        QMetaObject::connectSlotsByName(Containers);
    } // setupUi

    void retranslateUi(QMainWindow *Containers)
    {
        Containers->setWindowTitle(QApplication::translate("Containers", "Containers", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Containers: public Ui_Containers {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTAINERS_H
