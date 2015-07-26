/********************************************************************************
** Form generated from reading UI file 'graphformula.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAPHFORMULA_H
#define UI_GRAPHFORMULA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_GraphFormula
{
public:
    QGroupBox *groupBox;
    QCheckBox *chkBoxSin;
    QCheckBox *chkBoxCos;
    QCheckBox *chkTan;
    QLabel *label_5;
    QLineEdit *txtTrigonometricValue;
    QPushButton *trigonometricGraphClick;
    QGroupBox *groupBox_2;
    QLineEdit *lineEdit_2;
    QLineEdit *xValue;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label;
    QLineEdit *lineEdit_3;
    QPushButton *integrationGraphClick;

    void setupUi(QDialog *GraphFormula)
    {
        if (GraphFormula->objectName().isEmpty())
            GraphFormula->setObjectName(QStringLiteral("GraphFormula"));
        GraphFormula->resize(565, 382);
        groupBox = new QGroupBox(GraphFormula);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(110, 20, 331, 181));
        chkBoxSin = new QCheckBox(groupBox);
        chkBoxSin->setObjectName(QStringLiteral("chkBoxSin"));
        chkBoxSin->setGeometry(QRect(30, 20, 41, 17));
        chkBoxCos = new QCheckBox(groupBox);
        chkBoxCos->setObjectName(QStringLiteral("chkBoxCos"));
        chkBoxCos->setGeometry(QRect(110, 20, 41, 17));
        chkTan = new QCheckBox(groupBox);
        chkTan->setObjectName(QStringLiteral("chkTan"));
        chkTan->setGeometry(QRect(180, 20, 41, 17));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 60, 81, 20));
        QFont font;
        font.setPointSize(11);
        label_5->setFont(font);
        txtTrigonometricValue = new QLineEdit(groupBox);
        txtTrigonometricValue->setObjectName(QStringLiteral("txtTrigonometricValue"));
        txtTrigonometricValue->setGeometry(QRect(110, 60, 141, 21));
        trigonometricGraphClick = new QPushButton(groupBox);
        trigonometricGraphClick->setObjectName(QStringLiteral("trigonometricGraphClick"));
        trigonometricGraphClick->setGeometry(QRect(90, 120, 101, 31));
        trigonometricGraphClick->setAutoFillBackground(false);
        groupBox_2 = new QGroupBox(GraphFormula);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(110, 210, 331, 161));
        lineEdit_2 = new QLineEdit(groupBox_2);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(100, 80, 113, 21));
        xValue = new QLineEdit(groupBox_2);
        xValue->setObjectName(QStringLiteral("xValue"));
        xValue->setGeometry(QRect(100, 50, 113, 21));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 80, 47, 13));
        label_2->setFont(font);
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 20, 61, 20));
        label_4->setFont(font);
        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 50, 47, 13));
        label->setFont(font);
        lineEdit_3 = new QLineEdit(groupBox_2);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(100, 20, 141, 21));
        integrationGraphClick = new QPushButton(groupBox_2);
        integrationGraphClick->setObjectName(QStringLiteral("integrationGraphClick"));
        integrationGraphClick->setGeometry(QRect(100, 120, 101, 31));
        integrationGraphClick->setAutoFillBackground(false);

        retranslateUi(GraphFormula);

        QMetaObject::connectSlotsByName(GraphFormula);
    } // setupUi

    void retranslateUi(QDialog *GraphFormula)
    {
        GraphFormula->setWindowTitle(QApplication::translate("GraphFormula", "Dialog", 0));
        groupBox->setTitle(QApplication::translate("GraphFormula", "Simple Trigonometry", 0));
        chkBoxSin->setText(QApplication::translate("GraphFormula", "Sin", 0));
        chkBoxCos->setText(QApplication::translate("GraphFormula", "Cos", 0));
        chkTan->setText(QApplication::translate("GraphFormula", "Tan", 0));
        label_5->setText(QApplication::translate("GraphFormula", "Enter Value", 0));
        trigonometricGraphClick->setText(QApplication::translate("GraphFormula", "Generate Graph", 0));
        groupBox_2->setTitle(QApplication::translate("GraphFormula", "Integration", 0));
        label_2->setText(QApplication::translate("GraphFormula", "G(X)", 0));
        label_4->setText(QApplication::translate("GraphFormula", "Formula", 0));
        label->setText(QApplication::translate("GraphFormula", "F(X)", 0));
        integrationGraphClick->setText(QApplication::translate("GraphFormula", "Generate Graph", 0));
    } // retranslateUi

};

namespace Ui {
    class GraphFormula: public Ui_GraphFormula {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAPHFORMULA_H
