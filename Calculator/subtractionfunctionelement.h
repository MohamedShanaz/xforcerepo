#ifndef SubtractionFUNCTIONELEMENT_H
#define SubtractionFUNCTIONELEMENT_H
#include "FunctionElement.h"

class SubtractionFunctionElement : public FunctionElement
{
public:
    SubtractionFunctionElement();  // Constructor for SubtractionFunctionElement
    ~SubtractionFunctionElement();
    double evaluate(vector<token>); // Method to Evaluate Mathmatical expression having - sign
};

#endif // SubtractionFUNCTIONELEMENT_H
