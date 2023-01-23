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

QT_BEGIN_NAMESPACE

class Ui_ItemModify
{
public:

    void setupUi(QDialog *ItemModify)
    {
        if (ItemModify->objectName().isEmpty())
            ItemModify->setObjectName("ItemModify");
        ItemModify->resize(400, 300);

        retranslateUi(ItemModify);

        QMetaObject::connectSlotsByName(ItemModify);
    } // setupUi

    void retranslateUi(QDialog *ItemModify)
    {
        ItemModify->setWindowTitle(QCoreApplication::translate("ItemModify", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ItemModify: public Ui_ItemModify {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ITEMMODIFY_H
