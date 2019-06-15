/********************************************************************************
** Form generated from reading UI file 'stock_form.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STOCK_FORM_H
#define UI_STOCK_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_stock_form
{
public:
    QTabWidget *tabWidget;
    QWidget *tab_newgoods;
    QLineEdit *txt_fornecedor;
    QLabel *label_2;
    QLabel *label_4;
    QLineEdit *txt_mercadoria;
    QLabel *label_3;
    QLabel *label;
    QLineEdit *txt_codmercadoria;
    QLabel *label_5;
    QLineEdit *txt_valorcompra;
    QLineEdit *txt_estoque;
    QLabel *label_6;
    QLineEdit *txt_valorvenda;
    QPushButton *btn_salvar;
    QPushButton *btn_novo;
    QWidget *tab_mercadorias;
    QLineEdit *txt_codmercaodiras;
    QLineEdit *txt_mercadorias;
    QLineEdit *txt_quantidade;
    QLineEdit *txt_valordecomprar;
    QLineEdit *txt_valordevendas;
    QLineEdit *txt_desfornecedor;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QPushButton *btn_gravar;
    QPushButton *btn_excluir;
    QTableWidget *tw_mercacorias;
    QGroupBox *groupBox;
    QRadioButton *rb_codigo;
    QRadioButton *rb_mercadorias;
    QLineEdit *txt_pesquisar;
    QLabel *label_13;
    QPushButton *btn_pesquisar;

    void setupUi(QDialog *stock_form)
    {
        if (stock_form->objectName().isEmpty())
            stock_form->setObjectName(QString::fromUtf8("stock_form"));
        stock_form->resize(843, 282);
        tabWidget = new QTabWidget(stock_form);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 831, 261));
        tab_newgoods = new QWidget();
        tab_newgoods->setObjectName(QString::fromUtf8("tab_newgoods"));
        txt_fornecedor = new QLineEdit(tab_newgoods);
        txt_fornecedor->setObjectName(QString::fromUtf8("txt_fornecedor"));
        txt_fornecedor->setGeometry(QRect(182, 31, 141, 20));
        label_2 = new QLabel(tab_newgoods);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(72, 110, 61, 16));
        label_4 = new QLabel(tab_newgoods);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(71, 31, 55, 16));
        txt_mercadoria = new QLineEdit(tab_newgoods);
        txt_mercadoria->setObjectName(QString::fromUtf8("txt_mercadoria"));
        txt_mercadoria->setGeometry(QRect(183, 110, 521, 20));
        label_3 = new QLabel(tab_newgoods);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(74, 134, 39, 20));
        label = new QLabel(tab_newgoods);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 52, 109, 16));
        txt_codmercadoria = new QLineEdit(tab_newgoods);
        txt_codmercadoria->setObjectName(QString::fromUtf8("txt_codmercadoria"));
        txt_codmercadoria->setGeometry(QRect(182, 52, 140, 20));
        label_5 = new QLabel(tab_newgoods);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(74, 162, 53, 16));
        txt_valorcompra = new QLineEdit(tab_newgoods);
        txt_valorcompra->setObjectName(QString::fromUtf8("txt_valorcompra"));
        txt_valorcompra->setGeometry(QRect(183, 157, 133, 20));
        txt_estoque = new QLineEdit(tab_newgoods);
        txt_estoque->setObjectName(QString::fromUtf8("txt_estoque"));
        txt_estoque->setGeometry(QRect(183, 133, 133, 20));
        label_6 = new QLabel(tab_newgoods);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(517, 136, 50, 16));
        txt_valorvenda = new QLineEdit(tab_newgoods);
        txt_valorvenda->setObjectName(QString::fromUtf8("txt_valorvenda"));
        txt_valorvenda->setGeometry(QRect(571, 134, 133, 20));
        btn_salvar = new QPushButton(tab_newgoods);
        btn_salvar->setObjectName(QString::fromUtf8("btn_salvar"));
        btn_salvar->setGeometry(QRect(426, 200, 75, 23));
        btn_novo = new QPushButton(tab_newgoods);
        btn_novo->setObjectName(QString::fromUtf8("btn_novo"));
        btn_novo->setGeometry(QRect(345, 200, 75, 23));
        tabWidget->addTab(tab_newgoods, QString());
        tab_mercadorias = new QWidget();
        tab_mercadorias->setObjectName(QString::fromUtf8("tab_mercadorias"));
        txt_codmercaodiras = new QLineEdit(tab_mercadorias);
        txt_codmercaodiras->setObjectName(QString::fromUtf8("txt_codmercaodiras"));
        txt_codmercaodiras->setGeometry(QRect(10, 30, 113, 20));
        txt_mercadorias = new QLineEdit(tab_mercadorias);
        txt_mercadorias->setObjectName(QString::fromUtf8("txt_mercadorias"));
        txt_mercadorias->setGeometry(QRect(10, 80, 421, 20));
        txt_quantidade = new QLineEdit(tab_mercadorias);
        txt_quantidade->setObjectName(QString::fromUtf8("txt_quantidade"));
        txt_quantidade->setGeometry(QRect(310, 120, 121, 20));
        txt_valordecomprar = new QLineEdit(tab_mercadorias);
        txt_valordecomprar->setObjectName(QString::fromUtf8("txt_valordecomprar"));
        txt_valordecomprar->setGeometry(QRect(310, 164, 121, 20));
        txt_valordevendas = new QLineEdit(tab_mercadorias);
        txt_valordevendas->setObjectName(QString::fromUtf8("txt_valordevendas"));
        txt_valordevendas->setGeometry(QRect(13, 120, 113, 20));
        txt_desfornecedor = new QLineEdit(tab_mercadorias);
        txt_desfornecedor->setObjectName(QString::fromUtf8("txt_desfornecedor"));
        txt_desfornecedor->setGeometry(QRect(13, 164, 281, 20));
        label_7 = new QLabel(tab_mercadorias);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 10, 111, 16));
        label_8 = new QLabel(tab_mercadorias);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 60, 81, 16));
        label_9 = new QLabel(tab_mercadorias);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(310, 100, 81, 16));
        label_10 = new QLabel(tab_mercadorias);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(315, 144, 71, 16));
        label_11 = new QLabel(tab_mercadorias);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(13, 100, 71, 16));
        label_12 = new QLabel(tab_mercadorias);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(14, 144, 61, 16));
        btn_gravar = new QPushButton(tab_mercadorias);
        btn_gravar->setObjectName(QString::fromUtf8("btn_gravar"));
        btn_gravar->setGeometry(QRect(120, 211, 75, 23));
        btn_excluir = new QPushButton(tab_mercadorias);
        btn_excluir->setObjectName(QString::fromUtf8("btn_excluir"));
        btn_excluir->setGeometry(QRect(210, 211, 75, 23));
        tw_mercacorias = new QTableWidget(tab_mercadorias);
        tw_mercacorias->setObjectName(QString::fromUtf8("tw_mercacorias"));
        tw_mercacorias->setGeometry(QRect(441, 80, 361, 151));
        groupBox = new QGroupBox(tab_mercadorias);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(440, 0, 141, 71));
        rb_codigo = new QRadioButton(groupBox);
        rb_codigo->setObjectName(QString::fromUtf8("rb_codigo"));
        rb_codigo->setGeometry(QRect(10, 20, 121, 17));
        rb_codigo->setChecked(true);
        rb_mercadorias = new QRadioButton(groupBox);
        rb_mercadorias->setObjectName(QString::fromUtf8("rb_mercadorias"));
        rb_mercadorias->setGeometry(QRect(10, 40, 121, 17));
        txt_pesquisar = new QLineEdit(tab_mercadorias);
        txt_pesquisar->setObjectName(QString::fromUtf8("txt_pesquisar"));
        txt_pesquisar->setGeometry(QRect(640, 6, 161, 20));
        label_13 = new QLabel(tab_mercadorias);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(589, 10, 47, 13));
        btn_pesquisar = new QPushButton(tab_mercadorias);
        btn_pesquisar->setObjectName(QString::fromUtf8("btn_pesquisar"));
        btn_pesquisar->setGeometry(QRect(727, 54, 75, 23));
        tabWidget->addTab(tab_mercadorias, QString());
        QWidget::setTabOrder(tabWidget, txt_fornecedor);
        QWidget::setTabOrder(txt_fornecedor, txt_codmercadoria);
        QWidget::setTabOrder(txt_codmercadoria, txt_mercadoria);
        QWidget::setTabOrder(txt_mercadoria, txt_estoque);
        QWidget::setTabOrder(txt_estoque, txt_valorvenda);
        QWidget::setTabOrder(txt_valorvenda, txt_valorcompra);
        QWidget::setTabOrder(txt_valorcompra, btn_novo);
        QWidget::setTabOrder(btn_novo, btn_salvar);

        retranslateUi(stock_form);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(stock_form);
    } // setupUi

    void retranslateUi(QDialog *stock_form)
    {
        stock_form->setWindowTitle(QApplication::translate("stock_form", "Dialog", nullptr));
        label_2->setText(QApplication::translate("stock_form", "Mercadoria", nullptr));
        label_4->setText(QApplication::translate("stock_form", "Fornecedor", nullptr));
        label_3->setText(QApplication::translate("stock_form", "Estoque", nullptr));
        label->setText(QApplication::translate("stock_form", "C\303\263digo da Mercadorias", nullptr));
        label_5->setText(QApplication::translate("stock_form", "R$ Compra", nullptr));
        label_6->setText(QApplication::translate("stock_form", "R$: Venda", nullptr));
        btn_salvar->setText(QApplication::translate("stock_form", "Salvar", nullptr));
        btn_novo->setText(QApplication::translate("stock_form", "Novo", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_newgoods), QApplication::translate("stock_form", "Nova Mercadoria", nullptr));
        label_7->setText(QApplication::translate("stock_form", "C\303\263digo da Mercadoria", nullptr));
        label_8->setText(QApplication::translate("stock_form", "Mercadoria", nullptr));
        label_9->setText(QApplication::translate("stock_form", "Quantidade", nullptr));
        label_10->setText(QApplication::translate("stock_form", "R$: Compra", nullptr));
        label_11->setText(QApplication::translate("stock_form", "R$ Venda", nullptr));
        label_12->setText(QApplication::translate("stock_form", "Fornecedor", nullptr));
        btn_gravar->setText(QApplication::translate("stock_form", "Salvar", nullptr));
        btn_excluir->setText(QApplication::translate("stock_form", "Excluir", nullptr));
        groupBox->setTitle(QApplication::translate("stock_form", "Filtror:", nullptr));
        rb_codigo->setText(QApplication::translate("stock_form", "C\303\263digo Mercadoria", nullptr));
        rb_mercadorias->setText(QApplication::translate("stock_form", "Desci\303\247\303\243o Mercadoria", nullptr));
        label_13->setText(QApplication::translate("stock_form", "Pesquisar", nullptr));
        btn_pesquisar->setText(QApplication::translate("stock_form", "Pesquisar", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_mercadorias), QApplication::translate("stock_form", "Mercadorias", nullptr));
    } // retranslateUi

};

namespace Ui {
    class stock_form: public Ui_stock_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STOCK_FORM_H
