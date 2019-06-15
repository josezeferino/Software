/********************************************************************************
** Form generated from reading UI file 'main_form.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_FORM_H
#define UI_MAIN_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_main_form
{
public:
    QAction *actionEstoque;
    QAction *actionFuncionarios;
    QAction *actionVendas;
    QAction *actionSair;
    QAction *actionSobre;
    QWidget *centralWidget;
    QPushButton *btn_block;
    QPushButton *pushButton_2;
    QLabel *lb_name;
    QMenuBar *menuBar;
    QMenu *menuGest_o;
    QMenu *menuSistema;
    QMenu *menuSair;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *main_form)
    {
        if (main_form->objectName().isEmpty())
            main_form->setObjectName(QString::fromUtf8("main_form"));
        main_form->resize(400, 300);
        actionEstoque = new QAction(main_form);
        actionEstoque->setObjectName(QString::fromUtf8("actionEstoque"));
        actionFuncionarios = new QAction(main_form);
        actionFuncionarios->setObjectName(QString::fromUtf8("actionFuncionarios"));
        actionVendas = new QAction(main_form);
        actionVendas->setObjectName(QString::fromUtf8("actionVendas"));
        actionSair = new QAction(main_form);
        actionSair->setObjectName(QString::fromUtf8("actionSair"));
        actionSobre = new QAction(main_form);
        actionSobre->setObjectName(QString::fromUtf8("actionSobre"));
        centralWidget = new QWidget(main_form);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        btn_block = new QPushButton(centralWidget);
        btn_block->setObjectName(QString::fromUtf8("btn_block"));
        btn_block->setGeometry(QRect(20, 210, 32, 32));
        btn_block->setFlat(true);
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 10, 91, 31));
        pushButton_2->setStyleSheet(QString::fromUtf8("background:#167316;\n"
"color:#ffffff;\n"
"font-size:16pt;\n"
"border:none;\n"
"border-radius:10px;"));
        lb_name = new QLabel(centralWidget);
        lb_name->setObjectName(QString::fromUtf8("lb_name"));
        lb_name->setGeometry(QRect(70, 220, 81, 16));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lb_name->sizePolicy().hasHeightForWidth());
        lb_name->setSizePolicy(sizePolicy);
        main_form->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(main_form);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 21));
        menuGest_o = new QMenu(menuBar);
        menuGest_o->setObjectName(QString::fromUtf8("menuGest_o"));
        menuSistema = new QMenu(menuBar);
        menuSistema->setObjectName(QString::fromUtf8("menuSistema"));
        menuSair = new QMenu(menuBar);
        menuSair->setObjectName(QString::fromUtf8("menuSair"));
        main_form->setMenuBar(menuBar);
        mainToolBar = new QToolBar(main_form);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        main_form->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(main_form);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        main_form->setStatusBar(statusBar);

        menuBar->addAction(menuGest_o->menuAction());
        menuBar->addAction(menuSistema->menuAction());
        menuBar->addAction(menuSair->menuAction());
        menuGest_o->addAction(actionEstoque);
        menuGest_o->addAction(actionFuncionarios);
        menuGest_o->addAction(actionVendas);
        menuSistema->addAction(actionSobre);

        retranslateUi(main_form);

        QMetaObject::connectSlotsByName(main_form);
    } // setupUi

    void retranslateUi(QMainWindow *main_form)
    {
        main_form->setWindowTitle(QApplication::translate("main_form", "main_form", nullptr));
        actionEstoque->setText(QApplication::translate("main_form", "Estoque", nullptr));
        actionFuncionarios->setText(QApplication::translate("main_form", "Funcionarios", nullptr));
        actionVendas->setText(QApplication::translate("main_form", "Vendas", nullptr));
        actionSair->setText(QApplication::translate("main_form", "Sair", nullptr));
        actionSobre->setText(QApplication::translate("main_form", "Sobre", nullptr));
        btn_block->setText(QApplication::translate("main_form", "BBBBB", nullptr));
        pushButton_2->setText(QApplication::translate("main_form", "Venda", nullptr));
        lb_name->setText(QApplication::translate("main_form", "No login", nullptr));
        menuGest_o->setTitle(QApplication::translate("main_form", "Gest\303\243o", nullptr));
        menuSistema->setTitle(QApplication::translate("main_form", "Sistema", nullptr));
        menuSair->setTitle(QApplication::translate("main_form", "Sair", nullptr));
    } // retranslateUi

};

namespace Ui {
    class main_form: public Ui_main_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_FORM_H
