#include "color.h"
#include <string>
#include <vector>

using std::string;
using std::vector;
using std::cout;
using std::endl;

void color::setColor(string firstColor){
  color = firstColor;
}
string color :: getColor(){
  return color;
}
void color:: addColor(char colors){
  colorAnalyze.push_back(colors);
}
int color::getColorCompleted(){
  int totalColors = colorAnalyze.size();
  return totalColors;
}