#ifndef GRAPHFORMULA_H
#define GRAPHFORMULA_H

#include <QDialog>

namespace Ui {
class GraphFormula;
}

class GraphFormula : public QDialog
{
    Q_OBJECT

public:
    explicit GraphFormula(QWidget *parent = 0);
    ~GraphFormula();

private:
    Ui::GraphFormula *ui;
};

#endif // GRAPHFORMULA_H
