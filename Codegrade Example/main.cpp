/*
    Name: ALex Yeh, 5008110544, CS 135, Codegrade Exmaple
    Description: Codegrade Example
    Input: message typed by user
    Output: text message reply with the message inputted by the user 
*/
#include <iostream>
#include <string>

using namespace std;

int main(){

   string input;

   cout << "Please enter some text: ";
   getline (cin, input);

   cout << endl;

   cout << "**You entered " << "\"" << input << "\"";

}
