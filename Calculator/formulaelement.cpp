
#include "formulaelement.h"
#include "additionfunctionelement.h"
#include "scientificcalc.h"
#include "ui_scientificcalc.h"
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



vector<token>  FormulaElement::parseFormula(string input)
{
    input.erase(remove_if(input.begin(), input.end(), isspace),input.end());  // Remove space in a string
  //  input ="23+69";


   // if(input)
   stringstream parser(input);
   vector<token> output;
   vector<string> vector2;
    QMessageBox messageBox;
   double answer=0.0; // just testing purpose
   while(parser)
   {
       token t;
            if(isalnum(parser.peek()))
               parser >> t.f;
            else
               parser >> t.c;
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
          // sign
          std::ostringstream ssi;
          ssi <<output[i].c;
          std::string si(ssi.str());

     if (si =="+" | si=="-" | si=="^" | si=="/" | si=="(" | si==")")
         vector2.push_back(si);

      }  // End for else




   } // end for the for loop



       FunctionElement objFunctionElement;
       //objFunctionElement.retExtStatic(input);//
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
