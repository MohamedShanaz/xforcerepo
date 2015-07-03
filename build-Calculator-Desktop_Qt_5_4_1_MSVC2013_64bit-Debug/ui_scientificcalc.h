/********************************************************************************
** Form generated from reading UI file 'scientificcalc.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCIENTIFICCALC_H
#define UI_SCIENTIFICCALC_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ScientificCalc
{
public:
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionCreate_New_Graph;
    QAction *actionView_Help;
    QAction *actionAbout_Calculator;
    QWidget *centralWidget;
    QTextEdit *textEdit;
    QPushButton *btnBackspace;
    QPushButton *btnPlusMinus;
    QPushButton *btnCloseBracket;
    QPushButton *pushButton_8;
    QPushButton *btnOpenBracket;
    QPushButton *btnSeven;
    QPushButton *btnMultiple;
    QPushButton *btnClear;
    QPushButton *btnEight;
    QPushButton *btnNine;
    QPushButton *btnFour;
    QPushButton *btnDivide;
    QPushButton *btnEqual;
    QPushButton *btnFive;
    QPushButton *btnSix;
    QPushButton *btnOne;
    QPushButton *btnMinus;
    QPushButton *btnTwo;
    QPushButton *btnThree;
    QPushButton *btnZero;
    QPushButton *btnPlus;
    QPushButton *btnDot;
    QPushButton *btnPercentage;
    QPushButton *pushButton_27;
    QPushButton *pushButton_29;
    QPushButton *pushButton_30;
    QPushButton *btnTangent;
    QPushButton *btnSine;
    QPushButton *btnCosine;
    QPushButton *pushButton_34;
    QPushButton *btnLog;
    QPushButton *pushButton_37;
    QPushButton *btnpower;
    QPushButton *pushButton_39;
    QPushButton *btnSquareroot;
    QPushButton *pushButton_41;
    QPushButton *pushButton_42;
    QPushButton *pushButton_43;
    QLabel *label;
    QMenuBar *menuBar;
    QMenu *menuG;
    QMenu *menuGraph;
    QMenu *menuGraph_2;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ScientificCalc)
    {
        if (ScientificCalc->objectName().isEmpty())
            ScientificCalc->setObjectName(QStringLiteral("ScientificCalc"));
        ScientificCalc->resize(457, 373);
        ScientificCalc->setAutoFillBackground(false);
        ScientificCalc->setStyleSheet(QStringLiteral("background-color: rgb(200, 200, 194);"));
        actionCopy = new QAction(ScientificCalc);
        actionCopy->setObjectName(QStringLiteral("actionCopy"));
        actionPaste = new QAction(ScientificCalc);
        actionPaste->setObjectName(QStringLiteral("actionPaste"));
        actionCreate_New_Graph = new QAction(ScientificCalc);
        actionCreate_New_Graph->setObjectName(QStringLiteral("actionCreate_New_Graph"));
        actionView_Help = new QAction(ScientificCalc);
        actionView_Help->setObjectName(QStringLiteral("actionView_Help"));
        actionAbout_Calculator = new QAction(ScientificCalc);
        actionAbout_Calculator->setObjectName(QStringLiteral("actionAbout_Calculator"));
        centralWidget = new QWidget(ScientificCalc);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(30, 60, 391, 41));
        textEdit->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        btnBackspace = new QPushButton(centralWidget);
        btnBackspace->setObjectName(QStringLiteral("btnBackspace"));
        btnBackspace->setGeometry(QRect(230, 110, 41, 31));
        QFont font;
        font.setPointSize(17);
        btnBackspace->setFont(font);
        btnPlusMinus = new QPushButton(centralWidget);
        btnPlusMinus->setObjectName(QStringLiteral("btnPlusMinus"));
        btnPlusMinus->setGeometry(QRect(280, 110, 41, 31));
        btnCloseBracket = new QPushButton(centralWidget);
        btnCloseBracket->setObjectName(QStringLiteral("btnCloseBracket"));
        btnCloseBracket->setGeometry(QRect(80, 110, 41, 31));
        pushButton_8 = new QPushButton(centralWidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(130, 110, 41, 31));
        QFont font1;
        font1.setPointSize(11);
        pushButton_8->setFont(font1);
        btnOpenBracket = new QPushButton(centralWidget);
        btnOpenBracket->setObjectName(QStringLiteral("btnOpenBracket"));
        btnOpenBracket->setGeometry(QRect(30, 110, 41, 31));
        btnSeven = new QPushButton(centralWidget);
        btnSeven->setObjectName(QStringLiteral("btnSeven"));
        btnSeven->setGeometry(QRect(180, 150, 41, 31));
        btnMultiple = new QPushButton(centralWidget);
        btnMultiple->setObjectName(QStringLiteral("btnMultiple"));
        btnMultiple->setGeometry(QRect(330, 150, 41, 31));
        btnClear = new QPushButton(centralWidget);
        btnClear->setObjectName(QStringLiteral("btnClear"));
        btnClear->setGeometry(QRect(180, 110, 41, 31));
        btnEight = new QPushButton(centralWidget);
        btnEight->setObjectName(QStringLiteral("btnEight"));
        btnEight->setGeometry(QRect(230, 150, 41, 31));
        btnNine = new QPushButton(centralWidget);
        btnNine->setObjectName(QStringLiteral("btnNine"));
        btnNine->setGeometry(QRect(280, 150, 41, 31));
        btnFour = new QPushButton(centralWidget);
        btnFour->setObjectName(QStringLiteral("btnFour"));
        btnFour->setGeometry(QRect(180, 190, 41, 31));
        btnDivide = new QPushButton(centralWidget);
        btnDivide->setObjectName(QStringLiteral("btnDivide"));
        btnDivide->setGeometry(QRect(330, 110, 41, 31));
        btnEqual = new QPushButton(centralWidget);
        btnEqual->setObjectName(QStringLiteral("btnEqual"));
        btnEqual->setGeometry(QRect(330, 270, 41, 31));
        btnFive = new QPushButton(centralWidget);
        btnFive->setObjectName(QStringLiteral("btnFive"));
        btnFive->setGeometry(QRect(230, 190, 41, 31));
        btnSix = new QPushButton(centralWidget);
        btnSix->setObjectName(QStringLiteral("btnSix"));
        btnSix->setGeometry(QRect(280, 190, 41, 31));
        btnOne = new QPushButton(centralWidget);
        btnOne->setObjectName(QStringLiteral("btnOne"));
        btnOne->setGeometry(QRect(180, 230, 41, 31));
        btnMinus = new QPushButton(centralWidget);
        btnMinus->setObjectName(QStringLiteral("btnMinus"));
        btnMinus->setGeometry(QRect(330, 190, 41, 31));
        btnTwo = new QPushButton(centralWidget);
        btnTwo->setObjectName(QStringLiteral("btnTwo"));
        btnTwo->setGeometry(QRect(230, 230, 41, 31));
        btnThree = new QPushButton(centralWidget);
        btnThree->setObjectName(QStringLiteral("btnThree"));
        btnThree->setGeometry(QRect(280, 230, 41, 31));
        btnZero = new QPushButton(centralWidget);
        btnZero->setObjectName(QStringLiteral("btnZero"));
        btnZero->setGeometry(QRect(180, 270, 91, 31));
        btnPlus = new QPushButton(centralWidget);
        btnPlus->setObjectName(QStringLiteral("btnPlus"));
        btnPlus->setGeometry(QRect(330, 230, 41, 31));
        btnDot = new QPushButton(centralWidget);
        btnDot->setObjectName(QStringLiteral("btnDot"));
        btnDot->setGeometry(QRect(280, 270, 41, 31));
        btnPercentage = new QPushButton(centralWidget);
        btnPercentage->setObjectName(QStringLiteral("btnPercentage"));
        btnPercentage->setGeometry(QRect(380, 110, 41, 31));
        pushButton_27 = new QPushButton(centralWidget);
        pushButton_27->setObjectName(QStringLiteral("pushButton_27"));
        pushButton_27->setGeometry(QRect(130, 150, 41, 31));
        pushButton_27->setFont(font1);
        pushButton_29 = new QPushButton(centralWidget);
        pushButton_29->setObjectName(QStringLiteral("pushButton_29"));
        pushButton_29->setGeometry(QRect(30, 150, 41, 31));
        pushButton_30 = new QPushButton(centralWidget);
        pushButton_30->setObjectName(QStringLiteral("pushButton_30"));
        pushButton_30->setGeometry(QRect(80, 150, 41, 31));
        btnTangent = new QPushButton(centralWidget);
        btnTangent->setObjectName(QStringLiteral("btnTangent"));
        btnTangent->setGeometry(QRect(130, 190, 41, 31));
        btnTangent->setFont(font1);
        btnSine = new QPushButton(centralWidget);
        btnSine->setObjectName(QStringLiteral("btnSine"));
        btnSine->setGeometry(QRect(30, 190, 41, 31));
        btnCosine = new QPushButton(centralWidget);
        btnCosine->setObjectName(QStringLiteral("btnCosine"));
        btnCosine->setGeometry(QRect(80, 190, 41, 31));
        pushButton_34 = new QPushButton(centralWidget);
        pushButton_34->setObjectName(QStringLiteral("pushButton_34"));
        pushButton_34->setGeometry(QRect(130, 230, 41, 31));
        pushButton_34->setFont(font1);
        btnLog = new QPushButton(centralWidget);
        btnLog->setObjectName(QStringLiteral("btnLog"));
        btnLog->setGeometry(QRect(80, 230, 41, 31));
        pushButton_37 = new QPushButton(centralWidget);
        pushButton_37->setObjectName(QStringLiteral("pushButton_37"));
        pushButton_37->setGeometry(QRect(130, 270, 41, 31));
        pushButton_37->setFont(font1);
        btnpower = new QPushButton(centralWidget);
        btnpower->setObjectName(QStringLiteral("btnpower"));
        btnpower->setGeometry(QRect(80, 270, 41, 31));
        pushButton_39 = new QPushButton(centralWidget);
        pushButton_39->setObjectName(QStringLiteral("pushButton_39"));
        pushButton_39->setGeometry(QRect(30, 270, 41, 31));
        btnSquareroot = new QPushButton(centralWidget);
        btnSquareroot->setObjectName(QStringLiteral("btnSquareroot"));
        btnSquareroot->setGeometry(QRect(380, 150, 41, 31));
        pushButton_41 = new QPushButton(centralWidget);
        pushButton_41->setObjectName(QStringLiteral("pushButton_41"));
        pushButton_41->setGeometry(QRect(380, 190, 41, 31));
        pushButton_42 = new QPushButton(centralWidget);
        pushButton_42->setObjectName(QStringLiteral("pushButton_42"));
        pushButton_42->setGeometry(QRect(380, 230, 41, 31));
        pushButton_43 = new QPushButton(centralWidget);
        pushButton_43->setObjectName(QStringLiteral("pushButton_43"));
        pushButton_43->setGeometry(QRect(380, 270, 41, 31));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(130, 10, 231, 31));
        QFont font2;
        font2.setFamily(QStringLiteral("Microsoft New Tai Lue"));
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setWeight(75);
        label->setFont(font2);
        ScientificCalc->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ScientificCalc);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 457, 21));
        menuG = new QMenu(menuBar);
        menuG->setObjectName(QStringLiteral("menuG"));
        menuGraph = new QMenu(menuBar);
        menuGraph->setObjectName(QStringLiteral("menuGraph"));
        menuGraph_2 = new QMenu(menuBar);
        menuGraph_2->setObjectName(QStringLiteral("menuGraph_2"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        ScientificCalc->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ScientificCalc);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        ScientificCalc->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ScientificCalc);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ScientificCalc->setStatusBar(statusBar);

        menuBar->addAction(menuG->menuAction());
        menuBar->addAction(menuGraph->menuAction());
        menuBar->addAction(menuGraph_2->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuGraph->addAction(actionCopy);
        menuGraph->addAction(actionPaste);
        menuGraph_2->addAction(actionCreate_New_Graph);
        menuHelp->addAction(actionView_Help);
        menuHelp->addAction(actionAbout_Calculator);

        retranslateUi(ScientificCalc);

        QMetaObject::connectSlotsByName(ScientificCalc);
    } // setupUi

    void retranslateUi(QMainWindow *ScientificCalc)
    {
        ScientificCalc->setWindowTitle(QApplication::translate("ScientificCalc", "ScientificCalc", 0));
        actionCopy->setText(QApplication::translate("ScientificCalc", "Copy", 0));
        actionPaste->setText(QApplication::translate("ScientificCalc", "Paste", 0));
        actionCreate_New_Graph->setText(QApplication::translate("ScientificCalc", "Create New Graph", 0));
        actionView_Help->setText(QApplication::translate("ScientificCalc", "View Help", 0));
        actionAbout_Calculator->setText(QApplication::translate("ScientificCalc", "About Calculator", 0));
        textEdit->setHtml(QApplication::translate("ScientificCalc", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0));
        btnBackspace->setText(QApplication::translate("ScientificCalc", "\342\214\253", 0));
        btnPlusMinus->setText(QApplication::translate("ScientificCalc", "+ -", 0));
        btnCloseBracket->setText(QApplication::translate("ScientificCalc", ")", 0));
        pushButton_8->setText(QApplication::translate("ScientificCalc", "Pi", 0));
        btnOpenBracket->setText(QApplication::translate("ScientificCalc", "(", 0));
        btnSeven->setText(QApplication::translate("ScientificCalc", "7", 0));
        btnMultiple->setText(QApplication::translate("ScientificCalc", "X", 0));
        btnClear->setText(QApplication::translate("ScientificCalc", "C", 0));
        btnEight->setText(QApplication::translate("ScientificCalc", "8", 0));
        btnNine->setText(QApplication::translate("ScientificCalc", "9", 0));
        btnFour->setText(QApplication::translate("ScientificCalc", "4", 0));
        btnDivide->setText(QApplication::translate("ScientificCalc", "\303\267", 0));
        btnEqual->setText(QApplication::translate("ScientificCalc", "=", 0));
        btnFive->setText(QApplication::translate("ScientificCalc", "5", 0));
        btnSix->setText(QApplication::translate("ScientificCalc", "6", 0));
        btnOne->setText(QApplication::translate("ScientificCalc", "1", 0));
        btnMinus->setText(QApplication::translate("ScientificCalc", "-", 0));
        btnTwo->setText(QApplication::translate("ScientificCalc", "2", 0));
        btnThree->setText(QApplication::translate("ScientificCalc", "3", 0));
        btnZero->setText(QApplication::translate("ScientificCalc", "0", 0));
        btnPlus->setText(QApplication::translate("ScientificCalc", "+", 0));
        btnDot->setText(QApplication::translate("ScientificCalc", ".", 0));
        btnPercentage->setText(QApplication::translate("ScientificCalc", "%", 0));
        pushButton_27->setText(QApplication::translate("ScientificCalc", "Grad", 0));
        pushButton_29->setText(QApplication::translate("ScientificCalc", "Deg", 0));
        pushButton_30->setText(QApplication::translate("ScientificCalc", "Rad", 0));
        btnTangent->setText(QApplication::translate("ScientificCalc", "tan", 0));
        btnSine->setText(QApplication::translate("ScientificCalc", "Sin", 0));
        btnCosine->setText(QApplication::translate("ScientificCalc", "cos", 0));
        pushButton_34->setText(QApplication::translate("ScientificCalc", "10*", 0));
        btnLog->setText(QApplication::translate("ScientificCalc", "log", 0));
        pushButton_37->setText(QApplication::translate("ScientificCalc", "xy", 0));
        btnpower->setText(QApplication::translate("ScientificCalc", "x\302\262", 0));
        pushButton_39->setText(QApplication::translate("ScientificCalc", "n!", 0));
        btnSquareroot->setText(QApplication::translate("ScientificCalc", "\342\210\232", 0));
        pushButton_41->setText(QApplication::translate("ScientificCalc", "MC", 0));
        pushButton_42->setText(QApplication::translate("ScientificCalc", "MR", 0));
        pushButton_43->setText(QApplication::translate("ScientificCalc", "M+", 0));
        label->setText(QApplication::translate("ScientificCalc", "Scientific Calculator Master", 0));
        menuG->setTitle(QApplication::translate("ScientificCalc", "View", 0));
        menuGraph->setTitle(QApplication::translate("ScientificCalc", "Edit", 0));
        menuGraph_2->setTitle(QApplication::translate("ScientificCalc", "Graph", 0));
        menuHelp->setTitle(QApplication::translate("ScientificCalc", "Help", 0));
    } // retranslateUi

};

namespace Ui {
    class ScientificCalc: public Ui_ScientificCalc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCIENTIFICCALC_H
