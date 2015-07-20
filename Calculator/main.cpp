#include "scientificcalc.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ScientificCalc window;

    window.setWindowTitle("FormCalc Scientific Calculator");
    window.show();


        window.setFixedSize(403,380);




    return a.exec();
}


