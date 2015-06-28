#include "constantelement.h"
#include<string>
#include <cctype>
#include <stdlib.h>
#include <sstream>

using namespace std;



namespace Formulator {

    ConstantElement::ConstantElement(double pr_const)
    {

    //pr_const= Constant value passed as a parameter
      const_value=pr_const;

    }

    double ConstantElement::getConstantValue()
    {
        return  const_value;
    }

   string ConstantElement::toString()
   {
       std::ostringstream os;

       os <<getConstantValue();
      std::string str= os.str();
      return (str);


   }

} /* namespace Formulator */







