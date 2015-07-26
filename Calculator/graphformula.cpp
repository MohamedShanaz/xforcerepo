#include "graphformula.h"
#include "ui_graphformula.h"
#include "qcustomplot.h"
#include "newgraph.h"

GraphFormula::GraphFormula(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GraphFormula)
{
    ui->setupUi(this);
   this->setWindowTitle("Create Graph");


}

GraphFormula::~GraphFormula()
{
    delete ui;
}



void GraphFormula::on_GraphFormula_accepted()
{

}



void GraphFormula::setupQuadraticDemo(QCustomPlot *customPlot)
{

  QVector<double> x(101), y(101); // initialize with entries 0..100
  for (int i=0; i<101; ++i)
  {
    x[i] = i/50.0 - 1; // x goes from -1 to 1
    y[i] = x[i]*x[i];  // let's plot a quadratic function
  }
  // create graph and assign data to it:
  customPlot->addGraph();
  customPlot->graph(0)->setData(x, y);
  // give the axes some labels:
  customPlot->xAxis->setLabel("x");
  customPlot->yAxis->setLabel("y");
  // set axes ranges, so we see all data:
  customPlot->xAxis->setRange(-1, 1);
  customPlot->yAxis->setRange(0, 1);
}



void GraphFormula::on_trigonometricGraphClick_clicked()
{

    nGraph=new newGraph(this);
    if(ui->chkBoxSin->isChecked()==true)
     {

        nGraph->getParametersForGraph(1,ui->txtTrigonometricValue->text().toDouble());

        nGraph->show();
     }

     else if(ui->chkBoxCos->isChecked()==true)
     {
        nGraph->getParametersForGraph(2,ui->txtTrigonometricValue->text().toDouble());

        nGraph->show();
     }

     else if(ui->chkTan->isChecked()==true)
     {
        nGraph->getParametersForGraph(3,ui->txtTrigonometricValue->text().toDouble());

        nGraph->show();
     }






}
