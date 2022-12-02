#include <iomanip>
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <cctype>
#include <string>

using namespace std;

int main()
{
   ifstream input;

   string fileName;
   string num1;
   string num2;

   int total;
   int d;
   int f;

   bool num1check;
   bool num2check;

   restartprompt:

   cout << "Enter file name: \n**";
   cin >> fileName;
   cout << "\n";
   input.open(fileName);

   if (input.is_open()) {
      while (!input.eof()) {
      input >> num1 >> num2;
      //test to check for digits in string

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
   int d = 0;
  } else {
   int d = 1;
  }

   //scans every character in the string, then changes the bool to false if their is a character, then exits the checker
  for(int ii = 0; ii < num2.length(); ii++) 
  {
      if(!(num2[ii] >= '0' && num2[ii] <= '9')) 
      {
         num2check=false;
         goto exittt;
      } else {
         num2check = true;
      }
  }

  exittt: 
  //actions to be done whethere or not the string is all digits or not 
  if (num2check==true) {
   int f = 0;
  } else {
   int f = 1;
  }

   int n1 = stoi(num1);
   int n2 = stoi(num2);
      if (d=0, f=0) {
         cout << num1 << " + " << num2 << " = " << (n1 + n2) << endl;
         
      } else {
         if (d=1, f=1){
            cout << "Error in line \n";
      }
      }
   }
} else {
      cin.clear();
      cout << "Error: Invalid file name \n";
      goto restartprompt;
   }
   input.close();
return 0;
}