/*
    Name: ALex Yeh, 5008110544, CS 135, LAB 4A
    Description: lab four a
    Input: starting number, ending number, increment to count by
    Output: counts from the starting number to the ending number by using a increment set by the user
*/
#include <iostream>

using namespace std;

int main() {
   int start;
   int end;
   int increment;

   //starting number
   cout << "Enter a starting number"
        << "\n"
        << "**";
   cin >> start;
   cout << "\n";

   //check if starting number is integer
   if (cin.fail()) {
      cout << "Error: invalid entry.";
      return 0;
   }

   //ending number prompt
   cout << "Enter an ending number"
        << "\n"
        << "**";
   cin >> end;
   cout << "\n";

   //ending number check
   if (cin.fail()) {
      cout << "Error: invalid entry.";
      return 0;
   }

   //increment prompt
   cout << "Enter a value to increment by"
        << "\n"
        << "**";
   cin >> increment;
   cout << "\n";

   //increment check
   if (cin.fail()) {
      cout << "Error: invalid entry.";
      return 0;
   }
  
   for (int i = start; i <= end; i=(i+increment)) {
      cout << i << " ";
   }

   return 0;
}
