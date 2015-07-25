#ifndef DIVIDEFUNCTIONELEMENT_H
#define DIVIDEFUNCTIONELEMENT_H
#include "FunctionElement.h"

class DivideFunctionElement : public FunctionElement
{
public:
    DivideFunctionElement(); // Constructor for DivideFunctionElement
    ~DivideFunctionElement();
     double evaluate(vector<token>); // Method to Evaluate Mathmatical expression having / sign
};

#endif // DIVIDEFUNCTIONELEMENT_H
