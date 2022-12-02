/*
    Name: ALex Yeh, 5008110544, CS 135, LAB 2A
    Description: lab two a
    Input: angle value in degrees from user
    Output: trig calculations 
*/
#include <iostream>
#include <cmath>

using namespace std;

double pi = 3.141592;

int main(){
   double x;

   cout << "Enter an angle value, in degrees" << "\n" << "**";
   cin >> x;
   cout << "\n";

   double radian = (x *(pi/180));

   cout << x << " degrees " << "= " << radian << " radians" << endl;

   cout << "sin(" << x << ") = " << sin(radian) << endl;
   cout << "cos(" << x << ") = " << cos(radian) << endl;
   cout << "tan(" << x << ") = " << tan(radian);
   return 0;
}
