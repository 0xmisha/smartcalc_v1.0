/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *result_label;
    QPushButton *pushButton_equals;
    QPushButton *pushButton_7;
    QPushButton *pushButton_1;
    QPushButton *pushButton_atan;
    QPushButton *pushButton_acos;
    QPushButton *pushButton_left_bracket;
    QPushButton *pushButton_6;
    QPushButton *pushButton_cos;
    QPushButton *pushButton_delete;
    QPushButton *pushButton_0;
    QPushButton *pushButton_3;
    QPushButton *pushButton_ln;
    QPushButton *pushButton_mul;
    QPushButton *pushButton_4;
    QPushButton *pushButton_9;
    QPushButton *pushButton_log;
    QPushButton *pushButton_minus;
    QPushButton *pushButton_plus;
    QPushButton *pushButton_asin;
    QPushButton *pushButton_mod;
    QPushButton *pushButton_tan;
    QPushButton *pushButton_sin;
    QPushButton *pushButton_pow;
    QPushButton *pushButton_right_bracket;
    QPushButton *pushButton_point;
    QPushButton *pushButton_sqrt;
    QPushButton *pushButton_2;
    QPushButton *pushButton_div;
    QPushButton *pushButton_8;
    QPushButton *pushButton_5;
    QWidget *tab_2;
    QCustomPlot *widget;
    QPushButton *pushButton;
    QLineEdit *lineEdit_2;
    QLabel *label_2;
    QLineEdit *lineEdit_3;
    QLabel *label_3;
    QLabel *label;
    QLineEdit *lineEdit_4;
    QLabel *label_4;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit;
    QLabel *label_16;
    QLineEdit *lineEdit_step;
    QWidget *tab_3;
    QPushButton *calculate_credit_button;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_total_credit;
    QLabel *label_term;
    QLabel *label_interest_rate;
    QLabel *label_type;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit_total_credit;
    QLineEdit *lineEdit_term;
    QLineEdit *lineEdit_interest_rate;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *lineEdit_monthly_payment;
    QLineEdit *lineEdit_overpayment;
    QLineEdit *lineEdit_total_payment;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_monthly_payment;
    QLabel *label_overpayment;
    QLabel *label_total_payment;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButton_annuity;
    QRadioButton *radioButton_differentiated;
    QWidget *tab_4;
    QLineEdit *lineEdit_partial_withdrawal;
    QLineEdit *lineEdit_replenishments;
    QLineEdit *lineEdit_periodicity;
    QPushButton *pushButton_calculate_debit;
    QRadioButton *radioButton_capitalization;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QWidget *layoutWidget6;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *lineEdit_deposit_amount;
    QLineEdit *lineEdit_deposit_term;
    QLineEdit *lineEdit_interest_rate_debit;
    QLineEdit *lineEdit_tax_rate;
    QWidget *layoutWidget7;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QWidget *layoutWidget8;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QWidget *layoutWidget9;
    QVBoxLayout *verticalLayout_6;
    QLineEdit *lineEdit_accrued_interest;
    QLineEdit *lineEdit_tax_amount;
    QLineEdit *lineEdit_final_despoit;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(483, 549);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 10, 481, 541));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        result_label = new QLabel(tab);
        result_label->setObjectName(QString::fromUtf8("result_label"));
        result_label->setGeometry(QRect(0, 0, 480, 121));
        QFont font;
        font.setPointSize(60);
        result_label->setFont(font);
        result_label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"  qproperty-alignment: 'AlignRight';\n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"background-color : white;"));
        result_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pushButton_equals = new QPushButton(tab);
        pushButton_equals->setObjectName(QString::fromUtf8("pushButton_equals"));
        pushButton_equals->setGeometry(QRect(320, 440, 80, 80));
        pushButton_equals->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        pushButton_7 = new QPushButton(tab);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(160, 200, 80, 80));
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  color: rgb(69, 69, 69);\n"
"   background-color: rgb(255, 255, 255);\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_1 = new QPushButton(tab);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        pushButton_1->setGeometry(QRect(160, 360, 80, 80));
        pushButton_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  color: rgb(69, 69, 69);\n"
