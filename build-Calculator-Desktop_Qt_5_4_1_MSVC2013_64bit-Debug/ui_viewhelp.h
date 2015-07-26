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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_ViewHelp
{
public:
    QGroupBox *groupBox;
    QTextEdit *textEdit;

    void setupUi(QDialog *ViewHelp)
    {
        if (ViewHelp->objectName().isEmpty())
            ViewHelp->setObjectName(QStringLiteral("ViewHelp"));
        ViewHelp->resize(418, 337);
        groupBox = new QGroupBox(ViewHelp);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 20, 361, 261));
        QFont font;
        font.setPointSize(11);
        groupBox->setFont(font);
        textEdit = new QTextEdit(groupBox);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(20, 20, 321, 221));

        retranslateUi(ViewHelp);

        QMetaObject::connectSlotsByName(ViewHelp);
    } // setupUi

    void retranslateUi(QDialog *ViewHelp)
    {
        ViewHelp->setWindowTitle(QApplication::translate("ViewHelp", "Dialog", 0));
        groupBox->setTitle(QApplication::translate("ViewHelp", "View Help", 0));
        textEdit->setHtml(QApplication::translate("ViewHelp", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"> This application can manipulate basic mathematical expression upto complex ones</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">The use of the application is esential to users to save time in calculating and graph creation of formulas</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">There are keyboard shortcuts help and</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin"
                        "-right:0px; -qt-block-indent:0; text-indent:0px;\">Further email to 25@gmail.com</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class ViewHelp: public Ui_ViewHelp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWHELP_H
