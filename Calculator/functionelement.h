#ifndef FUNCTIONELEMENT_H
#define FUNCTIONELEMENT_H
#include "FormulaElement.h"
#include <vector>
#include <sstream>

class FunctionElement : public FormulaElement
{

public:

 const char *expressionToParse;  // TO store the Mathematical Expression temporarily
    FunctionElement();  // Constructor for FunctionElement
    ~FunctionElement();
// Evaluate the Mathematical Expression by passing the expression to different subclasses
    double evaluate(vector<token>,string);
    // Below Method are used to evaluate Mix
    char peek();
    char get();
    int number();
    int factor();
    int term();
    int expression();
};

#endif // FUNCTIONELEMENT_H
