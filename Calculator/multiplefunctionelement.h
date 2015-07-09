#ifndef MULTIPLEFUNCTIONELEMENT_H
#define MULTIPLEFUNCTIONELEMENT_H
#include "FunctionElement.h"

class MultipleFunctionElement : public FunctionElement
{
public:
    MultipleFunctionElement();
    ~MultipleFunctionElement();
     double evaluate(vector<token>);
};

#endif // MULTIPLEFUNCTIONELEMENT_H
