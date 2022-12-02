#include <iomanip>
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <cctype>
#include <string>

using namespace std;


int main()
{
   //string for code
   string num1 = "999a9999";

   //bool to check
   bool num1check;

   //scans every character in the string, then changes the bool to false if their is a character, then exits the checker
  for(int i = 0; i < num1.length(); i++) 
  {
      if(!(num1[i] >= '0' && num1[i] <= '9')) 
      {
         num1check=false;
         goto exitt;
      } else {
         num1check = true;
      }
  }

  exitt: 
  //actions to be done whethere or not the string is all digits or not 
  if (num1check==true) {
   cout << "alldigits" << endl;
  } else {
   cout << "notalldigits" << endl;
  }

  return 0;
}
