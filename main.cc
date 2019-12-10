#include <iostream>
#include <string>
#include <cstdlib>
#include <stdio.h>
#include <stdarg.h>
#include <cctype>
#include <fstream>
using namespace std;

int countLine(string pName);
int countChar(string pName);

int main(int arguments, char** inputName)
{
  //input file stream
  ifstream fin;
  string characters = "";
  //if there are arguments
  if(arguments == 2)
  {
    fin.open(inputName[1]);//open file 
/*    while(!fin.eof()) 
    {
	char tmp = fin.get();

    }
*/    
  }
  else //otherwise do the normal
  {
   cout << "You entered " << countChar("Ohio University") << " characters.\n";
   cout << "You have entered 1 line";
  }
  return 0;
}
//count the number of lines
int countLine(string pName)
{
  return pName.length();
}

//count the number of characters
int countChar(string pName)
{
  return pName.length();
}
