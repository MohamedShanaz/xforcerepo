#ifndef POWERFUNCTIONELEMENT_H
#define POWERFUNCTIONELEMENT_H
#include "FunctionElement.h"

class PowerFunctionElement : public FunctionElement
{
public:
    PowerFunctionElement(); // Constructor for PowerFunctionElement
    ~PowerFunctionElement();
     double evaluate(vector<token>); // Method to Evaluate Mathmatical expression having ^ sign
};

#endif // POWERFUNCTIONELEMENT_H
