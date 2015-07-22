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
    for(unsigned int i=0;i<tokens.size();i++)
    {
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
