#include "scientificcalc.h"
#include "ui_scientificcalc.h"
#include "formulaelement.h"
#include "viewhelp.h"
#include "aboutcalculator.h"
#include "graphformula.h"
#include <string>
#include <algorithm>
#include <functional>
#include <cctype>
#include <locale>
using std::string;





ScientificCalc::ScientificCalc(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ScientificCalc)
{
    ui->setupUi(this);
    ui->progressBar->setMinimum(0);
    // ui->progressBar->setMaximum(0);
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
   string x;
   string value2;
   x = ui->textEdit->toPlainText().toStdString();  // Use toStdString() To convert QString to string
    // To omit space at the end
   x.erase(std::find_if(x.rbegin(), x.rend(), std::not1(std::ptr_fun<int, int>(std::isspace))).base(), x.end());
   value2=x.substr(0, x.size()-1);  // remove last charecter
   value = QString::fromUtf8(value2.c_str()); // to convert string to Qstring
   ui->textEdit->setHtml(value);
}

void ScientificCalc::on_btnPlus_clicked()
{
    //Plus button
    value = value + " + ";
    ui->textEdit->setHtml(value);
}

void ScientificCalc::on_btnClear_clicked()
{
    value="";
    ui->textEdit->setHtml(value);
    ui->progressBar->setValue(0);
}

void ScientificCalc::on_btnMultiple_clicked()
{
    value = value + " * ";
    ui->textEdit->setHtml(value);
}

void ScientificCalc::on_btnDivide_clicked()
{
    value = value + " / ";
    ui->textEdit->setHtml(value);
}

void ScientificCalc::on_btnSquareroot_clicked()
{
    value ="√"+value;
    ui->textEdit->setHtml(value);
}

void ScientificCalc::on_btnMinus_clicked()
{
    value = value + " - ";
    ui->textEdit->setHtml(value);
}

void ScientificCalc::on_btnEqual_clicked()
{
    ui->progressBar->setValue(100);
    Displaytext=ui->textEdit->toPlainText().toStdString();
    FormulaElement obj=FormulaElement();
   obj.parseFormula(Displaytext);
    value=obj.valueAsString;
    ui->textEdit->setHtml(value);
}

//Handling menu item clicks





void ScientificCalc::on_menuItemViewHelp_triggered()
{

   viewhelp=new ViewHelp(this);
   viewhelp->show();

}

void ScientificCalc::on_CreateNewGraph_triggered()
{

   graphformula =new GraphFormula(this);
   graphformula->show();

}

void ScientificCalc::on_actionAboutCalculator_triggered()
{

   aboutcalculator =new AboutCalculator(this);
   aboutcalculator->show();

}


void ScientificCalc::on_btnOpenBracket_clicked()
{
    value = value + " ( ";
    ui->textEdit->setHtml(value);
}

void ScientificCalc::on_btnCloseBracket_clicked()
{
    value = value + " ) ";
    ui->textEdit->setHtml(value);
}

void ScientificCalc::on_btnDot_clicked()
{
    value = value + ".";
    ui->textEdit->setHtml(value);
}

void ScientificCalc::on_Xforce_clicked()
{
    value = "'X-Force Group'";
    ui->textEdit->setHtml(value);
}

void ScientificCalc::on_btnZero_clicked()
{
    value = value + "0";
    ui->textEdit->setHtml(value);
}



void ScientificCalc::on_btnToAnyPower_clicked()
{
    string str;
    QString value2;
    str = ui->textEdit->toPlainText().toStdString();
    int i=str.length();
    string base=str.substr(0,str.size());  // To get the last enetered character
    value2 = QString::fromUtf8(base.c_str());
    value= value2 +"^";
ui->textEdit->setHtml(value);
}

void ScientificCalc::on_btnToPower2_clicked()
{
    string str;
    QString value2;
    str = ui->textEdit->toPlainText().toStdString();
    int i=str.length();
    string base=str.substr(0,str.size());
    value2 = QString::fromUtf8(base.c_str());
    value= value2 +"^2";
ui->textEdit->setHtml(value);
}
