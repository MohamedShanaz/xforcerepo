#include "graphformula.h"
#include "ui_graphformula.h"

GraphFormula::GraphFormula(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GraphFormula)
{
    ui->setupUi(this);
   this->setWindowTitle("Create Graph");
     this->setFixedSize(403,350);
}

GraphFormula::~GraphFormula()
{
    delete ui;
}
