#include "newgraph.h"
#include "ui_newgraph.h"
#include "graphformula.h"

newGraph::newGraph(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::newGraph)
{
    ui->setupUi(this);
    this->setWindowTitle("New Graph");




}

void newGraph::getParametersForGraph(int x,double val)
{
   if(x==1)
   {

     ui->lblCurrentGraph->setText("Graph For Sin "+ QString::number(val));
   }

   else if(x==2)
   {

     ui->lblCurrentGraph->setText("Graph For Cos "+QString::number(val));
   }

   else if(x==3)
   {

     ui->lblCurrentGraph->setText("Graph For Tan "+QString::number(val));
   }
   setupTrigonometricGraph(ui->newGraphPlot,x,val);
}

newGraph::~newGraph()
{
    delete ui;
}


//xValue decides which trigonometric function to perfom
//1 => Sin  2=> Cos  3=>Tan

void newGraph::setupTrigonometricGraph(QCustomPlot *customPlot,int y,double val)
{

 // QMessageBox::information(NULL, "info", QString::number(val));

    if(y==1){
        // add two new graphs and set their look:
        customPlot->addGraph();
        customPlot->graph(0)->setPen(QPen(Qt::blue)); // line color blue for first graph
        customPlot->graph(0)->setBrush(QBrush(QColor(0, 0, 255, 20))); // first graph will be filled with translucent blue
        customPlot->addGraph();
        customPlot->graph(1)->setPen(QPen(Qt::red)); // line color red for second graph
        // generate some points of data (y0 for first, y1 for second graph):
        QVector<double> x(250), y0(250), y1(250);
    for (int i=0; i<100; i++)
    {
    x[i] = i;
    y0[i] = sin(val*(3.14159/180)*x[i]);
    //y1[i] = exp(-i/150.0); // exponential envelope
      }
    customPlot->xAxis2->setVisible(true);
    customPlot->xAxis2->setTickLabels(false);
    customPlot->yAxis2->setVisible(true);
    customPlot->yAxis2->setTickLabels(false);
    // make left and bottom axes always transfer their ranges to right and top axes:
    connect(customPlot->xAxis, SIGNAL(rangeChanged(QCPRange)), customPlot->xAxis2, SLOT(setRange(QCPRange)));
    connect(customPlot->yAxis, SIGNAL(rangeChanged(QCPRange)), customPlot->yAxis2, SLOT(setRange(QCPRange)));
    // pass data points to graphs:
    customPlot->graph(0)->setData(x, y0);
    //customPlot->graph(1)->setData(x, y1);
    // let the ranges scale themselves so graph 0 fits perfectly in the visible area:
    customPlot->graph(0)->rescaleAxes();
    customPlot->replot();
    // same thing for graph 1, but only enlarge ranges (in case graph 1 is smaller than graph 0):
   // customPlot->graph(1)->rescaleAxes(true);
    // Note: we could have also just called customPlot->rescaleAxes(); instead
    // Allow user to drag axis ranges with mouse, zoom with mouse wheel and select graphs by clicking:
    customPlot->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom | QCP::iSelectPlottables);

    }

    else if(y==2){
        // add two new graphs and set their look:
        customPlot->addGraph();
        customPlot->graph(0)->setPen(QPen(Qt::blue)); // line color blue for first graph
        customPlot->graph(0)->setBrush(QBrush(QColor(0, 0, 255, 20))); // first graph will be filled with translucent blue
        customPlot->addGraph();
        customPlot->graph(1)->setPen(QPen(Qt::red)); // line color red for second graph
        // generate some points of data (y0 for first, y1 for second graph):
        QVector<double> x(250), y0(250), y1(250);
    for (int i=0; i<100; i++)
    {
    x[i] = i;
    y0[i] = cos(val*(3.14159/180)*x[i]);
    //y1[i] = exp(-i/150.0); // exponential envelope
   }
    customPlot->xAxis2->setVisible(true);
    customPlot->xAxis2->setTickLabels(false);
    customPlot->yAxis2->setVisible(true);
    customPlot->yAxis2->setTickLabels(false);
    // make left and bottom axes always transfer their ranges to right and top axes:
    connect(customPlot->xAxis, SIGNAL(rangeChanged(QCPRange)), customPlot->xAxis2, SLOT(setRange(QCPRange)));
    connect(customPlot->yAxis, SIGNAL(rangeChanged(QCPRange)), customPlot->yAxis2, SLOT(setRange(QCPRange)));
    // pass data points to graphs:
    customPlot->graph(0)->setData(x, y0);

    // let the ranges scale themselves so graph 0 fits perfectly in the visible area:
    customPlot->graph(0)->rescaleAxes();
    // same thing for graph 1, but only enlarge ranges (in case graph 1 is smaller than graph 0):
   // customPlot->graph(1)->rescaleAxes(true);
    // Note: we could have also just called customPlot->rescaleAxes(); instead
    // Allow user to drag axis ranges with mouse, zoom with mouse wheel and select graphs by clicking:
    customPlot->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom | QCP::iSelectPlottables);

    }
    else if(y==3){
        // add two new graphs and set their look:
        customPlot->addGraph();
        customPlot->graph(0)->setPen(QPen(Qt::blue)); // line color blue for first graph
        customPlot->graph(0)->setBrush(QBrush(QColor(0, 0, 255, 20))); // first graph will be filled with translucent blue
        customPlot->addGraph();
        customPlot->graph(1)->setPen(QPen(Qt::red)); // line color red for second graph
        // generate some points of data (y0 for first, y1 for second graph):
        QVector<double> x(250), y0(250), y1(250);
    for (int i=0; i<100; i+=5)
    {
    x[i] = i;
    y0[i] = tan(val*(3.14159/180)*x[i]);
    //y1[i] = exp(-i/150.0); // exponential envelope
      }
    customPlot->xAxis2->setVisible(true);
    customPlot->xAxis2->setTickLabels(false);
    customPlot->yAxis2->setVisible(true);
    customPlot->yAxis2->setTickLabels(false);
    // make left and bottom axes always transfer their ranges to right and top axes:
    connect(customPlot->xAxis, SIGNAL(rangeChanged(QCPRange)), customPlot->xAxis2, SLOT(setRange(QCPRange)));
    connect(customPlot->yAxis, SIGNAL(rangeChanged(QCPRange)), customPlot->yAxis2, SLOT(setRange(QCPRange)));
    // pass data points to graphs:
    customPlot->graph(0)->setData(x, y0);
    //customPlot->graph(1)->setData(x, y1);
    // let the ranges scale themselves so graph 0 fits perfectly in the visible area:
    customPlot->graph(0)->rescaleAxes();
    // same thing for graph 1, but only enlarge ranges (in case graph 1 is smaller than graph 0):
   // customPlot->graph(1)->rescaleAxes(true);
    // Note: we could have also just called customPlot->rescaleAxes(); instead
    // Allow user to drag axis ranges with mouse, zoom with mouse wheel and select graphs by clicking:
    customPlot->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom | QCP::iSelectPlottables);

    }




}
