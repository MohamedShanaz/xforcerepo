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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AboutCalculator
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QTextEdit *textEdit;
    QGroupBox *groupBox_2;
    QTextEdit *textEdit_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AboutCalculator)
    {
        if (AboutCalculator->objectName().isEmpty())
            AboutCalculator->setObjectName(QStringLiteral("AboutCalculator"));
        AboutCalculator->resize(402, 380);
        centralwidget = new QWidget(AboutCalculator);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 10, 351, 171));
        QFont font;
        font.setPointSize(11);
        groupBox->setFont(font);
        textEdit = new QTextEdit(groupBox);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(10, 30, 331, 121));
        QFont font1;
        font1.setPointSize(8);
        textEdit->setFont(font1);
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 180, 361, 151));
        groupBox_2->setFont(font);
        textEdit_2 = new QTextEdit(groupBox_2);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setGeometry(QRect(10, 20, 341, 131));
        AboutCalculator->setCentralWidget(centralwidget);
        menubar = new QMenuBar(AboutCalculator);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 402, 21));
        AboutCalculator->setMenuBar(menubar);
        statusbar = new QStatusBar(AboutCalculator);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        AboutCalculator->setStatusBar(statusbar);

        retranslateUi(AboutCalculator);

        QMetaObject::connectSlotsByName(AboutCalculator);
    } // setupUi

    void retranslateUi(QMainWindow *AboutCalculator)
    {
        AboutCalculator->setWindowTitle(QApplication::translate("AboutCalculator", "MainWindow", 0));
        groupBox->setTitle(QApplication::translate("AboutCalculator", "About Caculator", 0));
        textEdit->setHtml(QApplication::translate("AboutCalculator", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">scientific calculator using C++ as the programming language was assigned to our team as the final project for the 3rd year of our BSc in Computer Science Degree at National School of Business Management, collaborated with University College Dublin</span></p></body></html>", 0));
        groupBox_2->setTitle(QApplication::translate("AboutCalculator", "About Us", 0));
        textEdit_2->setHtml(QApplication::translate("AboutCalculator", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Wingdings'; font-size:8pt;\">\303\230</span><span style=\" font-family:'Times New Roman'; font-size:8pt;\">\302\240 </span><span style=\" font-family:'Verdana,sans-serif'; font-size:8pt;\">M.N.Mohamed Shanaz(Team Leader)\302\240-14209037</span><span style=\" font-size:8pt;\"> </span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Wingdings'; font-size:8pt;\">\303\230</span><span style=\" font-family:'Times New Roman'"
                        "; font-size:8pt;\">\302\240 </span><span style=\" font-family:'Verdana,sans-serif'; font-size:8pt;\">R.R Sheran \302\240\302\240\302\240 \302\240\302\240\302\240\302\240\302\240\302\240\302\240 \302\240\302\240\302\240\302\240\302\240\302\240\302\240 \302\240\302\240\302\240\302\240\302\240\302\240\302\240\302\240\302\240\302\240\302\240\302\240\302\240\302\240  -14209038</span><span style=\" font-size:8pt;\"> </span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Wingdings'; font-size:8pt;\">\303\230</span><span style=\" font-family:'Times New Roman'; font-size:8pt;\">\302\240 </span><span style=\" font-family:'Verdana,sans-serif'; font-size:8pt;\">V.D.H Hewapathirana \302\240\302\240\302\240\302\240\302\240 \302\240\302\240\302\240\302\240\302\240\302\240\302\240 \302\240\302\240\302\240\302\240\302\240\302\240\302\240\302\240-14208928</span><span style=\" font-size:8pt;\"> </span></p>\n"
"<p style"
                        "=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Wingdings'; font-size:8pt;\">\303\230</span><span style=\" font-family:'Times New Roman'; font-size:8pt;\">\302\240 </span><span style=\" font-family:'Verdana,sans-serif'; font-size:8pt;\">A.G Nipunika Lakmini Chandrasiri \302\240\302\240\302\240\302\240-14208658</span><span style=\" font-size:8pt;\"> </span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Wingdings'; font-size:8pt;\">\303\230</span><span style=\" font-family:'Times New Roman'; font-size:8pt;\">\302\240 </span><span style=\" font-family:'Verdana,sans-serif'; font-size:8pt;\">P.M Kalinga Buddhika Perera \302\240\302\240\302\240 \302\240\302\240\302\240\302\240\302\240\302\240\302\240\302\240-14209005</span><span style=\" font-size:8pt;\"> </span></p>\n"
"<p style=\" margin-top:12px; margin-botto"
                        "m:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Wingdings'; font-size:8pt;\">\303\230</span><span style=\" font-family:'Times New Roman'; font-size:8pt;\">\302\240 </span><span style=\" font-family:'Verdana,sans-serif'; font-size:8pt;\">L.P.S.S Liyanapathirana \302\240\302\240 \302\240\302\240\302\240\302\240\302\240\302\240\302\240\302\240\302\240\302\240\302\240\302\240\302\240\302\240\302\240\302\240-14209819</span><span style=\" font-size:8pt;\"> </span><span style=\" font-family:'Verdana,sans-serif'; font-size:8pt;\"><br /></span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class AboutCalculator: public Ui_AboutCalculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTCALCULATOR_H
