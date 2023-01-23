/********************************************************************************
** Form generated from reading UI file 'itemmodify.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ITEMMODIFY_H
#define UI_ITEMMODIFY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ItemModify
{
public:
    QLabel *labelStatus;
    QWidget *widget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelCategory;
    QLineEdit *lineEditCategory;
    QHBoxLayout *horizontalLayout;
    QLabel *labelName;
    QLineEdit *lineEditName;
    QHBoxLayout *horizontalLayout_5;
    QLabel *labelPrice;
    QLineEdit *lineEditPrice;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelCode;
    QLineEdit *lineEditCode;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labelStock;
    QLineEdit *lineEditStock;
    QHBoxLayout *horizontalLayout_6;
    QLabel *labelPassword;
    QLineEdit *lineEditPassword;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *pushButtonSave;
    QPushButton *pushButtonUpdate;
    QPushButton *pushButtonDelete;

    void setupUi(QDialog *ItemModify)
    {
        if (ItemModify->objectName().isEmpty())
            ItemModify->setObjectName("ItemModify");
        ItemModify->resize(307, 394);
        labelStatus = new QLabel(ItemModify);
        labelStatus->setObjectName("labelStatus");
        labelStatus->setGeometry(QRect(20, 320, 221, 41));
        widget = new QWidget(ItemModify);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(30, 51, 200, 217));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        labelCategory = new QLabel(widget);
        labelCategory->setObjectName("labelCategory");

        horizontalLayout_3->addWidget(labelCategory);

        lineEditCategory = new QLineEdit(widget);
        lineEditCategory->setObjectName("lineEditCategory");

        horizontalLayout_3->addWidget(lineEditCategory);


        gridLayout->addLayout(horizontalLayout_3, 3, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        labelName = new QLabel(widget);
        labelName->setObjectName("labelName");

        horizontalLayout->addWidget(labelName);

        lineEditName = new QLineEdit(widget);
        lineEditName->setObjectName("lineEditName");

        horizontalLayout->addWidget(lineEditName);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        labelPrice = new QLabel(widget);
        labelPrice->setObjectName("labelPrice");

        horizontalLayout_5->addWidget(labelPrice);

        lineEditPrice = new QLineEdit(widget);
        lineEditPrice->setObjectName("lineEditPrice");

        horizontalLayout_5->addWidget(lineEditPrice);


        gridLayout->addLayout(horizontalLayout_5, 5, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        labelCode = new QLabel(widget);
        labelCode->setObjectName("labelCode");

        horizontalLayout_2->addWidget(labelCode);

        lineEditCode = new QLineEdit(widget);
        lineEditCode->setObjectName("lineEditCode");

        horizontalLayout_2->addWidget(lineEditCode);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        labelStock = new QLabel(widget);
        labelStock->setObjectName("labelStock");

        horizontalLayout_4->addWidget(labelStock);

        lineEditStock = new QLineEdit(widget);
        lineEditStock->setObjectName("lineEditStock");

        horizontalLayout_4->addWidget(lineEditStock);


        gridLayout->addLayout(horizontalLayout_4, 4, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        labelPassword = new QLabel(widget);
        labelPassword->setObjectName("labelPassword");

        horizontalLayout_6->addWidget(labelPassword);

        lineEditPassword = new QLineEdit(widget);
        lineEditPassword->setObjectName("lineEditPassword");

        horizontalLayout_6->addWidget(lineEditPassword);


        gridLayout->addLayout(horizontalLayout_6, 2, 0, 1, 1);

        widget1 = new QWidget(ItemModify);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(30, 280, 201, 26));
        horizontalLayout_7 = new QHBoxLayout(widget1);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        pushButtonSave = new QPushButton(widget1);
        pushButtonSave->setObjectName("pushButtonSave");

        horizontalLayout_7->addWidget(pushButtonSave);

        pushButtonUpdate = new QPushButton(widget1);
        pushButtonUpdate->setObjectName("pushButtonUpdate");

        horizontalLayout_7->addWidget(pushButtonUpdate);

        pushButtonDelete = new QPushButton(widget1);
        pushButtonDelete->setObjectName("pushButtonDelete");

        horizontalLayout_7->addWidget(pushButtonDelete);

        QWidget::setTabOrder(lineEditName, lineEditCode);
        QWidget::setTabOrder(lineEditCode, lineEditPassword);
        QWidget::setTabOrder(lineEditPassword, lineEditCategory);
        QWidget::setTabOrder(lineEditCategory, lineEditStock);
        QWidget::setTabOrder(lineEditStock, lineEditPrice);
        QWidget::setTabOrder(lineEditPrice, pushButtonSave);
        QWidget::setTabOrder(pushButtonSave, pushButtonUpdate);

        retranslateUi(ItemModify);

        QMetaObject::connectSlotsByName(ItemModify);
    } // setupUi

    void retranslateUi(QDialog *ItemModify)
    {
        ItemModify->setWindowTitle(QCoreApplication::translate("ItemModify", "Dialog", nullptr));
        labelStatus->setText(QCoreApplication::translate("ItemModify", "Status", nullptr));
        labelCategory->setText(QCoreApplication::translate("ItemModify", "Category", nullptr));
        labelName->setText(QCoreApplication::translate("ItemModify", "Name      ", nullptr));
        labelPrice->setText(QCoreApplication::translate("ItemModify", "Price       ", nullptr));
        labelCode->setText(QCoreApplication::translate("ItemModify", "Code       ", nullptr));
        labelStock->setText(QCoreApplication::translate("ItemModify", "Stock      ", nullptr));
        labelPassword->setText(QCoreApplication::translate("ItemModify", "Password", nullptr));
        pushButtonSave->setText(QCoreApplication::translate("ItemModify", "Save", nullptr));
        pushButtonUpdate->setText(QCoreApplication::translate("ItemModify", "Update", nullptr));
        pushButtonDelete->setText(QCoreApplication::translate("ItemModify", "Delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ItemModify: public Ui_ItemModify {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ITEMMODIFY_H
