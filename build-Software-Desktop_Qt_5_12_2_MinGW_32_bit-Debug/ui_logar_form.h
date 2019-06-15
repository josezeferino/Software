/********************************************************************************
** Form generated from reading UI file 'logar_form.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGAR_FORM_H
#define UI_LOGAR_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_logar_form
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *txt_username;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *txt_password;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btn_login;
    QPushButton *bnt_cancel;

    void setupUi(QDialog *logar_form)
    {
        if (logar_form->objectName().isEmpty())
            logar_form->setObjectName(QString::fromUtf8("logar_form"));
        logar_form->resize(400, 121);
        widget = new QWidget(logar_form);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 20, 381, 83));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        txt_username = new QLineEdit(widget);
        txt_username->setObjectName(QString::fromUtf8("txt_username"));

        horizontalLayout->addWidget(txt_username);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        txt_password = new QLineEdit(widget);
        txt_password->setObjectName(QString::fromUtf8("txt_password"));
        txt_password->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(txt_password);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        btn_login = new QPushButton(widget);
        btn_login->setObjectName(QString::fromUtf8("btn_login"));

        horizontalLayout_3->addWidget(btn_login);

        bnt_cancel = new QPushButton(widget);
        bnt_cancel->setObjectName(QString::fromUtf8("bnt_cancel"));

        horizontalLayout_3->addWidget(bnt_cancel);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(logar_form);

        QMetaObject::connectSlotsByName(logar_form);
    } // setupUi

    void retranslateUi(QDialog *logar_form)
    {
        logar_form->setWindowTitle(QApplication::translate("logar_form", "Dialog", nullptr));
        label->setText(QApplication::translate("logar_form", "Username:", nullptr));
        label_2->setText(QApplication::translate("logar_form", "Password:", nullptr));
        btn_login->setText(QApplication::translate("logar_form", "LOGIN", nullptr));
        bnt_cancel->setText(QApplication::translate("logar_form", "CANCEL", nullptr));
    } // retranslateUi

};

namespace Ui {
    class logar_form: public Ui_logar_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGAR_FORM_H
