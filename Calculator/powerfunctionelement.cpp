#include "powerfunctionelement.h"

PowerFunctionElement::PowerFunctionElement()
{

}

PowerFunctionElement::~PowerFunctionElement()
{

}

double PowerFunctionElement::evaluate(vector<token> tokens){

    double answer=1.0;
    char sign;

    float base;
    int expo;
    int j=0;
    for(unsigned int i=0;i<tokens.size();i++)
    {

      /*  if(tokens[i].number){
          if(j==0){
              std::ostringstream ss;
            ss << tokens[i].f;
            std::string s(ss.str());
            base=tokens[i].f;
          }
          else{
              std::ostringstream ss;
            ss << tokens[i].f;
            std::string s(ss.str());
            expo=tokens[i].f;
           }
          }*/
        if(tokens[i].c == '^'){
            sign=tokens[i].c;
            base=tokens[i-1].f;
             expo=tokens[i+1].f;

        }

    }



    while (expo != 0) {
            answer *= base;
            --expo;
        }

  return answer;
}
