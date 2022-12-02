/*
    Name: ALex Yeh, 5008110544, CS 135, LAB 5A
    Description: lab five a
    Input: integer of value 1<2<=20
    Output: half hourglass shape  
*/

#include <iostream>

using namespace std;

int main (){
   int count = 0;
   restart:
      //get count input
      cout << "Enter a count between 2 and 20" << "\n" << "**";
      cin >> count;
      cout << "\n";
      if (cin.fail() or count < 2  or count > 20) {
         cin.clear();
         cin.ignore();
         cout << "Error: Invalid entry, please retry \n";
         goto restart;
      }
      else {
            goto go;
         }

   go:

   int amountOfstars;

   //manage row count based on user input of count variable
   for (amountOfstars = count; amountOfstars >= 1; --amountOfstars) {
      //output of stars
      for (int i = 1; i<= amountOfstars; ++i) {
         cout << "*";
      }
      cout << endl;
   }


   int j = 1; 
   int x; 

   //rightside triangle
   while (j <= count) {
      j++;
      x = 2;
      while ( x <= j)
      {
         cout << "*";
         x++;
      }
      cout << endl;
   }

   return 0;
}
