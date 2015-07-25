#ifndef SINEFUNCTIONELEMENT_H
#define SINEFUNCTIONELEMENT_H
#include "FunctionElement.h"

class SineFunctionElement : public FunctionElement
{
public:
    SineFunctionElement();   // Constructor for SineFunctionElement
    ~SineFunctionElement();
    double evaluate(string);  // Method to Evaluate Mathmatical expression having sin sign
};

#endif // SINEFUNCTIONELEMENT_H
