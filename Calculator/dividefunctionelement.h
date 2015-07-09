#ifndef DIVIDEFUNCTIONELEMENT_H
#define DIVIDEFUNCTIONELEMENT_H
#include "FunctionElement.h"

class DivideFunctionElement : public FunctionElement
{
public:
    DivideFunctionElement();
    ~DivideFunctionElement();
     double evaluate(vector<token>);
};

#endif // DIVIDEFUNCTIONELEMENT_H