"   background-color: rgb(255, 255, 255);\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_atan = new QPushButton(tab);
        pushButton_atan->setObjectName(QString::fromUtf8("pushButton_atan"));
        pushButton_atan->setGeometry(QRect(80, 360, 80, 80));
        pushButton_atan->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  color: rgb(69, 69, 69);\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_acos = new QPushButton(tab);
        pushButton_acos->setObjectName(QString::fromUtf8("pushButton_acos"));
        pushButton_acos->setGeometry(QRect(80, 200, 80, 80));
        pushButton_acos->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  color: rgb(69, 69, 69);\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_left_bracket = new QPushButton(tab);
        pushButton_left_bracket->setObjectName(QString::fromUtf8("pushButton_left_bracket"));
        pushButton_left_bracket->setGeometry(QRect(160, 120, 80, 80));
        pushButton_left_bracket->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  color: rgb(69, 69, 69);\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_6 = new QPushButton(tab);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(320, 280, 80, 80));
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  color: rgb(69, 69, 69);\n"
"   background-color: rgb(255, 255, 255);\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_cos = new QPushButton(tab);
        pushButton_cos->setObjectName(QString::fromUtf8("pushButton_cos"));
        pushButton_cos->setGeometry(QRect(0, 200, 80, 80));
        pushButton_cos->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  color: rgb(69, 69, 69);\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_delete = new QPushButton(tab);
        pushButton_delete->setObjectName(QString::fromUtf8("pushButton_delete"));
        pushButton_delete->setGeometry(QRect(400, 120, 80, 80));
        pushButton_delete->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  color: rgb(69, 69, 69);\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_0 = new QPushButton(tab);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
        pushButton_0->setGeometry(QRect(160, 440, 80, 80));
        pushButton_0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  color: rgb(69, 69, 69);\n"
"   background-color: rgb(255, 255, 255);\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_3 = new QPushButton(tab);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(320, 360, 80, 80));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  color: rgb(69, 69, 69);\n"
"   background-color: rgb(255, 255, 255);\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_ln = new QPushButton(tab);
        pushButton_ln->setObjectName(QString::fromUtf8("pushButton_ln"));
        pushButton_ln->setGeometry(QRect(80, 440, 80, 80));
        pushButton_ln->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  color: rgb(69, 69, 69);\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_mul = new QPushButton(tab);
        pushButton_mul->setObjectName(QString::fromUtf8("pushButton_mul"));
        pushButton_mul->setGeometry(QRect(400, 280, 80, 80));
        pushButton_mul->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        pushButton_4 = new QPushButton(tab);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(160, 280, 80, 80));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  color: rgb(69, 69, 69);\n"
"   background-color: rgb(255, 255, 255);\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_9 = new QPushButton(tab);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(320, 200, 80, 80));
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  color: rgb(69, 69, 69);\n"
"   background-color: rgb(255, 255, 255);\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_log = new QPushButton(tab);
        pushButton_log->setObjectName(QString::fromUtf8("pushButton_log"));
        pushButton_log->setGeometry(QRect(0, 440, 80, 80));
        pushButton_log->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  color: rgb(69, 69, 69);\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_minus = new QPushButton(tab);
        pushButton_minus->setObjectName(QString::fromUtf8("pushButton_minus"));
        pushButton_minus->setGeometry(QRect(400, 360, 80, 80));
        pushButton_minus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        pushButton_plus = new QPushButton(tab);
        pushButton_plus->setObjectName(QString::fromUtf8("pushButton_plus"));
        pushButton_plus->setGeometry(QRect(400, 440, 80, 80));
        pushButton_plus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        pushButton_asin = new QPushButton(tab);
        pushButton_asin->setObjectName(QString::fromUtf8("pushButton_asin"));
        pushButton_asin->setGeometry(QRect(80, 280, 80, 80));
        pushButton_asin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  color: rgb(69, 69, 69);\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_mod = new QPushButton(tab);
        pushButton_mod->setObjectName(QString::fromUtf8("pushButton_mod"));
        pushButton_mod->setGeometry(QRect(320, 120, 80, 80));
        pushButton_mod->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  color: rgb(69, 69, 69);\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_tan = new QPushButton(tab);
        pushButton_tan->setObjectName(QString::fromUtf8("pushButton_tan"));
        pushButton_tan->setGeometry(QRect(0, 360, 80, 80));
        pushButton_tan->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  color: rgb(69, 69, 69);\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_sin = new QPushButton(tab);
        pushButton_sin->setObjectName(QString::fromUtf8("pushButton_sin"));
        pushButton_sin->setGeometry(QRect(0, 280, 80, 80));
        pushButton_sin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  color: rgb(69, 69, 69);\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_pow = new QPushButton(tab);
        pushButton_pow->setObjectName(QString::fromUtf8("pushButton_pow"));
        pushButton_pow->setGeometry(QRect(80, 120, 80, 80));
        pushButton_pow->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  color: rgb(69, 69, 69);\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_right_bracket = new QPushButton(tab);
        pushButton_right_bracket->setObjectName(QString::fromUtf8("pushButton_right_bracket"));
        pushButton_right_bracket->setGeometry(QRect(240, 120, 80, 80));
        pushButton_right_bracket->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  color: rgb(69, 69, 69);\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_point = new QPushButton(tab);
        pushButton_point->setObjectName(QString::fromUtf8("pushButton_point"));
        pushButton_point->setGeometry(QRect(240, 440, 80, 80));
        pushButton_point->setAutoFillBackground(false);
        pushButton_point->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  color: rgb(69, 69, 69);\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_sqrt = new QPushButton(tab);
        pushButton_sqrt->setObjectName(QString::fromUtf8("pushButton_sqrt"));
        pushButton_sqrt->setGeometry(QRect(0, 120, 80, 80));
        pushButton_sqrt->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  color: rgb(69, 69, 69);\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_2 = new QPushButton(tab);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(240, 360, 80, 80));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  color: rgb(69, 69, 69);\n"
