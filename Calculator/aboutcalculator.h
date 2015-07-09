#ifndef ABOUTCALCULATOR_H
#define ABOUTCALCULATOR_H

#include <QMainWindow>

namespace Ui {
class AboutCalculator;
}

class AboutCalculator : public QMainWindow
{
    Q_OBJECT

public:
    explicit AboutCalculator(QWidget *parent = 0);
    ~AboutCalculator();

private:
    Ui::AboutCalculator *ui;
};

#endif // ABOUTCALCULATOR_H
