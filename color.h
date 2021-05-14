#ifndef color_h
#define color_h
#include <string>
#include <vector>
#include <iostream>

using std::string;
using std::vector;
using std::cout;
using std::endl;

class color
{
  private: 
  string color;
  vector <char> colorAnalyze;

  public:
  void setColor(string);
  string getColor ();
  void addColor (char);
  int getColorCompleted ();
};

#endif