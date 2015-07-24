#include "functionelement.h"
#include "additionfunctionelement.h"
#include "subtractionfunctionelement.h"
#include "scientificcalc.h"
#include "formulaelement.h"
#include "multiplefunctionelement.h"
#include "dividefunctionelement.h"
#include "powerfunctionelement.h"
#include "logfunctionelement.h"
#include "sinefunctionelement.h"
#include "cosinefunctionelement.h"
#include <string>
#include <QMessageBox>
#include <string>
#include <algorithm>
#include <functional>
#include <cctype>
#include <locale>
#include<conio.h>
#include<math.h>




FunctionElement::FunctionElement()
{

}

FunctionElement::~FunctionElement()
{

}


double FunctionElement::evaluate(vector<token> tokens,string input){

 double answer,answer2;
int pluscount=0,minuscount=0,multiplecount=0,powercount=0,factorialcount=0,Fvalue;
char sign;
 vector<string> signvector;

 for(unsigned int i=0;i<tokens.size();i++)
 {
     std::ostringstream ssi;
     ssi <<tokens[i].c;
     std::string si(ssi.str());   // used to add the signs to vector
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
     if(tokens[i].c == '^'){
         ++powercount;
         sign=tokens[i].c;
     }
     if(tokens[i].c == '!'){
         ++factorialcount;
         sign=tokens[i].c;
         Fvalue=tokens[i-1].f;
     }

     if (si =="+" | si=="-" | si=="^" | si=="/" | si=="(" | si==")"| si=="!")
         signvector.push_back(si);


 }
if(factorialcount>=1 && powercount==0 && pluscount==0 && minuscount==0 && multiplecount==0){

    int fact=1;
    if(sign == '!'){
        for(int a=1;a<=Fvalue;a++)
       {
           fact=fact*a;

        }
        answer=fact;
    }
}
else if(powercount>=1 && pluscount==0 && minuscount==0 && multiplecount==0){
    if(sign == '^'){
    PowerFunctionElement obj2;
    answer =obj2.evaluate(tokens);
    }
}
else if(pluscount>=1 && minuscount==0 && multiplecount==0 && powercount==0){
    if(sign == '+'){
    AdditionFunctionElement obj2;
    answer =obj2.evaluate(tokens);
    }
}
else if(pluscount==0 && minuscount>=1 && multiplecount==0 && powercount==0){
   /* if(sign == '-'){
    SubtractionFunctionElement subtract;
    answer =subtract.evaluate(tokens);
    }*/
   expressionToParse= input.c_str();
        answer=expression();
}

else if(pluscount==0 && minuscount==0 && multiplecount>=1 && powercount==0){
    if(sign == 'X'){
    MultipleFunctionElement objMultipleElement;
    answer =objMultipleElement.evaluate(tokens);
    }
}
else{

    for(unsigned int i=0;i<signvector.size();i++)
    {
        if(signvector[i]=="^"){
    PowerFunctionElement obj2;
    answer2 =obj2.evaluate(tokens);  // answer from power function
        }

    }
    expressionToParse= input.c_str();
    answer=expression();
    answer=answer+answer2;
}

istringstream iss( input );
string  word;
int cntr = 0;
while (getline( iss, word, '(' ))
  {
  cout << "word " << ++cntr << ": " << trim( word ) << '\n';
  if(cntr==1){
      if(trim(word)=="Log"){
          LogFunctionElement obj;
          answer=obj.evaluate(input);
      }
      else if(trim(word)=="Sin"){
          SineFunctionElement obj;
          answer=obj.evaluate(input);
      }
      else if(trim(word)=="Cos"){
          CosineFunctionElement obj;
          answer=obj.evaluate(input);
      }
  }
 }  // End for While

    return answer ;


}    // End for evaluate;

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






