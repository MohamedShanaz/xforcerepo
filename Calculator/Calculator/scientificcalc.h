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

private slots:

    void on_btnSeven_clicked();

    void on_btnOne_clicked();

    void on_btnTwo_clicked();

    void on_btnThree_clicked();

    void on_btnFour_clicked();

    void on_btnFive_clicked();

    void on_btnSix_clicked();

    void on_btnEight_clicked();

    void on_btnNine_clicked();

    void on_btnBackspace_clicked();

    void on_btnPlus_clicked();

    void on_btnClear_clicked();

    void on_btnMultiple_clicked();

    void on_btnDivide_clicked();

    void on_btnSquareroot_clicked();

    void on_btnMinus_clicked();

    void on_btnEqual_clicked();

private:
    Ui::ScientificCalc *ui;
};

#endif // SCIENTIFICCALC_H
