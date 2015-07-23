#include "cosinefunctionelement.h"

CosineFunctionElement::CosineFunctionElement()
{

}

CosineFunctionElement::~CosineFunctionElement()
{

}

double CosineFunctionElement::evaluate(string input)
{
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
      cout<<x<<"\n";
      //The value should be multiplied by (pi/180) to
      //convert from radian to degrees
    answer = cos(x*(3.14159/180));
    return answer;
}

