#include "viewhelp.h"
#include "ui_viewhelp.h"

ViewHelp::ViewHelp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ViewHelp)
{
    ui->setupUi(this);
    this->setWindowTitle("Help");
     this->setFixedSize(403,380);
    ui->textEdit->setDisabled(true);
}

ViewHelp::~ViewHelp()
{
    delete ui;
}
