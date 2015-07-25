#ifndef MULTIPLEFUNCTIONELEMENT_H
#define MULTIPLEFUNCTIONELEMENT_H
#include "FunctionElement.h"

class MultipleFunctionElement : public FunctionElement
{
public:
    MultipleFunctionElement();  // Constructor for MultipleFunctionElement
    ~MultipleFunctionElement();
     double evaluate(vector<token>); // Method to Evaluate Mathmatical expression having * sign
};

#endif // MULTIPLEFUNCTIONELEMENT_H
