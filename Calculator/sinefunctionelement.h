#ifndef SINEFUNCTIONELEMENT_H
#define SINEFUNCTIONELEMENT_H
#include "FunctionElement.h"

class SineFunctionElement : public FunctionElement
{
public:
    SineFunctionElement();
    ~SineFunctionElement();
    double evaluate(string);
};

#endif // SINEFUNCTIONELEMENT_H
