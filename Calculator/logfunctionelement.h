#ifndef LOGFUNCTIONELEMENT_H
#define LOGFUNCTIONELEMENT_H
#include "FunctionElement.h"

class LogFunctionElement : public FunctionElement
{
public:
    LogFunctionElement(); // Constructor for LogFunctionElement
    ~LogFunctionElement();
     double evaluate(string); // Method to Evaluate Mathmatical expression having Log sign
};

#endif // LOGFUNCTIONELEMENT_H
