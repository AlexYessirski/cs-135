/* 
Name: ALex Yeh, 5008110544, CS 135, [ASSIGNMENT NAME] 
Description: [DESCRIPTION] 
Input: [INPUT] 
Output: [OUTPUT] 
*/ 
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

double a = 0.500000;
double b = 20.500000;

string prompt = "Enter double between 0.500000 and 20.500000\n**";
string prompt2 = "Enter another double between 0.500000 and 20.500000\n**";

double getDoubleInput(string prompt, double min, double max);
bool checkFailure(double input, double min, double max);
void getDoubleInputs(double& input1, double& input2);
void addSubtract(double& num1, double& num2);
void multiplyDivide(double& num1, double& num2);

int main(){
double input1;
double input2;

getDoubleInputs(input1, input2);
cout << endl;

addSubtract(input1, input2);

multiplyDivide(input1, input2);



return 0;
}

void getDoubleInputs(double& input1, double& input2){
   input1 = getDoubleInput(prompt, a, b);
   cout << endl;
   input2 = getDoubleInput(prompt2, a, b);
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
      cout << "Error: Invalid input!" << endl;
   } else if (input < min || input > max){
      cin.clear();
      cin.ignore(100, '\n');
      cout << endl;
      cout << "Error: Invalid input!" << endl;
   } else {
      test = true;
   }
   return test;
}

void addSubtract(double& num1, double& num2){
   double temp = (num1+num2);
   double temp2 = (num1-num2);
   cout << fixed << setprecision(2) << num1 << " + " << num2 << " = " << temp << endl;
   cout << fixed << setprecision(2) << num1 << " - " << num2 << " = " << temp2 << endl;
}

void multiplyDivide(double& num1, double& num2){
   double temp = (num1*num2);
   double temp2 = (num1/num2);
   cout << fixed << setprecision(2) << num1 << " * " << num2 << " = " << temp<< endl;
   cout << fixed << setprecision(2) << num1 << " / " << num2 << " = " << temp2<< endl;
}
