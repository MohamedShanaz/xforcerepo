#include "scientificcalc.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ScientificCalc window;


    window.setWindowTitle("FormCalc Scientific Calculator");
    window.show();


    return a.exec();
}


