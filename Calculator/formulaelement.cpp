
#include "formulaelement.h"
#include "additionfunctionelement.h"
#include "scientificcalc.h"
#include "ui_scientificcalc.h"
#include "logfunctionelement.h"
#include <QMessageBox>
#include <string>
#include <algorithm>
#include <functional>
#include <cctype>
#include <locale>


FormulaElement::FormulaElement()
{

}

FormulaElement::~FormulaElement()
{

}

string FormulaElement::trim( const string& s )
  {
  string result( s );
  result.erase( result.find_last_not_of( " " ) + 1 );
  result.erase( 0, result.find_first_not_of( " " ) );
  return result;
  }


vector<token>  FormulaElement::parseFormula(string input)
{
    input.erase(remove_if(input.begin(), input.end(), isspace),input.end());  // Remove space in a string

   stringstream parser(input);
   vector<token> output;
   vector<string> vector2;

   double answer=0.0; // just testing purpose
   while(parser)
   {
       token t;
            if(isalnum(parser.peek())){
               parser >> t.f;
            }else{
               parser >> t.c;
            }

            t.number = (t.c==0);
            output.push_back(t);
   }
   output.pop_back();



   for(unsigned int i=0;i<output.size();i++)
   {
      if(output[i].number){
          std::ostringstream ss;
          ss << output[i].f;
          std::string s(ss.str());
          vector2.push_back(s);
      }
      else{
          std::ostringstream ssi;
          ssi <<output[i].c;
          std::string si(ssi.str());

     if (si =="+" | si=="-" | si=="^" | si=="/" | si=="(" | si==")" | si=="!")
         vector2.push_back(si);

      }  // End for else

   } // end for the for loop

   //Second tokenize
     istringstream iss( input );
     string  word;
     int cntr = 0,x;
     while (getline( iss, word, '(' ))
       {
         FunctionElement obj;
    //   cout << "word " << ++cntr << ": " << obj.trim( word ) << '\n';
         ++cntr;
       if(cntr==1){
           if(obj.trim(word)=="Log"){
               obj.evaluate(output,input);
           }
       }
       else if(cntr==1){
           if(obj.trim(word)=="Sin"){
               obj.evaluate(output,input);
           }
       }
       else if(cntr==1){
           if(obj.trim(word)=="Cos"){
               obj.evaluate(output,input);
           }
       }
      }  // End for While


       FunctionElement objFunctionElement;
      answer= objFunctionElement.evaluate(output,input);

    SetAnswer(answer);
   return output;
}

void FormulaElement::SetAnswer(double ans){
   double valueAsDouble = ans;
   valueAsString = QString::number(valueAsDouble);
}


bool FormulaElement::is_number(string s){
  /*  std::string::const_iterator it = s.begin();
       while (it != s.end() && std::isdigit(*it)) ++it;
       return !s.empty() && it == s.end();*/
    return "";
}

bool FormulaElement::is_varaible(string s){
    //return (s.length()==1 & !is_number(s) & isalpha(s.charAt(0)));
return "";
}
