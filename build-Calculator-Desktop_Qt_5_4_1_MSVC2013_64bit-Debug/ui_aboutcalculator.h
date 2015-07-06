/********************************************************************************
** Form generated from reading UI file 'aboutcalculator.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTCALCULATOR_H
#define UI_ABOUTCALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AboutCalculator
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AboutCalculator)
    {
        if (AboutCalculator->objectName().isEmpty())
            AboutCalculator->setObjectName(QStringLiteral("AboutCalculator"));
        AboutCalculator->resize(800, 600);
        menubar = new QMenuBar(AboutCalculator);
        menubar->setObjectName(QStringLiteral("menubar"));
        AboutCalculator->setMenuBar(menubar);
        centralwidget = new QWidget(AboutCalculator);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        AboutCalculator->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(AboutCalculator);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        AboutCalculator->setStatusBar(statusbar);

        retranslateUi(AboutCalculator);

        QMetaObject::connectSlotsByName(AboutCalculator);
    } // setupUi

    void retranslateUi(QMainWindow *AboutCalculator)
    {
        AboutCalculator->setWindowTitle(QApplication::translate("AboutCalculator", "MainWindow", 0));
    } // retranslateUi

};

namespace Ui {
    class AboutCalculator: public Ui_AboutCalculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTCALCULATOR_H
