#ifndef FUNCTIONELEMENT_H
#define FUNCTIONELEMENT_H
#include "FormulaElement.h"
#include <vector>


class FunctionElement : public FormulaElement
{
public:
    FunctionElement();
    ~FunctionElement();
    double evaluate(vector<token>);
};

#endif // FUNCTIONELEMENT_H
