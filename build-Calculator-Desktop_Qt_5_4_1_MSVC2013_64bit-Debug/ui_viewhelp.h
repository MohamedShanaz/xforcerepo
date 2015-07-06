/********************************************************************************
** Form generated from reading UI file 'viewhelp.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWHELP_H
#define UI_VIEWHELP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ViewHelp
{
public:
    QPushButton *pushButton;

    void setupUi(QDialog *ViewHelp)
    {
        if (ViewHelp->objectName().isEmpty())
            ViewHelp->setObjectName(QStringLiteral("ViewHelp"));
        ViewHelp->resize(400, 300);
        pushButton = new QPushButton(ViewHelp);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(160, 120, 75, 23));

        retranslateUi(ViewHelp);

        QMetaObject::connectSlotsByName(ViewHelp);
    } // setupUi

    void retranslateUi(QDialog *ViewHelp)
    {
        ViewHelp->setWindowTitle(QApplication::translate("ViewHelp", "Dialog", 0));
        pushButton->setText(QApplication::translate("ViewHelp", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class ViewHelp: public Ui_ViewHelp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWHELP_H
