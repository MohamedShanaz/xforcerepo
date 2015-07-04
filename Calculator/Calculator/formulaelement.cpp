
#include "formulaelement.h"
#include "additionfunctionelement.h"
#include "scientificcalc.h"
#include "ui_scientificcalc.h"
#include <QMessageBox>

FormulaElement::FormulaElement()
{

}

FormulaElement::~FormulaElement()
{

}



vector<token>  FormulaElement::parseFormula(string input)
{
    input ="23+69";
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
         QString x= QString::fromUtf8(s.c_str());
     messageBox.critical(0,"Error",x);
         answer=answer +output[i].f;
//messageBox.critical(0,"Error",(string)answer);
      }
      else{
          // sign
          std::ostringstream ssi;
          ssi <<output[i].c;
          std::string si(ssi.str());
            QString x= QString::fromUtf8(si.c_str());
     messageBox.critical(0,"Error",x);

    /* if (si =="+" | si=="-" | si=="^" | si=="/" | si=="(" | si==")")
         vector2.push_back(si);

      }*/

      }


   } // end for the for loop


 /*  for(unsigned int i=0;i<vector2.size();i++)
   {
   if(vector2.at(i)=="+"){
   FunctionElement obj;
   obj.evaluate(output);
   }
}*/
   std::ostringstream strs;
   strs << answer;
   std::string str = strs.str();
   QString ans= QString::fromUtf8(str.c_str());
    messageBox.critical(0,"Error",ans);
  ScientificCalc obj;
  obj.value=answer;
  obj.ui->textEdit->setText(obj.value);
//return (double)answer;

   return output;
}




/*FormulaElement FormulaElement::parseFormula(string text){

     text="23+7";
       char *Tokenizer = strdup(text.c_str());  //covert string to char*
       vector<string> vector1;
       vector<string> vector2;
       int i;
       while(Tokenizer!=NULL){
        vector1.push_back(Tokenizer);
          Tokenizer=strtok(NULL,"+-/^()\t");
       }

       for(int i=0;i<vector1.size();++i){
       string str=vector1.at(i);
        //cout<<str + " ";

         if (str.equals("+") | str.equals("-") | str.equals("^") | str.equals("/") | str.equals("(") | str.equals(")"))
         vector2.push_back(str);

         if (is_number(str)| is_varaible(str)){
                     vector2.push_back(str);

                 }


       } // End for loop
        return 0;

FormulaElement obj; // did to return a FormulaElement object
    return obj;
}
*/
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
