/********************************************************************************
** Form generated from reading UI file 'sales_form.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SALES_FORM_H
#define UI_SALES_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_sales_form
{
public:

    void setupUi(QDialog *sales_form)
    {
        if (sales_form->objectName().isEmpty())
            sales_form->setObjectName(QString::fromUtf8("sales_form"));
        sales_form->resize(400, 300);

        retranslateUi(sales_form);

        QMetaObject::connectSlotsByName(sales_form);
    } // setupUi

    void retranslateUi(QDialog *sales_form)
    {
        sales_form->setWindowTitle(QApplication::translate("sales_form", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sales_form: public Ui_sales_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SALES_FORM_H
