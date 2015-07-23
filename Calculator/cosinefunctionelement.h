#ifndef COSINEFUNCTIONELEMENT_H
#define COSINEFUNCTIONELEMENT_H
#include "FunctionElement.h"

class CosineFunctionElement : public FunctionElement
{
public:
    CosineFunctionElement();
    ~CosineFunctionElement();
    double evaluate(string);
};

#endif // COSINEFUNCTIONELEMENT_H
