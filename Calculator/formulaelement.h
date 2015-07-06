#ifndef FORMULAELEMENT_H
#define FORMULAELEMENT_H
#include <iostream>
#include <string>
#include <fstream>
#include <cstring>
#include <sstream>
#include <typeinfo>
#include <vector>
using std::cout;
using std::endl;
using std::vector;
using std::find;
using std::string;
using namespace std;

struct token{
      char c;
      float f;
      bool number;

      token():number(false),c(0){};
};


class FormulaElement
{
public:
    FormulaElement();
    ~FormulaElement();
    vector<token> parseFormula(string);
    bool is_number(string);
    bool is_varaible(string);

};



#endif // FORMULAELEMENT_H
