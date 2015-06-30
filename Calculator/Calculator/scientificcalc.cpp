#include "scientificcalc.h"
#include "ui_scientificcalc.h"
#include "formulaelement.h"


QString value="", total="";
int fn,Sc;


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

    value = value + "7";

    ui->textEdit->setHtml(value);
  // ui->textEdit->setText(value);

}

void ScientificCalc::on_pushButton_10_clicked()
{
    value = value + "7";
    ui->textEdit->setHtml(value);
}

void ScientificCalc::on_pushButton_18_clicked()
{
    value = value + "5";

    ui->textEdit->setHtml(value);
}

void ScientificCalc::on_pushButton_20_clicked()
{
    value = value + "1";
    ui->textEdit->setHtml(value);
}

void ScientificCalc::on_pushButton_23_clicked()
{
    value = value + "2";
    ui->textEdit->setHtml(value);
}

void ScientificCalc::on_pushButton_24_clicked()
{
    value = value + "3";
    ui->textEdit->setHtml(value);
}

void ScientificCalc::on_pushButton_15_clicked()
{
    value = value + "4";
    ui->textEdit->setHtml(value);
}

void ScientificCalc::on_pushButton_19_clicked()
{
    value = value + "6";
    ui->textEdit->setHtml(value);
}

void ScientificCalc::on_pushButton_13_clicked()
{
    value = value + "8";
    ui->textEdit->setHtml(value);
}

void ScientificCalc::on_pushButton_14_clicked()
{
    value = value + "9";
    ui->textEdit->setHtml(value);
}
