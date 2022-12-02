#include <iomanip>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
   //declare file variables
   ifstream input; //input
   //ofstream output; //output
   string filename; //file name from user
   int total = 0; //running total
   int number = 0;

   //get file name from user 
   fileprompt:
   cout << "Enter file name \n **";
   cin >> filename;
   cout << "\n";

   //open file from input
   input.open(filename);


   //error check for if file opened
   if (!input.is_open()) {
      cout << "Error: Invalid file name \n";
      cin.clear();
      goto fileprompt; 
   }

   //open output file

   //output.open(filename);

   //read from input file
   char data[100];
   cout << "Read from input test" << endl;
   input >> data;
   cout << data << endl;

   //close files
   //input.close();
   //output.close();



   



   return 0;
}
