#include "scientificcalc.h"
#include "ui_scientificcalc.h"
#include "formulaelement.h"

ScientificCalc::ScientificCalc(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ScientificCalc)
{
    ui->setupUi(this);
}

ScientificCalc::~ScientificCalc()
{
    delete ui;
}

void ScientificCalc::test(){

}

void ScientificCalc::on_pushButton_7_clicked()
{



}

void ScientificCalc::on_pushButton_10_clicked()
{

}
