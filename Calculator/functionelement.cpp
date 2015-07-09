#include "functionelement.h"
#include "additionfunctionelement.h"
#include "subtractionfunctionelement.h"
#include "scientificcalc.h"
#include "formulaelement.h"
#include "multiplefunctionelement.h"
#include "dividefunctionelement.h"
#include <string>
#include <QMessageBox>


FunctionElement::FunctionElement()
{

}

FunctionElement::~FunctionElement()
{

}



double FunctionElement::evaluate(vector<token> tokens,string input){

 double answer;
 bool x=true;
int pluscount=0,minuscount=0,multiplecount=0;
char sign;

 for(unsigned int i=0;i<tokens.size();i++)
 {
     std::ostringstream ssi;
     ssi <<tokens[i].c;
     std::string si(ssi.str());
     if(tokens[i].c == '+'){
         ++pluscount;
         sign=tokens[i].c;
     }
     if(tokens[i].c == '-'){
         ++minuscount;
         sign=tokens[i].c;
     }
     if(tokens[i].c == 'X'){
         ++multiplecount;
         sign=tokens[i].c;
     }

 }

if(pluscount>1 && minuscount==0 && multiplecount==0){
    if(sign == '+'){
    AdditionFunctionElement obj2;
    answer =obj2.evaluate(tokens);
    }
}
else if(pluscount==0 && minuscount>1 && multiplecount==0){
   /* if(sign == '-'){
    SubtractionFunctionElement subtract;
    answer =subtract.evaluate(tokens);
    }*/
    expressionToParse= input.c_str();
        answer=expression();
}

else if(pluscount==0 && minuscount==0 && multiplecount>1){
    if(sign == 'X'){
    MultipleFunctionElement objMultipleElement;
    answer =objMultipleElement.evaluate(tokens);
    }
}
else{

expressionToParse= input.c_str();
    answer=expression();
}

    return answer;


}    // Ende for evaluate;

//const char * expressionToParse = "";
char FunctionElement::peek()
{
    return *expressionToParse;
}

char FunctionElement::get()
{
    return *expressionToParse++;
}

int expression();

int FunctionElement::number()
{
    int result = get() - '0';
    while (peek() >= '0' && peek() <= '9')
    {
        result = 10*result + get() - '0';
    }
    return result;
}

int FunctionElement::factor()
{
    if (peek() >= '0' && peek() <= '9')
        return number();
    else if (peek() == '(')
    {
        get(); // '('
        int result = expression();
        get(); // ')'
        return result;
    }
    else if (peek() == '-')
    {
        get();
        return -factor();
    }
    return 0; // error
}

int FunctionElement::term()
{
    int result = factor();
    while (peek() == 'X' || peek() == '/')
        if (get() == 'X')
            result *= factor();
        else
            result /= factor();
    return result;
}

int FunctionElement::expression()
{
    int result = term();
    while (peek() == '+' || peek() == '-')
        if (get() == '+')
            result += term();
        else
            result -= term();
    return result;
}