"   background-color: rgb(255, 255, 255);\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_div = new QPushButton(tab);
        pushButton_div->setObjectName(QString::fromUtf8("pushButton_div"));
        pushButton_div->setGeometry(QRect(400, 200, 80, 80));
        pushButton_div->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        pushButton_8 = new QPushButton(tab);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(240, 200, 80, 80));
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  color: rgb(69, 69, 69);\n"
"   background-color: rgb(255, 255, 255);\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_5 = new QPushButton(tab);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(240, 280, 80, 80));
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  color: rgb(69, 69, 69);\n"
"   background-color: rgb(255, 255, 255);\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        widget = new QCustomPlot(tab_2);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 150, 481, 371));
        pushButton = new QPushButton(tab_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(260, 80, 211, 61));
        lineEdit_2 = new QLineEdit(tab_2);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(68, 120, 31, 21));
        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 120, 40, 21));
        lineEdit_3 = new QLineEdit(tab_2);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(68, 90, 31, 21));
        label_3 = new QLabel(tab_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 90, 40, 21));
        label = new QLabel(tab_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 90, 40, 21));
        lineEdit_4 = new QLineEdit(tab_2);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(150, 90, 31, 21));
        label_4 = new QLabel(tab_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(120, 120, 40, 21));
        lineEdit_5 = new QLineEdit(tab_2);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(150, 120, 31, 21));
        lineEdit = new QLineEdit(tab_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(10, 10, 461, 51));
        QFont font1;
        font1.setPointSize(23);
        lineEdit->setFont(font1);
        label_16 = new QLabel(tab_2);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(210, 90, 40, 21));
        lineEdit_step = new QLineEdit(tab_2);
        lineEdit_step->setObjectName(QString::fromUtf8("lineEdit_step"));
        lineEdit_step->setGeometry(QRect(210, 120, 31, 21));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        calculate_credit_button = new QPushButton(tab_3);
        calculate_credit_button->setObjectName(QString::fromUtf8("calculate_credit_button"));
        calculate_credit_button->setGeometry(QRect(20, 250, 431, 61));
        QFont font2;
        font2.setPointSize(30);
        calculate_credit_button->setFont(font2);
        layoutWidget = new QWidget(tab_3);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 80, 218, 146));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_total_credit = new QLabel(layoutWidget);
        label_total_credit->setObjectName(QString::fromUtf8("label_total_credit"));
        QFont font3;
        font3.setPointSize(25);
        label_total_credit->setFont(font3);

        verticalLayout->addWidget(label_total_credit);

        label_term = new QLabel(layoutWidget);
        label_term->setObjectName(QString::fromUtf8("label_term"));
        label_term->setFont(font3);

        verticalLayout->addWidget(label_term);

        label_interest_rate = new QLabel(layoutWidget);
        label_interest_rate->setObjectName(QString::fromUtf8("label_interest_rate"));
        label_interest_rate->setFont(font3);

        verticalLayout->addWidget(label_interest_rate);

        label_type = new QLabel(layoutWidget);
        label_type->setObjectName(QString::fromUtf8("label_type"));
        label_type->setFont(font3);

        verticalLayout->addWidget(label_type);

        layoutWidget1 = new QWidget(tab_3);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(310, 80, 127, 111));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEdit_total_credit = new QLineEdit(layoutWidget1);
        lineEdit_total_credit->setObjectName(QString::fromUtf8("lineEdit_total_credit"));

        verticalLayout_2->addWidget(lineEdit_total_credit);

        lineEdit_term = new QLineEdit(layoutWidget1);
        lineEdit_term->setObjectName(QString::fromUtf8("lineEdit_term"));

        verticalLayout_2->addWidget(lineEdit_term);

        lineEdit_interest_rate = new QLineEdit(layoutWidget1);
        lineEdit_interest_rate->setObjectName(QString::fromUtf8("lineEdit_interest_rate"));

        verticalLayout_2->addWidget(lineEdit_interest_rate);

        layoutWidget2 = new QWidget(tab_3);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(310, 330, 127, 121));
        verticalLayout_3 = new QVBoxLayout(layoutWidget2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        lineEdit_monthly_payment = new QLineEdit(layoutWidget2);
        lineEdit_monthly_payment->setObjectName(QString::fromUtf8("lineEdit_monthly_payment"));
        lineEdit_monthly_payment->setReadOnly(true);

        verticalLayout_3->addWidget(lineEdit_monthly_payment);

        lineEdit_overpayment = new QLineEdit(layoutWidget2);
        lineEdit_overpayment->setObjectName(QString::fromUtf8("lineEdit_overpayment"));
        lineEdit_overpayment->setReadOnly(true);

        verticalLayout_3->addWidget(lineEdit_overpayment);

        lineEdit_total_payment = new QLineEdit(layoutWidget2);
        lineEdit_total_payment->setObjectName(QString::fromUtf8("lineEdit_total_payment"));
        lineEdit_total_payment->setReadOnly(true);

        verticalLayout_3->addWidget(lineEdit_total_payment);

        layoutWidget3 = new QWidget(tab_3);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(20, 330, 192, 121));
        verticalLayout_4 = new QVBoxLayout(layoutWidget3);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_monthly_payment = new QLabel(layoutWidget3);
        label_monthly_payment->setObjectName(QString::fromUtf8("label_monthly_payment"));
        label_monthly_payment->setFont(font3);

        verticalLayout_4->addWidget(label_monthly_payment);

        label_overpayment = new QLabel(layoutWidget3);
        label_overpayment->setObjectName(QString::fromUtf8("label_overpayment"));
        label_overpayment->setFont(font3);

        verticalLayout_4->addWidget(label_overpayment);

        label_total_payment = new QLabel(layoutWidget3);
        label_total_payment->setObjectName(QString::fromUtf8("label_total_payment"));
        label_total_payment->setFont(font3);

        verticalLayout_4->addWidget(label_total_payment);

        layoutWidget4 = new QWidget(tab_3);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(270, 200, 189, 20));
        horizontalLayout = new QHBoxLayout(layoutWidget4);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        radioButton_annuity = new QRadioButton(layoutWidget4);
        radioButton_annuity->setObjectName(QString::fromUtf8("radioButton_annuity"));

        horizontalLayout->addWidget(radioButton_annuity);

        radioButton_differentiated = new QRadioButton(layoutWidget4);
        radioButton_differentiated->setObjectName(QString::fromUtf8("radioButton_differentiated"));

        horizontalLayout->addWidget(radioButton_differentiated);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        lineEdit_partial_withdrawal = new QLineEdit(tab_4);
        lineEdit_partial_withdrawal->setObjectName(QString::fromUtf8("lineEdit_partial_withdrawal"));
        lineEdit_partial_withdrawal->setGeometry(QRect(359, 180, 110, 21));
        lineEdit_replenishments = new QLineEdit(tab_4);
        lineEdit_replenishments->setObjectName(QString::fromUtf8("lineEdit_replenishments"));
        lineEdit_replenishments->setGeometry(QRect(239, 180, 110, 21));
        lineEdit_periodicity = new QLineEdit(tab_4);
        lineEdit_periodicity->setObjectName(QString::fromUtf8("lineEdit_periodicity"));
        lineEdit_periodicity->setGeometry(QRect(0, 180, 110, 21));
        pushButton_calculate_debit = new QPushButton(tab_4);
        pushButton_calculate_debit->setObjectName(QString::fromUtf8("pushButton_calculate_debit"));
        pushButton_calculate_debit->setGeometry(QRect(20, 220, 441, 61));
        pushButton_calculate_debit->setFont(font2);
        radioButton_capitalization = new QRadioButton(tab_4);
        radioButton_capitalization->setObjectName(QString::fromUtf8("radioButton_capitalization"));
        radioButton_capitalization->setGeometry(QRect(160, 180, 21, 21));
        layoutWidget5 = new QWidget(tab_4);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(0, 40, 481, 41));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget5);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QFont font4;
        font4.setPointSize(15);
        label_5->setFont(font4);

        horizontalLayout_2->addWidget(label_5);

        label_6 = new QLabel(layoutWidget5);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font4);

        horizontalLayout_2->addWidget(label_6);

        label_7 = new QLabel(layoutWidget5);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font4);

        horizontalLayout_2->addWidget(label_7);

        label_8 = new QLabel(layoutWidget5);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font4);

        horizontalLayout_2->addWidget(label_8);

        layoutWidget6 = new QWidget(tab_4);
        layoutWidget6->setObjectName(QString::fromUtf8("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(0, 90, 471, 23));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        lineEdit_deposit_amount = new QLineEdit(layoutWidget6);
        lineEdit_deposit_amount->setObjectName(QString::fromUtf8("lineEdit_deposit_amount"));

        horizontalLayout_3->addWidget(lineEdit_deposit_amount);

        lineEdit_deposit_term = new QLineEdit(layoutWidget6);
        lineEdit_deposit_term->setObjectName(QString::fromUtf8("lineEdit_deposit_term"));

        horizontalLayout_3->addWidget(lineEdit_deposit_term);

        lineEdit_interest_rate_debit = new QLineEdit(layoutWidget6);
        lineEdit_interest_rate_debit->setObjectName(QString::fromUtf8("lineEdit_interest_rate_debit"));

        horizontalLayout_3->addWidget(lineEdit_interest_rate_debit);

        lineEdit_tax_rate = new QLineEdit(layoutWidget6);
        lineEdit_tax_rate->setObjectName(QString::fromUtf8("lineEdit_tax_rate"));

        horizontalLayout_3->addWidget(lineEdit_tax_rate);

        layoutWidget7 = new QWidget(tab_4);
        layoutWidget7->setObjectName(QString::fromUtf8("layoutWidget7"));
        layoutWidget7->setGeometry(QRect(0, 140, 471, 31));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget7);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget7);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font4);

        horizontalLayout_4->addWidget(label_9);

        label_10 = new QLabel(layoutWidget7);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font4);

        horizontalLayout_4->addWidget(label_10);

        label_11 = new QLabel(layoutWidget7);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font4);

        horizontalLayout_4->addWidget(label_11);

        label_12 = new QLabel(layoutWidget7);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFont(font4);

        horizontalLayout_4->addWidget(label_12);

        layoutWidget8 = new QWidget(tab_4);
        layoutWidget8->setObjectName(QString::fromUtf8("layoutWidget8"));
        layoutWidget8->setGeometry(QRect(20, 310, 229, 161));
        verticalLayout_5 = new QVBoxLayout(layoutWidget8);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(layoutWidget8);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFont(font3);

        verticalLayout_5->addWidget(label_13);

        label_14 = new QLabel(layoutWidget8);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setFont(font3);

        verticalLayout_5->addWidget(label_14);

        label_15 = new QLabel(layoutWidget8);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setFont(font3);

        verticalLayout_5->addWidget(label_15);

        layoutWidget9 = new QWidget(tab_4);
        layoutWidget9->setObjectName(QString::fromUtf8("layoutWidget9"));
        layoutWidget9->setGeometry(QRect(300, 300, 161, 191));
        verticalLayout_6 = new QVBoxLayout(layoutWidget9);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        lineEdit_accrued_interest = new QLineEdit(layoutWidget9);
        lineEdit_accrued_interest->setObjectName(QString::fromUtf8("lineEdit_accrued_interest"));
        lineEdit_accrued_interest->setReadOnly(true);

        verticalLayout_6->addWidget(lineEdit_accrued_interest);

        lineEdit_tax_amount = new QLineEdit(layoutWidget9);
        lineEdit_tax_amount->setObjectName(QString::fromUtf8("lineEdit_tax_amount"));
        lineEdit_tax_amount->setReadOnly(true);

        verticalLayout_6->addWidget(lineEdit_tax_amount);

        lineEdit_final_despoit = new QLineEdit(layoutWidget9);
        lineEdit_final_despoit->setObjectName(QString::fromUtf8("lineEdit_final_despoit"));
        lineEdit_final_despoit->setReadOnly(true);

        verticalLayout_6->addWidget(lineEdit_final_despoit);

        tabWidget->addTab(tab_4, QString());
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        result_label->setText(QString());
        pushButton_equals->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton_atan->setText(QCoreApplication::translate("MainWindow", "atan", nullptr));
        pushButton_acos->setText(QCoreApplication::translate("MainWindow", "acos", nullptr));
        pushButton_left_bracket->setText(QCoreApplication::translate("MainWindow", "(", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton_cos->setText(QCoreApplication::translate("MainWindow", "cos", nullptr));
        pushButton_delete->setText(QCoreApplication::translate("MainWindow", "CE", nullptr));
        pushButton_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton_ln->setText(QCoreApplication::translate("MainWindow", "ln", nullptr));
        pushButton_mul->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButton_log->setText(QCoreApplication::translate("MainWindow", "log", nullptr));
        pushButton_minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_asin->setText(QCoreApplication::translate("MainWindow", "asin", nullptr));
        pushButton_mod->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        pushButton_tan->setText(QCoreApplication::translate("MainWindow", "tan", nullptr));
        pushButton_sin->setText(QCoreApplication::translate("MainWindow", "sin", nullptr));
        pushButton_pow->setText(QCoreApplication::translate("MainWindow", "^", nullptr));
        pushButton_right_bracket->setText(QCoreApplication::translate("MainWindow", ")", nullptr));
        pushButton_point->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        pushButton_sqrt->setText(QCoreApplication::translate("MainWindow", "sqrt", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton_div->setText(QCoreApplication::translate("MainWindow", "\303\267", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Calculator", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Build graph", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Y from", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "X from", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "X to", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Y to", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Step", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Graph", nullptr));
        calculate_credit_button->setText(QCoreApplication::translate("MainWindow", "Calculate", nullptr));
        label_total_credit->setText(QCoreApplication::translate("MainWindow", "Total Credit Amount", nullptr));
        label_term->setText(QCoreApplication::translate("MainWindow", "Term", nullptr));
        label_interest_rate->setText(QCoreApplication::translate("MainWindow", "Interest rate", nullptr));
        label_type->setText(QCoreApplication::translate("MainWindow", "Type", nullptr));
        label_monthly_payment->setText(QCoreApplication::translate("MainWindow", "Monthly payment", nullptr));
        label_overpayment->setText(QCoreApplication::translate("MainWindow", "Overpayment", nullptr));
        label_total_payment->setText(QCoreApplication::translate("MainWindow", "Total payment", nullptr));
        radioButton_annuity->setText(QCoreApplication::translate("MainWindow", "Annuity", nullptr));
        radioButton_differentiated->setText(QCoreApplication::translate("MainWindow", "Differentiated", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "Credit", nullptr));
        pushButton_calculate_debit->setText(QCoreApplication::translate("MainWindow", "Calculate", nullptr));
        radioButton_capitalization->setText(QString());
        label_5->setText(QCoreApplication::translate("MainWindow", "Deposit amount", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Deposit term", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Interest rate", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Tax rate", nullptr));
        lineEdit_deposit_term->setText(QString());
        label_9->setText(QCoreApplication::translate("MainWindow", "Periodicity", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Capitalization", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Replenishments", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Partial withdrawal", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Accrued interest", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Tax amount", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Final deposit amount", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("MainWindow", "Debit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
