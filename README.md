# Can you see this? If not you might qualify to be colorblind!

## Description

This program can analyze a file with different colors and can display certain colors values. Eventually, it will identify what are color combinations that can be problematic for people who are color blind.

### v0.2 Updates

I added the list of hex values that are similar and different from all the color choices. I added functions and vectors to complete the code for the next step of finding out the best options for colorblind people and how colors can look alike. 

### v1.0 Updates
For this part I added two files and created a class to distinguish the classes. I also added more code to eliminate certain colors that could clash with others that would make it hard for colorblind people to know which one is which. 


## Developer

Alyssa Allmann

## Example

To run the program, give the following commands:

```
g++ --std=c++11 *.cpp -o cvp
./cvp
```

Here is an example of the program running:

```
cout << "Please enter the file to be opened:\n";
getline(cin,fileName);
```

## C++ Guide

### Variables and Data Types

I have used different variables like int and string to identify  the  different  types of lines and amounts:
string line= "";
int amount;

### Console Input and Output

I have used a cout statement outputs to end with a certian line:
cout << line[counter];
### Decisions

 I used an if statement liketo narrow down the hexadecimals and colors:
  if(line [counter] >= '0'&& line[counter] <= '9' || line[counter] >= 'a' && line[counter] <= 'f' || line[counter] >= 'A' && line[counter] <= 'F'){
  cout << line[counter]; 
### Iteration

I used a while loop when directing to find the pound sign. This allows the code to find the pound sign then followed by the color: 
while( !reader.eof())
{
getline(reader,line);
position = line.find("#");
### File Input and Output

I  used  a cin input when asking for a spceifc file to open: 
getline(cin,fileName);
### Arrays/Vectors

I have used the following code as a vector to sort through the list of possible hex values:

vector<string> colorAnalyze(string counter, vector<string> colorlist){
  vector<string> returnColors;

### Functions
I used pass-by-reference to count and be able to change the amount of numbers/letters for the hex values.
 while(returnColors.size()<3){
   if(colorlist.size()-index>6){
     index=index+6;
    }else{
     index=6-(colorlist.size()-index);
     }
   if(colorlist[index] != counter){

### Classes

I added both public and private class to my code to hold the data of adding colors and also picking which ones are a compatiable:
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
