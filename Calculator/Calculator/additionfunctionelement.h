#ifndef AdditionFUNCTIONELEMENT_H
#define AdditionFUNCTIONELEMENT_H
#include "FunctionElement.h"





class AdditionFunctionElement : public FunctionElement
{
public:
    AdditionFunctionElement();
    ~AdditionFunctionElement();
    double evaluate(vector<token>);
};

#endif // AdditionFUNCTIONELEMENT_H
