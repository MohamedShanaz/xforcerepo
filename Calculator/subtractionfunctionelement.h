#ifndef SubtractionFUNCTIONELEMENT_H
#define SubtractionFUNCTIONELEMENT_H
#include "FunctionElement.h"

class SubtractionFunctionElement : public FunctionElement
{
public:
    SubtractionFunctionElement();
    ~SubtractionFunctionElement();
    double evaluate(vector<token>);
};

#endif // SubtractionFUNCTIONELEMENT_H
