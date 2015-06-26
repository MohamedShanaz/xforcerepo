#ifndef SCIENTIFICCALC_H
#define SCIENTIFICCALC_H

#include <QMainWindow>

namespace Ui {
class ScientificCalc;
}

class ScientificCalc : public QMainWindow
{
    Q_OBJECT

public:
    explicit ScientificCalc(QWidget *parent = 0);
    ~ScientificCalc();
    void test();

private:
    Ui::ScientificCalc *ui;
};

#endif // SCIENTIFICCALC_H
