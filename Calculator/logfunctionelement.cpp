#include "logfunctionelement.h"

LogFunctionElement::LogFunctionElement()
{

}

LogFunctionElement::~LogFunctionElement()
{

}

double LogFunctionElement::evaluate(string input){

    double answer;

    input += " ";
      istringstream iss( input );
      string        word;
      int           cntr = 0,x;
      while (getline( iss, word, '(' ))
        {
        cout << "word " << ++cntr << ": " << FunctionElement::trim( word ) << '\n';
        if(cntr==2){
            string y=FunctionElement::trim(word);
            y.substr(0, y.size()-1);
             istringstream buffer(y);  // convert string to int
             buffer >> x;
        }

        }
    answer = log (x);
   // cout<<result;

  return answer;
}
