#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    /*
    Name: ALex Yeh, 5008110544, CS 135, LAB 1A
    Description: LAB 1B
    Input: Two integers and two double integers
    Output: Equations using the integers and two double integers entered by the user. 
    */

   //enter an integer

   int x;
   int y;

   cout << "Enter an integer";
   cout << "\n";
   cin >> x;

   cout << "\n";

   cout << "Enter another integer";
   cout << "\n";
   cin >> y;

   cout << "\n";

   //addition 

   int sum;
   sum = x + y;
   cout << x << "+" << y << "=" << sum;

   cout << "\n";

   //subtraction

   int difference;
   difference = x - y;
   cout << x << "-" << y << "=" << difference;

   cout << "\n";

   //multiplication 

   int product;
   product = x * y;
   cout << x << "*" << y << "=" << product;

   cout << "\n";

   //division

   int quotient;
   quotient = x / y;
   cout << x << "/" << y << "=" << quotient;

   cout << "\n";

   //percentage

   int percent;
   percent = x%y;
   cout << x << "%" << y << "=" << percent;

   cout << "\n";
   cout << "\n";

   //enter doubles

   double a;
   double b;

   cout << "Enter a double";
   cout << "\n";
   cin >> a;

   cout << "\n";

   cout << "Enter another double";
   cout << "\n";
   cin >> b;

   cout << "\n";

   double quotienta;
   quotienta = a / b;
   cout << a << "/" << b << "=" << quotienta;

   cout << "\n";
   return 0;
}
