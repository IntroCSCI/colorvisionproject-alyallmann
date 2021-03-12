//Author: Alyssa Allmann
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
string fileName="";
ifstream reader;
string line= "";
size_t position;
int amount;

cout << "Please enter the file to be opened:\n";
getline(cin,fileName);

reader.open(fileName,ios::in);

if(reader.is_open())
{
while( !reader.eof())
{
getline(reader,line);
position = line.find("#"); // search within line for a pound sign
// cout << position << endl;

if(line[position]){
for (int counter = position+=1; counter < line.size(); counter
++)
{
  if(line [counter] >= '0'&& line[counter] <= '9' || line[counter] >= 'a' && line[counter] <= 'f' || line[counter] >= 'A' && line[counter] <= 'F'){
  cout << line[counter];
  int sixth=position+=5;

  if( (sixth >= '0' && sixth <= '9') || (sixth >='a' && sixth <= 'f') || (sixth >= 'A' && sixth <='F'))
  
}  
 }
  }
} 
reader.close();
  return 0;
}
}
