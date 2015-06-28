
#ifndef CONSTANTELEMENT_H
#define CONSTANTELEMENT_H
#include "formulaelement.h"
#include <string>
using std::string;

namespace Formulator {
class ConstantElement: public FormulaElement {
     //Constant value in ConstantElement class
        private:
         double const_value;

      public:

    //parameterized Constructor for ConstantElement class
    ConstantElement(double x);


    //Method to get the constant value
    double getConstantValue();

    //toString() function to return object values
    string toString();



};
}

#endif // CONSTANTELEMENT_H

