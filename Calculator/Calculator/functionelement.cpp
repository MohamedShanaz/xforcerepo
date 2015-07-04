#include "functionelement.h"
#include "additionfunctionelement.h"
#include <string>
#include <QMessageBox>

FunctionElement::FunctionElement()
{

}

FunctionElement::~FunctionElement()
{

}

double FunctionElement::evaluate(vector<token> tokens){

 double answer;
 bool x=true;


 for(unsigned int i=0;i<tokens.size();i++)
 {
     QMessageBox messageBox;
    if(tokens[i].number){
        std::ostringstream ss;
        ss << tokens[i].f;
        std::string s(ss.str());
       QString x= QString::fromUtf8(s.c_str());
    messageBox.critical(0,"Error",x);
    }
   /*while(x){

       token t;
       if(isalnum(parser.peek()))
          parser >> t.f;
       else
          parser >> t.c;
       t.number = (t.c==0);
       output.push_back(t);

         if(x== '+'){
             AdditionFunctionElement obj;
             obj.evaluate(tokens);
         }

     }*/
 }
    return -1.0;
}
