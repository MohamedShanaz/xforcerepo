#ifndef SCIENTIFICCALC_H
#define SCIENTIFICCALC_H
#include <QMainWindow>
#include <string>
#include <algorithm>
#include <functional>
#include <cctype>
#include <locale>
#include "viewhelp.h"

using std::string;
namespace Ui {
class ScientificCalc;
}

class ScientificCalc : public QMainWindow
{
    Q_OBJECT

public:
    QString value="",total="";
    int fn,Sc;
    string Displaytext;
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

    void on_menuItemViewHelp_triggered();

    void on_btnOpenBracket_clicked();

    void on_btnCloseBracket_clicked();

public:
    Ui::ScientificCalc *ui;
    ViewHelp *viewhelp;

};

#endif // SCIENTIFICCALC_H
