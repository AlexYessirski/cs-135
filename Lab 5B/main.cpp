#include <iomanip>
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <ctype.h>

using namespace std;


int main()
{
   ifstream input;

   string fileName;

   int runningtotal;
   int num1;
   int num2;
   int exit_code = 0;

   start:
   cout << "Enter file name: \n**";
   cin >> fileName;

   input.open(fileName);

   if (input.is_open())
   {
      while (!input.eof()) 
      {
         input >> num1 >> num2;
         if (isdigit(num1), isdigit(num2)) 
         {
            int total = (num1 + num2);
            cout << num1 << "+" << num2 << "=" << (num1 +num2) << endl;
            runningtotal = (runningtotal +(num1 + num2));
         }
         else 
         {
            if (isalpha(num1), isalpha(num2))
            {
               cout << "Error in line \n";
            }
         }

      } 
         cout << "Running total = " << runningtotal;
   }
   else
   {
      cout << "Error: Invalid file name \n" << endl;
      goto start;
      //exit_code = 1;
   }

   //return exit_code;
   return 0;
}
