#include "aboutcalculator.h"
#include "ui_aboutcalculator.h"

AboutCalculator::AboutCalculator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AboutCalculator)
{
    ui->setupUi(this);
}

AboutCalculator::~AboutCalculator()
{
    delete ui;
}
