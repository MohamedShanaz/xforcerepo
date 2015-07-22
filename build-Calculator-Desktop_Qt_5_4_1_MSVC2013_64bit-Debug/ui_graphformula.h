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
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_GraphFormula
{
public:
    QDialogButtonBox *buttonBox;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QGraphicsView *graphicsView;
    QPushButton *pushButton;

    void setupUi(QDialog *GraphFormula)
    {
        if (GraphFormula->objectName().isEmpty())
            GraphFormula->setObjectName(QStringLiteral("GraphFormula"));
        GraphFormula->resize(400, 300);
        buttonBox = new QDialogButtonBox(GraphFormula);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(290, 30, 81, 101));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        lineEdit = new QLineEdit(GraphFormula);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(110, 50, 113, 21));
        lineEdit_2 = new QLineEdit(GraphFormula);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(110, 90, 113, 21));
        label = new QLabel(GraphFormula);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 50, 47, 13));
        QFont font;
        font.setPointSize(11);
        label->setFont(font);
        label_2 = new QLabel(GraphFormula);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 90, 47, 13));
        label_2->setFont(font);
        label_3 = new QLabel(GraphFormula);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 20, 47, 13));
        label_3->setFont(font);
        graphicsView = new QGraphicsView(GraphFormula);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(20, 130, 361, 151));
        pushButton = new QPushButton(GraphFormula);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(290, 90, 81, 23));

        retranslateUi(GraphFormula);
        QObject::connect(buttonBox, SIGNAL(accepted()), GraphFormula, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), GraphFormula, SLOT(reject()));

        QMetaObject::connectSlotsByName(GraphFormula);
    } // setupUi

    void retranslateUi(QDialog *GraphFormula)
    {
        GraphFormula->setWindowTitle(QApplication::translate("GraphFormula", "Dialog", 0));
        label->setText(QApplication::translate("GraphFormula", "F(X)", 0));
        label_2->setText(QApplication::translate("GraphFormula", "G(X)", 0));
        label_3->setText(QApplication::translate("GraphFormula", "Enter ", 0));
        pushButton->setText(QApplication::translate("GraphFormula", "Save", 0));
    } // retranslateUi

};

namespace Ui {
    class GraphFormula: public Ui_GraphFormula {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAPHFORMULA_H
