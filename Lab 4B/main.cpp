/*
    Name: ALex Yeh, 5008110544, CS 135, LAB 4B
    Description: lab four b
    Input: use input count, 2 <= count <= 10000
    Output: sum of odd and even numbers respectively between 1 and the count 
*/
#include <iostream>

using namespace std;


int main() {
   int count;
   int evensum = 0;
   int oddsum = 0;

   cout << "Enter a count between 2 and 10000"
        << "\n"
        << "**";

   cin >> count;

   if (count <= 1 || count >= 10000) {
      cout << "\n"
           << "Error: Invalid entry, please retry"
           << "\n"
           << "Enter a count between 2 and 10000"
           << "\n"
           << "**";
      else if (count >=2 || count <= 10000){ 
      end();
         }


   for(int i =1; i<=count; i++) {
      if (i%2==0){
         evensum = (evensum +i);
      }
   }
   for(int ii =1; ii<=count; ii++) {
      if (ii%2!=0){
         oddsum = (oddsum +ii);
      }
   }

   cout << "Sum of even numbers: "
        << evensum
        << "\n";
   
   cout << "Sum of odd numbers: "
        << oddsum;
   
   return 0;
}
}
