#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std; 

int main (){
   // variable for number of people
   int x;

   // variable for pooled money
   int y;

   // variable for ticket cost
   double z = x * 7.95;

   //variable for tax
   double a = (z*0.0685);

   //variable for total leftover
   double b = (y-(z+a))/x;

   // asking for num of people
   cout << "How many people are in the class? ";

   // input number of people
   cin >> x;

   // ask for amount of money in the pool
   cout 
      << "How much money is in the pool? $";

   // input money pool
   cin >> y;

   // output number of busses needed
   cout 
      << float(ceil(x/12.00)) 
      << " Buses need to be reserved."
      << endl;

   // ticket cost
   std::cout
      << "Tickets will cost $"
      << std::setprecision(2)
      << fixed
      << x * 7.95
      << endl;

   //tax
   std::cout
      << "Tax will be $"
      << std::setprecision(2)
      << fixed
      << ((x*7.95)*0.0685)
      << endl;

   // leftover
   std::cout
      << "Each person will have $"
      << std::setprecision(2)
      << fixed
      << (y-((x * 7.95)+(((x*7.95)*0.0685))))/x
      << " for food."
      << endl;

   return 0;
}
