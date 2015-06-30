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
    void on_pushButton_7_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_18_clicked();

    void on_pushButton_20_clicked();

    void on_pushButton_23_clicked();

    void on_pushButton_24_clicked();

    void on_pushButton_15_clicked();

    void on_pushButton_19_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_14_clicked();

private:
    Ui::ScientificCalc *ui;
};

#endif // SCIENTIFICCALC_H
