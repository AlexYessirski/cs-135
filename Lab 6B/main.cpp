/*
    Name: ALex Yeh, 5008110544, CS 135, LAB 6b
    Description: lab six b
    Input: input filename from user, input student name from user
    Output: prints scores and names forwards and backwards, searches for student, informs if 
    student is on list and if true, sums and averages scores of student
*/
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main () {
   // Prompts the user for a filename and reads the filename into a string.
   string filename;
   ifstream ifile;

   cout << "Enter a file name\n**";
   cin >> filename;
   
   //checks filename is valid and opens sucessfully
   do {
      ifile.open(filename);
      cout << "\n";
      if (!ifile.is_open()){
         cin.ignore();
         cin.clear();
         cout << "Error: Invalid file name. \n";
         cout << "Enter a file name\n**";
         cin >> filename;
      }
   } while (!ifile.is_open());

   //arrays
   string names[100];
   float scores[100];

   //get number of lines in the file
   int count = 0;
   while (true) {
      ifile >> names[count];
      ifile >> scores[count];
      if (ifile.eof()){
         break;
      }
      if (ifile.fail()){
         ifile.clear();
         ifile.ignore(100, '\n');
         continue;
      }
      count++;
   }

   //name
   string toFind;

   cout << "Enter a name to search \n**";
   cin >> toFind;
   cout << endl;

   //names forwards
   cout << "Names Forward: ";
   for(int i=0; i<= count; i++){
      if (i != count-1){
         cout << names[i] << ", ";
      } else {
      cout << names[i];
      break;
      }
   }
   cout << endl;

   //scores forward
   cout << "Scores Forward: ";
   for(int i=0; i<= count; i++){
      if (i != count-1){
         cout << scores[i] << ", ";
      } else {
      cout << scores[i];
      break;
      }
   }
   cout << endl;

   //names backwards
   cout << "Names Reverse: ";
   for(int i=count-1; i>= 0; i--){
      if (i != 0){
         cout << names[i] << ", ";
      } else {
      cout << names[i];
      break;
      }
   }
   cout << endl;

   //scores backwards
   cout << "Scores Reverse: ";
   for(int i=count-1; i>= 0; i--){
      if (i != 0){
         cout << scores[i] << ", ";
      } else {
      cout << scores[i];
      break;
      }
   }
   cout << endl;

   //search for name
   int namesearch=0;
   for(int i=0; i<= count; i++){
      if (names[i]==toFind){
         namesearch++;
      } else {
         continue;
      }
   }
   if (namesearch == 0) {
      cout << "Error " << toFind << " is not a student in the list" << endl;
      return 0;
   } else {
      cout << namesearch << " results for " << toFind << endl;
   }
   
   //find all scores of searched student and puts them into a spearate array
   float findScore[(namesearch)];
   int track = 0;
   for (int i = 0; i < count; i++){
      if (names[i] == toFind){
         track++;
         findScore[track]=scores[i];
      }
   }
   //sorts new array
   float temp =0;
   for (int i = 0; i < namesearch; i++){
      for(int j=0; j+1 < namesearch-i; j++){
         if(findScore[j]>findScore[j+1]){
            temp = findScore[j];
            findScore[j]=findScore[j+1];
            findScore[j+1]=temp;
         }
      }

   }
   
   //minimum
   cout << "Minimum: " << fixed << setprecision(2) << findScore[1] << endl;

   //maximum
   cout << "Maximum: " << fixed << setprecision(2) << findScore[namesearch-1] << endl;

   //sum
   float sum = 0;
   for(int i = 0; i<=namesearch; i++){
      sum += findScore[i];
   }
   cout << "Sum: " << fixed << setprecision(2) << sum << endl;
   float average = (sum/namesearch);
   cout << "Average: " << fixed << setprecision(2) << average << endl;
   return 0;
}
