#ifndef FORMULAELEMENT_H
#define FORMULAELEMENT_H
#include <QMainWindow>
#include <algorithm>
#include <functional>
#include <cctype>
#include <locale>
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

// Struct used for identifying & storing the tokens
struct token{
      char c;
      float f;
      bool number;

      token():number(false),c(0){};
};


class FormulaElement
{
public:
    QString valueAsString;   // TO store the Mathematical Expression temporarily
    FormulaElement(); // Constructor for FormulaElement
    ~FormulaElement();
    vector<token> parseFormula(string);   // Formula Are passed to this Method
    bool is_number(string);
    bool is_varaible(string);
    void SetAnswer(double,string);  // Answer is set to the DispalyTextBox
    string trim(const string&);    // Used for token the string context

};



#endif // FORMULAELEMENT_H
