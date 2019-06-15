/********************************************************************************
** Form generated from reading UI file 'officials_form.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OFFICIALS_FORM_H
#define UI_OFFICIALS_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_officials_form
{
public:

    void setupUi(QDialog *officials_form)
    {
        if (officials_form->objectName().isEmpty())
            officials_form->setObjectName(QString::fromUtf8("officials_form"));
        officials_form->resize(400, 300);

        retranslateUi(officials_form);

        QMetaObject::connectSlotsByName(officials_form);
    } // setupUi

    void retranslateUi(QDialog *officials_form)
    {
        officials_form->setWindowTitle(QApplication::translate("officials_form", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class officials_form: public Ui_officials_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OFFICIALS_FORM_H
