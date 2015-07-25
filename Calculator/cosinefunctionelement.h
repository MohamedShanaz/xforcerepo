#ifndef COSINEFUNCTIONELEMENT_H
#define COSINEFUNCTIONELEMENT_H
#include "FunctionElement.h"

class CosineFunctionElement : public FunctionElement
{
public:
    CosineFunctionElement(); //Constructor for CosineFunctionElement
    ~CosineFunctionElement();
    double evaluate(string); // Method to Evaluate Mathmatical expression having Cos sign
};

#endif // COSINEFUNCTIONELEMENT_H
