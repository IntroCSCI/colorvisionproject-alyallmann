# Can you see this? If not you might qualify to be colorblind!

## Description

This program can analyze a file with different colors and can display certain colors values. Eventually, it will identify what are color combinations that can be problematic for people who are color blind.

### v0.2 Updates

*Coming soon*

### v1.0 Updates

*Coming soon*


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

*Coming in version 0.2*

### Functions

*Coming in version 0.2*

### Classes

*Coming in version 1.0*
