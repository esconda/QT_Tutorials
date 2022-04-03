/********************************************************************************
** Form generated from reading UI file 'htmlnetworking.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HTMLNETWORKING_H
#define UI_HTMLNETWORKING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HtmlNetworking
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *HtmlNetworking)
    {
        if (HtmlNetworking->objectName().isEmpty())
            HtmlNetworking->setObjectName(QString::fromUtf8("HtmlNetworking"));
        HtmlNetworking->resize(400, 300);
        menuBar = new QMenuBar(HtmlNetworking);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        HtmlNetworking->setMenuBar(menuBar);
        mainToolBar = new QToolBar(HtmlNetworking);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        HtmlNetworking->addToolBar(mainToolBar);
        centralWidget = new QWidget(HtmlNetworking);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        HtmlNetworking->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(HtmlNetworking);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        HtmlNetworking->setStatusBar(statusBar);

        retranslateUi(HtmlNetworking);

        QMetaObject::connectSlotsByName(HtmlNetworking);
    } // setupUi

    void retranslateUi(QMainWindow *HtmlNetworking)
    {
        HtmlNetworking->setWindowTitle(QApplication::translate("HtmlNetworking", "HtmlNetworking", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HtmlNetworking: public Ui_HtmlNetworking {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HTMLNETWORKING_H
