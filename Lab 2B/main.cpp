/*
    Name: ALex Yeh, 5008110544, CS 135, LAB 2B
    Description: lab two b
    Input: radius of circle from user
    Output: area and circumference of a circle 
*/
#include <iostream>
#include <iomanip>
#include<math.h>

using namespace std;

double pi = 3.141592;

int main(){
   double x; 
   cout << "Enter the radius of a circle" << "\n" << "**";
   cin >> x;
   cout <<"\n";

   double circ = 2*pi*x;
   double area = pi*(pow(x,2));

   std::cout << std::setprecision(4);

   string separator = "+--------+---------------+---------+\n";
	string h1 = "radius", h2 = "circumference", h3 = "area";
	string headers = "| " + h1 + " | " + h2 + " | " + h3 + "    |\n";

	cout 
        << std::setprecision(2)
        << fixed
        << separator 
		<< headers 
		<< separator 
		<< left 
		<< "| " << setw(6) << (((double)x)* 1.00) 
		<< " | " << setw(13) << ((double)circ)
		<< " | " << setw(7) << ((double)area) << " |\n" 
		<< separator; 


   return 0; 
}


