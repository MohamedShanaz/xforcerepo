/********************************************************************************
** Form generated from reading UI file 'newgraph.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWGRAPH_H
#define UI_NEWGRAPH_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_newGraph
{
public:
    QCustomPlot *newGraphPlot;
    QLabel *lblCurrentGraph;

    void setupUi(QDialog *newGraph)
    {
        if (newGraph->objectName().isEmpty())
            newGraph->setObjectName(QStringLiteral("newGraph"));
        newGraph->resize(485, 278);
        newGraphPlot = new QCustomPlot(newGraph);
        newGraphPlot->setObjectName(QStringLiteral("newGraphPlot"));
        newGraphPlot->setGeometry(QRect(40, 40, 401, 231));
        lblCurrentGraph = new QLabel(newGraph);
        lblCurrentGraph->setObjectName(QStringLiteral("lblCurrentGraph"));
        lblCurrentGraph->setGeometry(QRect(50, 10, 391, 16));
        QFont font;
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        lblCurrentGraph->setFont(font);

        retranslateUi(newGraph);

        QMetaObject::connectSlotsByName(newGraph);
    } // setupUi

    void retranslateUi(QDialog *newGraph)
    {
        newGraph->setWindowTitle(QApplication::translate("newGraph", "Dialog", 0));
        lblCurrentGraph->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class newGraph: public Ui_newGraph {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWGRAPH_H
