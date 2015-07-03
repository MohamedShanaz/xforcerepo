#include "scientificcalc.h"
#include "ui_scientificcalc.h"
#include "formulaelement.h"
#include <string>
using std::string;
QString value="", total="";
int fn,Sc;
QString Displaytext;

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


void ScientificCalc::on_btnOne_clicked()
{
    value = value + "1";
    ui->textEdit->setHtml(value);
}

void ScientificCalc::on_btnTwo_clicked()
{
    value = value + "2";
    ui->textEdit->setHtml(value);
}

void ScientificCalc::on_btnThree_clicked()
{
    value = value + "3";
    ui->textEdit->setHtml(value);
}

void ScientificCalc::on_btnFour_clicked()
{
    value = value + "4";
    ui->textEdit->setHtml(value);
}

void ScientificCalc::on_btnFive_clicked()
{
    value = value + "5";
    ui->textEdit->setHtml(value);
}

void ScientificCalc::on_btnSix_clicked()
{
    value = value + "6";
    ui->textEdit->setHtml(value);
}

void ScientificCalc::on_btnSeven_clicked()
{
    value = value + "7";
    ui->textEdit->setHtml(value);
}

void ScientificCalc::on_btnEight_clicked()
{
    value = value + "8";
    ui->textEdit->setHtml(value);
}

void ScientificCalc::on_btnNine_clicked()
{
    value = value + "9";
    ui->textEdit->setHtml(value);
}


void ScientificCalc::on_btnBackspace_clicked()
{
    Displaytext =ui->textEdit->toPlainText();
    int LastIndex=Displaytext.length();
    value=ui->textEdit->toPlainText().remove(LastIndex-1);
    ui->textEdit->setHtml(value);
}

void ScientificCalc::on_btnPlus_clicked()
{
    //Plus button
    value = value + "+";
    ui->textEdit->setHtml(value);
}
