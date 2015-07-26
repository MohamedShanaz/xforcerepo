
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
#include <stdlib.h>
#include<math.h>

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
   int Idterror=0;
   string msg="";


   double answer=0.0;
   while(parser)
   {
       token t;
            if(isalnum(parser.peek())){
               parser >> t.f; // number
               if(Idterror==1)Idterror--;
            }else{
               parser >> t.c; // sign
               if((t.c != '(' )&& (t.c != ')')&&(t.c != '!'))
               Idterror++;
            }

            t.number = (t.c==0);
            output.push_back(t);
   }
   output.pop_back();
   if(Idterror>1){
       msg="Syntax Error";
       answer=0.0;
       SetAnswer(answer,msg);
   }
   else{
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
     int cntr = 0;
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

    SetAnswer(answer,msg);
   }
   return output;
}

void FormulaElement::SetAnswer(double ans,string err){
   double valueAsDouble = ans;
   if(ans!=0.0)
       valueAsString = QString::number(valueAsDouble);  // Convert double to QString
   else
         valueAsString=QString::fromUtf8(err.c_str());  // convert string to QString

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
