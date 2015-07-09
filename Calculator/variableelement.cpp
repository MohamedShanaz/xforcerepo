#include "variableelement.h"

namespace Formulator {

VariableElement::VariableElement(string  pr_var_name)
{
   var_name=pr_var_name;

}



void  VariableElement:: setVariableValue(double set_value)
{
    var_value=set_value;

}


double VariableElement:: getVariableValue()
{
return var_value;
}

string VariableElement::toString()
{
    return var_name;

}


}

