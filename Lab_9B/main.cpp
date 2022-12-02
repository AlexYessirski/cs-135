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

int add(int num1, int num2);
string add(string str1, string str2);
int multiply(int num1, int num2);
string multiply(string str, int num);

int main(){

int input1;
bool check1 = false;
while (check1 == false){
   cout << "Enter an integer between 1 and 50\n**";
   cin >> input1;
   cout << endl;
   if (input1 < 1 || input1 > 50 || cin.fail()){
      cin.clear();
      cin.ignore(100, '\n');
      cout << "Error: Invalid input!" << endl;
   } else {
      check1 = true;
   }
}

int input2;
bool check2 = false;
while (check2 == false){
   cout << "Enter another integer between 1 and 50\n**";
   cin >> input2;
   cout << endl;
   if (input2 < 1 || input2 > 50 || cin.fail()){
      cin.clear();
      cin.ignore(100, '\n');
      cout << "Error: Invalid input!" << endl;
   } else {
      check2 = true;
   }
}

string text1;
cout << "Enter a string\n**";
cin >> text1;
cout << endl;

string text2;
cout << "Enter another string\n**";
cin >> text2;
cout << endl;

cout << input1 << " + " << input2 << " = " << add(input1, input2) << endl;
cout << text1 << " + " << text2 << " = " << add(text1, text2) << endl;
cout << input1 << " * " << input2 << " = " << multiply(input1, input2) << endl;
cout << text1 << " * " << input1 << " = " << multiply(text1, input1) << endl;
cout << text2 << " * " << input2 << " = " << multiply(text2, input2) << endl;

return 0;
}

int add(int num1, int num2){
   int sum = (num1 + num2);
   return sum;
}

string add(string str1, string str2){
   string combine = str1 + str2;
   return combine;
}

int multiply(int num1, int num2){
   int product = (num1 * num2);
   return product;
}

string multiply(string str, int num){
   string temp;
   for (int i = 0; i < num; i++){
      if (num == 1){
         temp = str;
      } else {
      temp = temp + str;
      }
   }
   return temp;
}