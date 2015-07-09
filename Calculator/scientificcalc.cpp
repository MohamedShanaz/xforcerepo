#include "scientificcalc.h"
#include "ui_scientificcalc.h"
#include "formulaelement.h"
#include "viewhelp.h"
#include "aboutcalculator.h"
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
}

void ScientificCalc::on_btnMultiple_clicked()
{
    value = value + " X ";
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
    Displaytext=ui->textEdit->toPlainText().toStdString();
    FormulaElement obj=FormulaElement();
   obj.parseFormula(Displaytext);
    value=obj.valueAsString;
    ui->textEdit->setHtml(value);
}

//Handling menu item clicks





void ScientificCalc::on_menuItemViewHelp_triggered()
{
   /*ViewHelp v;
   v.setModal(true);
   v.exec();*/
   viewhelp=new ViewHelp(this);
   viewhelp->show();

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
