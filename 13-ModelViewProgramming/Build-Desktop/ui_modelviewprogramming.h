/********************************************************************************
** Form generated from reading UI file 'modelviewprogramming.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODELVIEWPROGRAMMING_H
#define UI_MODELVIEWPROGRAMMING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ModelViewProgramming
{
public:
    QWidget *centralWidget;
    QListView *listView;
    QPushButton *Add;
    QPushButton *Insert;
    QPushButton *Delete;
    QComboBox *comboBox;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ModelViewProgramming)
    {
        if (ModelViewProgramming->objectName().isEmpty())
            ModelViewProgramming->setObjectName(QString::fromUtf8("ModelViewProgramming"));
        ModelViewProgramming->resize(367, 381);
        centralWidget = new QWidget(ModelViewProgramming);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        listView = new QListView(centralWidget);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setGeometry(QRect(0, 0, 361, 251));
        Add = new QPushButton(centralWidget);
        Add->setObjectName(QString::fromUtf8("Add"));
        Add->setGeometry(QRect(10, 260, 101, 31));
        Insert = new QPushButton(centralWidget);
        Insert->setObjectName(QString::fromUtf8("Insert"));
        Insert->setGeometry(QRect(120, 260, 111, 31));
        Delete = new QPushButton(centralWidget);
        Delete->setObjectName(QString::fromUtf8("Delete"));
        Delete->setGeometry(QRect(239, 260, 101, 31));
        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(10, 300, 331, 31));
        ModelViewProgramming->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ModelViewProgramming);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 367, 20));
        ModelViewProgramming->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ModelViewProgramming);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        ModelViewProgramming->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ModelViewProgramming);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        ModelViewProgramming->setStatusBar(statusBar);

        retranslateUi(ModelViewProgramming);

        QMetaObject::connectSlotsByName(ModelViewProgramming);
    } // setupUi

    void retranslateUi(QMainWindow *ModelViewProgramming)
    {
        ModelViewProgramming->setWindowTitle(QApplication::translate("ModelViewProgramming", "ModelViewProgramming", nullptr));
        Add->setText(QApplication::translate("ModelViewProgramming", "Add", nullptr));
        Insert->setText(QApplication::translate("ModelViewProgramming", "Insert", nullptr));
        Delete->setText(QApplication::translate("ModelViewProgramming", "Delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ModelViewProgramming: public Ui_ModelViewProgramming {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODELVIEWPROGRAMMING_H
