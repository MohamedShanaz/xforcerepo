#ifndef AdditionFUNCTIONELEMENT_H
#define AdditionFUNCTIONELEMENT_H
#include "FunctionElement.h"





class AdditionFunctionElement : public FunctionElement
{
public:
    AdditionFunctionElement(); // Constructor for AdditionElement
    ~AdditionFunctionElement();
    double evaluate(vector<token>); // Method to Evaluate Mathmatical expression having + sign
};

#endif // AdditionFUNCTIONELEMENT_H
