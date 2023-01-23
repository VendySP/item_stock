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
    QHBoxLayout *horizontalLayout_7;
    QPushButton *pushButtonAdd;
    QPushButton *pushButtonUpdate;
    QPushButton *pushButtonDelete;
    QWidget *widget1;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labelName;
    QLineEdit *lineEditName;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelCode;
    QLineEdit *lineEditCode;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelCategory;
    QLineEdit *lineEditCategory;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labelStock;
    QLineEdit *lineEditStock;
    QHBoxLayout *horizontalLayout_5;
    QLabel *labelPrice;
    QLineEdit *lineEditPrice;

    void setupUi(QDialog *ItemModify)
    {
        if (ItemModify->objectName().isEmpty())
            ItemModify->setObjectName("ItemModify");
        ItemModify->resize(307, 394);
        labelStatus = new QLabel(ItemModify);
        labelStatus->setObjectName("labelStatus");
        labelStatus->setGeometry(QRect(30, 300, 221, 41));
        widget = new QWidget(ItemModify);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(30, 250, 256, 31));
        horizontalLayout_7 = new QHBoxLayout(widget);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        pushButtonAdd = new QPushButton(widget);
        pushButtonAdd->setObjectName("pushButtonAdd");

        horizontalLayout_7->addWidget(pushButtonAdd);

        pushButtonUpdate = new QPushButton(widget);
        pushButtonUpdate->setObjectName("pushButtonUpdate");

        horizontalLayout_7->addWidget(pushButtonUpdate);

        pushButtonDelete = new QPushButton(widget);
        pushButtonDelete->setObjectName("pushButtonDelete");

        horizontalLayout_7->addWidget(pushButtonDelete);

        widget1 = new QWidget(ItemModify);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(31, 52, 200, 180));
        gridLayout = new QGridLayout(widget1);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        labelName = new QLabel(widget1);
        labelName->setObjectName("labelName");

        horizontalLayout->addWidget(labelName);

        lineEditName = new QLineEdit(widget1);
        lineEditName->setObjectName("lineEditName");

        horizontalLayout->addWidget(lineEditName);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        labelCode = new QLabel(widget1);
        labelCode->setObjectName("labelCode");

        horizontalLayout_2->addWidget(labelCode);

        lineEditCode = new QLineEdit(widget1);
        lineEditCode->setObjectName("lineEditCode");

        horizontalLayout_2->addWidget(lineEditCode);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        labelCategory = new QLabel(widget1);
        labelCategory->setObjectName("labelCategory");

        horizontalLayout_3->addWidget(labelCategory);

        lineEditCategory = new QLineEdit(widget1);
        lineEditCategory->setObjectName("lineEditCategory");

        horizontalLayout_3->addWidget(lineEditCategory);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        labelStock = new QLabel(widget1);
        labelStock->setObjectName("labelStock");

        horizontalLayout_4->addWidget(labelStock);

        lineEditStock = new QLineEdit(widget1);
        lineEditStock->setObjectName("lineEditStock");

        horizontalLayout_4->addWidget(lineEditStock);


        gridLayout->addLayout(horizontalLayout_4, 3, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        labelPrice = new QLabel(widget1);
        labelPrice->setObjectName("labelPrice");

        horizontalLayout_5->addWidget(labelPrice);

        lineEditPrice = new QLineEdit(widget1);
        lineEditPrice->setObjectName("lineEditPrice");

        horizontalLayout_5->addWidget(lineEditPrice);


        gridLayout->addLayout(horizontalLayout_5, 4, 0, 1, 1);

        QWidget::setTabOrder(lineEditName, lineEditCode);
        QWidget::setTabOrder(lineEditCode, lineEditCategory);
        QWidget::setTabOrder(lineEditCategory, lineEditStock);
        QWidget::setTabOrder(lineEditStock, lineEditPrice);
        QWidget::setTabOrder(lineEditPrice, pushButtonAdd);
        QWidget::setTabOrder(pushButtonAdd, pushButtonUpdate);
        QWidget::setTabOrder(pushButtonUpdate, pushButtonDelete);

        retranslateUi(ItemModify);

        QMetaObject::connectSlotsByName(ItemModify);
    } // setupUi

    void retranslateUi(QDialog *ItemModify)
    {
        ItemModify->setWindowTitle(QCoreApplication::translate("ItemModify", "Dialog", nullptr));
        labelStatus->setText(QCoreApplication::translate("ItemModify", "Status", nullptr));
        pushButtonAdd->setText(QCoreApplication::translate("ItemModify", "Add", nullptr));
        pushButtonUpdate->setText(QCoreApplication::translate("ItemModify", "Update", nullptr));
        pushButtonDelete->setText(QCoreApplication::translate("ItemModify", "Delete", nullptr));
        labelName->setText(QCoreApplication::translate("ItemModify", "Name      ", nullptr));
        labelCode->setText(QCoreApplication::translate("ItemModify", "Code       ", nullptr));
        labelCategory->setText(QCoreApplication::translate("ItemModify", "Category ", nullptr));
        labelStock->setText(QCoreApplication::translate("ItemModify", "Stock       ", nullptr));
        labelPrice->setText(QCoreApplication::translate("ItemModify", "Price        ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ItemModify: public Ui_ItemModify {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ITEMMODIFY_H
