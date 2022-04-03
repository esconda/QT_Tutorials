/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeView>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QTreeView *treeView;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QFrame *line;
    QLabel *label;
    QTreeView *treeView_2;
    QListView *listView;
    QLabel *label_2;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(824, 347);
        treeView = new QTreeView(Dialog);
        treeView->setObjectName(QString::fromUtf8("treeView"));
        treeView->setGeometry(QRect(15, 90, 291, 192));
        pushButton = new QPushButton(Dialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(50, 300, 80, 21));
        pushButton_2 = new QPushButton(Dialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(180, 300, 80, 21));
        line = new QFrame(Dialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(343, 20, 20, 301));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        label = new QLabel(Dialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 50, 121, 16));
        treeView_2 = new QTreeView(Dialog);
        treeView_2->setObjectName(QString::fromUtf8("treeView_2"));
        treeView_2->setGeometry(QRect(370, 90, 256, 192));
        listView = new QListView(Dialog);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setGeometry(QRect(630, 90, 171, 192));
        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(510, 50, 161, 16));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("Dialog", "Make Dir", nullptr));
        pushButton_2->setText(QApplication::translate("Dialog", "Delete", nullptr));
        label->setText(QApplication::translate("Dialog", "QDIR MODEL EXAMPLE", nullptr));
        label_2->setText(QApplication::translate("Dialog", "QFILE SYSTEM MODEL EXAMPLE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
