#ifndef FUNCTIONELEMENT_H
#define FUNCTIONELEMENT_H
#include "FormulaElement.h"
#include <vector>
#include <sstream>

class FunctionElement : public FormulaElement
{

public:

 const char *expressionToParse;
    FunctionElement();
    ~FunctionElement();

    double evaluate(vector<token>,string);
    char peek();
    char get();
    int number();
    int factor();
    int term();
    int expression();
};

#endif // FUNCTIONELEMENT_H
