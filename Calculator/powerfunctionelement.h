#ifndef POWERFUNCTIONELEMENT_H
#define POWERFUNCTIONELEMENT_H
#include "FunctionElement.h"

class PowerFunctionElement : public FunctionElement
{
public:
    PowerFunctionElement();
    ~PowerFunctionElement();
     double evaluate(vector<token>);
};

#endif // POWERFUNCTIONELEMENT_H
