#include "aboutcalculator.h"
#include "ui_aboutcalculator.h"

AboutCalculator::AboutCalculator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AboutCalculator)
{
    ui->setupUi(this);
    this->setWindowTitle("About Calculator");
    this->setFixedSize(403,380);
    ui->textEdit->setDisabled(true);
    ui->textEdit_2->setDisabled(true);

}

AboutCalculator::~AboutCalculator()
{
    delete ui;
}
