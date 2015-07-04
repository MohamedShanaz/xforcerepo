#include "viewhelp.h"
#include "ui_viewhelp.h"

ViewHelp::ViewHelp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ViewHelp)
{
    ui->setupUi(this);
}

ViewHelp::~ViewHelp()
{
    delete ui;
}
