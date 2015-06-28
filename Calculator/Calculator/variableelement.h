#ifndef VARIABLEELEMENT_H
#define VARIABLEELEMENT_H
#include "functionelement.h"
#include<string>
using std::string;

namespace Formulator
{
class VariableElement:public FormulaElement
{
private:
  //Variable to assign variable name
 string  var_name;

//Variable to assign the variable's value
 double var_value;



public:
//Constructor for VariableElement class
VariableElement(string pr_var_name);

//Function to set the variable value
void setVariableValue(double set_value);


//Function to get the variable's value
double getVariableValue();

//toString method
string toString();



};
}

#endif // VARIABLEELEMENT_H

