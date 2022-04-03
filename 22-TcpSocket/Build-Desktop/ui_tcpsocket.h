/********************************************************************************
** Form generated from reading UI file 'tcpsocket.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TCPSOCKET_H
#define UI_TCPSOCKET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TcpSocket
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TcpSocket)
    {
        if (TcpSocket->objectName().isEmpty())
            TcpSocket->setObjectName(QString::fromUtf8("TcpSocket"));
        TcpSocket->resize(400, 300);
        menuBar = new QMenuBar(TcpSocket);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        TcpSocket->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TcpSocket);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        TcpSocket->addToolBar(mainToolBar);
        centralWidget = new QWidget(TcpSocket);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        TcpSocket->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(TcpSocket);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        TcpSocket->setStatusBar(statusBar);

        retranslateUi(TcpSocket);

        QMetaObject::connectSlotsByName(TcpSocket);
    } // setupUi

    void retranslateUi(QMainWindow *TcpSocket)
    {
        TcpSocket->setWindowTitle(QApplication::translate("TcpSocket", "TcpSocket", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TcpSocket: public Ui_TcpSocket {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TCPSOCKET_H
