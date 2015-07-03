#include "formulaelement.h"

FormulaElement::FormulaElement()
{

}

FormulaElement::~FormulaElement()
{

}

FormulaElement FormulaElement::parseFormula(string text){

   /*  text="23+7";
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
        cout<<str + " ";

         if (str.equals("+") | str.equals("-") | str.equals("^") | str.equals("/") | str.equals("(") | str.equals(")"))
         vector2.push_back(str);

         if (is_number(str)| is_varaible(str)){
                     vector2.push_back(str);

                 }


       } // End for loop
        return 0;
*/
FormulaElement obj; // did to return a FormulaElement object
    return obj;
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
