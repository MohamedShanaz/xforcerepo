#ifndef VIEWHELP_H
#define VIEWHELP_H

#include <QDialog>

namespace Ui {
class ViewHelp;
}

class ViewHelp : public QDialog
{
    Q_OBJECT

public:
    explicit ViewHelp(QWidget *parent = 0);
    ~ViewHelp();

private:
    Ui::ViewHelp *ui;
};

#endif // VIEWHELP_H
