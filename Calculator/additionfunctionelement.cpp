#include "additionfunctionelement.h"
#include "scientificcalc.h"
#include <QMessageBox>
#include <string>
#include <algorithm>
#include <functional>
#include <cctype>
#include <locale>

AdditionFunctionElement::AdditionFunctionElement()
{

}

AdditionFunctionElement::~AdditionFunctionElement()
{

}

double AdditionFunctionElement::evaluate(vector<token> tokens){

    double answer=0.0;

    for(unsigned int i=0;i<tokens.size();i++)
       {

          if(tokens[i].number){
              std::ostringstream ss;
              ss << tokens[i].f;
              std::string s(ss.str());
              answer=answer +tokens[i].f;
          }
    }

 //ScientificCalc obj;


// obj.value=answer;


  return answer;
}
