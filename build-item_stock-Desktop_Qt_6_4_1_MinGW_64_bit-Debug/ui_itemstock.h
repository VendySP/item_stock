/********************************************************************************
** Form generated from reading UI file 'itemstock.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ITEMSTOCK_H
#define UI_ITEMSTOCK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ItemStock
{
public:
    QWidget *centralwidget;
    QLabel *labelStatus;
    QGroupBox *groupBoxLogin;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labelItemCode;
    QLineEdit *lineEditItemCode;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelItemCode_2;
    QLineEdit *lineEditPassword;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonLogin;
    QSpacerItem *horizontalSpacer_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ItemStock)
    {
        if (ItemStock->objectName().isEmpty())
            ItemStock->setObjectName("ItemStock");
        ItemStock->resize(800, 600);
        centralwidget = new QWidget(ItemStock);
        centralwidget->setObjectName("centralwidget");
        labelStatus = new QLabel(centralwidget);
        labelStatus->setObjectName("labelStatus");
        labelStatus->setGeometry(QRect(40, 240, 361, 71));
        groupBoxLogin = new QGroupBox(centralwidget);
        groupBoxLogin->setObjectName("groupBoxLogin");
        groupBoxLogin->setGeometry(QRect(40, 50, 361, 154));
        gridLayout = new QGridLayout(groupBoxLogin);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        labelItemCode = new QLabel(groupBoxLogin);
        labelItemCode->setObjectName("labelItemCode");

        horizontalLayout->addWidget(labelItemCode);

        lineEditItemCode = new QLineEdit(groupBoxLogin);
        lineEditItemCode->setObjectName("lineEditItemCode");

        horizontalLayout->addWidget(lineEditItemCode);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        labelItemCode_2 = new QLabel(groupBoxLogin);
        labelItemCode_2->setObjectName("labelItemCode_2");

        horizontalLayout_2->addWidget(labelItemCode_2);

        lineEditPassword = new QLineEdit(groupBoxLogin);
        lineEditPassword->setObjectName("lineEditPassword");

        horizontalLayout_2->addWidget(lineEditPassword);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 3);

        horizontalSpacer = new QSpacerItem(117, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 0, 1, 1);

        pushButtonLogin = new QPushButton(groupBoxLogin);
        pushButtonLogin->setObjectName("pushButtonLogin");

        gridLayout->addWidget(pushButtonLogin, 2, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(116, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 2, 1, 1);

        ItemStock->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ItemStock);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        ItemStock->setMenuBar(menubar);
        statusbar = new QStatusBar(ItemStock);
        statusbar->setObjectName("statusbar");
        ItemStock->setStatusBar(statusbar);

        retranslateUi(ItemStock);

        QMetaObject::connectSlotsByName(ItemStock);
    } // setupUi

    void retranslateUi(QMainWindow *ItemStock)
    {
        ItemStock->setWindowTitle(QCoreApplication::translate("ItemStock", "ItemStock", nullptr));
        labelStatus->setText(QCoreApplication::translate("ItemStock", "Status", nullptr));
        groupBoxLogin->setTitle(QCoreApplication::translate("ItemStock", "Log in to change Item in database", nullptr));
        labelItemCode->setText(QCoreApplication::translate("ItemStock", "Item Code", nullptr));
        labelItemCode_2->setText(QCoreApplication::translate("ItemStock", "Password  ", nullptr));
        pushButtonLogin->setText(QCoreApplication::translate("ItemStock", "Log in", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ItemStock: public Ui_ItemStock {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ITEMSTOCK_H
