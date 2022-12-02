/*
    Name: ALex Yeh, 5008110544, CS 135, LAB 3A
    Description: lab three a
    Input: two floating point numbers and two strings
    Output: calcualtes which float and string is larger of the two inputs 
*/
#include <iostream>
#include <cmath>

using namespace std;

int main(){
   //1st float prompt
   cout << "Enter a floating point number" << "\n" << "**";

   //1st float
   float x;
   cin >>x;
   cout << "\n";

   //2nd float prompt
   cout << "Enter another floating point number" << "\n" << "**";

   //2nd float
   float y;
   cin >> y;
   cout << "\n";

   //output of user inputs
   cout 
      << "You entered " 
      << x << " and " << y;

   cout << "\n";

   //if else for which number is larger
   if (x > y) {
      cout << "The largest is " << x << endl;;
   }

   else {
      cout << "The largest is " << y << endl;
   }
   cout << "\n";

   //string prompt
   cout << "Enter a string" << "\n" << "**";

   //1st string
   string a;

   //input 1st string
   cin >>a; 

   cout << "\n";

   //2nd string prompt
   cout << "Enter a second string" << "\n" << "**";

   string b;

   cin >>b;

   cout << "\n";

   cout 
   << "You entered " 
   << "\"" 
   << a << "\"" 
   << " and " 
   << "\"" 
   << b 
   << "\"" 
   << "\n";

   if (a > b) {
      cout 
      << "The largest is "
      << "\""
      << a
      << "\""
      << "\n";
   }
   else {
      cout 
      << "The largest is "
      << "\""
      << b
      << "\""
      << "\n";
   }

   return 0;
}
