/********************************************************************************
** Form generated from reading UI file 'tcpserver.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TCPSERVER_H
#define UI_TCPSERVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TcpServer
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TcpServer)
    {
        if (TcpServer->objectName().isEmpty())
            TcpServer->setObjectName(QString::fromUtf8("TcpServer"));
        TcpServer->resize(400, 300);
        menuBar = new QMenuBar(TcpServer);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        TcpServer->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TcpServer);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        TcpServer->addToolBar(mainToolBar);
        centralWidget = new QWidget(TcpServer);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        TcpServer->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(TcpServer);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        TcpServer->setStatusBar(statusBar);

        retranslateUi(TcpServer);

        QMetaObject::connectSlotsByName(TcpServer);
    } // setupUi

    void retranslateUi(QMainWindow *TcpServer)
    {
        TcpServer->setWindowTitle(QApplication::translate("TcpServer", "TcpServer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TcpServer: public Ui_TcpServer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TCPSERVER_H
