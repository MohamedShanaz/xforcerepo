#ifndef NEWGRAPH_H
#define NEWGRAPH_H

#include <QDialog>
#include "qcustomplot.h"

namespace Ui {
class newGraph;
}

class newGraph : public QDialog
{
    Q_OBJECT

public:
    explicit newGraph(QWidget *parent = 0);
    void setupTrigonometricGraph(QCustomPlot *customPlot,int x,double val);
    ~newGraph();
    void getParametersForGraph(int x,double val);

private:
    Ui::newGraph *ui;
};

#endif // NEWGRAPH_H
