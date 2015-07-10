#include "multiplefunctionelement.h"

MultipleFunctionElement::MultipleFunctionElement()
{

}

MultipleFunctionElement::~MultipleFunctionElement()
{

}


double MultipleFunctionElement::evaluate(vector<token> tokens){

    double answer=1.0;

    for(unsigned int i=0;i<tokens.size();i++)
       {

          if(tokens[i].number){
              std::ostringstream ss;
              ss << tokens[i].f;
              std::string s(ss.str());
              answer=answer*tokens[i].f;
          }

    }


  return answer;
}