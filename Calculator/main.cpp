#include "scientificcalc.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ScientificCalc w;
    w.show();

    return a.exec();
}
