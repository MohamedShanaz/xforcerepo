#ifndef GRAPHFORMULA_H
#define GRAPHFORMULA_H

#include <QDialog>
#include "qcustomplot.h"
#include "newgraph.h"


namespace Ui {
class GraphFormula;
}

class GraphFormula : public QDialog
{
    Q_OBJECT

public:
    explicit GraphFormula(QWidget *parent = 0);
    ~GraphFormula();
    void setupQuadraticDemo(QCustomPlot *customPlot);

private slots:


    void on_GraphFormula_accepted();



    void on_trigonometricGraphClick_clicked();

public:
 Ui::GraphFormula *ui;
 newGraph *nGraph;


};

#endif // GRAPHFORMULA_H
