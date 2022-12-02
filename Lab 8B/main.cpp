/* 
Name: ALex Yeh, 5008110544, CS 135, [ASSIGNMENT NAME] 
Description: [DESCRIPTION] 
Input: [INPUT] 
Output: [OUTPUT] 
*/ 
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
float pi = 3.14159;
double a = 0.500000;
double b = 20.500000;
double getDoubleInput(string prompt, double min, double max);
bool checkFailure(double input, double min, double max);
double circumference(double radius);
double area(double radius);

//MAIN
int main(){
string prompt = "Enter a circle radius between 0.500000 and 20.500000\n**";

double doubleRadius = getDoubleInput(prompt, a, b);
cout << endl;
cout << "Radius: " << fixed << setprecision(2) << doubleRadius << endl;

double doubleCircumference = circumference(doubleRadius);
cout << "Circumference: " << fixed << setprecision(2) << doubleCircumference << endl;

double doubleArea = area(doubleRadius);
cout << "Area: " << fixed << setprecision(2) << doubleArea;



return 0;
}

double getDoubleInput(string prompt, double min, double max) {
int check = 0;
double temp;
do {
cout << prompt;
double input;
cin >> input;
// call check function
if (checkFailure(input, min, max)==true){
   temp = input;
   check = 1;
} 
} while (check != 1);
return temp;
}

bool checkFailure(double input, double min, double max) {
   bool test = false;
   if (cin.fail()){
      cin.clear();
      cin.ignore(100, '\n');
      cout << endl;
      cout << "Error: Invalid radius!" << endl;
   } else if (input < min || input > max){
      cin.clear();
      cin.ignore(100, '\n');
      cout << endl;
      cout << "Error: Invalid radius!" << endl;
   } else {
      test = true;
   }
   return test;

}

double circumference(double radius) {
   double circumference = (2*pi*radius);
   return circumference;
}

double area(double radius) {
   double area = (pi*(radius*radius));
   return area;
}
