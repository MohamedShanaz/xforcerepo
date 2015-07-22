#ifndef LOGFUNCTIONELEMENT_H
#define LOGFUNCTIONELEMENT_H
#include "FunctionElement.h"

class LogFunctionElement : public FunctionElement
{
public:
    LogFunctionElement();
    ~LogFunctionElement();
     double evaluate(string);
};

#endif // LOGFUNCTIONELEMENT_H
