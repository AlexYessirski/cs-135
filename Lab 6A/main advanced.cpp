/*
    Name: ALex Yeh, 5008110544, CS 135, LAB 6A
    Description: lab six a
    Input: input filename from user
    Output: orders the numbers in the input file ascending, descending, finds sum and average of numbers
*/
#include <iostream>
#include <fstream>
#include <iomanip>
#include <algorithm>

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

   float num_arr[100];
   int count = 0;
   
   //scans input file into array, prints error for strings
   while (true) {
      ifile >> num_arr[count];
      if (ifile.eof()){
         break;
      }
      if (ifile.fail()){
         ifile.clear();
         cout << "Error: Invalid input in file." << endl;
         ifile.ignore(100, '\n');
         continue;
      }
      count++;
   }
   cout << endl;
   cout << "Amount of Elements Read In: " << count << endl;

   float temp;
   //forwards
   for (int i = 0; i < count; i++){
      for(int j=0; j+1 < count-i; j++){
         if(num_arr[j]>num_arr[j+1]){
            temp = num_arr[j];
            num_arr[j]=num_arr[j+1];
            num_arr[j+1]=temp;
         }
      }

   }
   cout << "Forwards: ";
   for(int i=0; i<=count;i++){
      if (i==count-1){
      cout<< fixed << setprecision(2) << num_arr[i];
      } else {
      if (i<count){
      cout<< fixed << setprecision(2) << num_arr[i]<< ", ";
      }
      }
   }

   cout << endl;

   //backwards
   for (int i = 0; i < count; i++){

      for(int j=0; j+1 < count-i; j++){
         if(num_arr[j]<num_arr[j+1]){
            temp = num_arr[j];
            num_arr[j]=num_arr[j+1];
            num_arr[j+1]=temp;
         }
      }

   }
    cout << "Backwards: ";
   for(int i=0; i<=count;i++){
      if (i==count-1){
      cout<< fixed << setprecision(2) << num_arr[i];
      } else {
      if (i<count){
      cout<< fixed << setprecision(2) << num_arr[i] << ", ";
      }
      }
   }
   cout << endl;
   //display minimum
   cout << "Minimum: " << fixed << setprecision(2) << num_arr[count-1] << endl;
   //display maximum
   cout << "Maximum: " << fixed << setprecision(2) << num_arr[0] << endl;
   //display sum
   float sum =0;
   for (int i=0;i<count;i++){
         sum += num_arr[i];
   }
   cout << "Sum: " << sum << endl;
   //display average
   float avg = (sum/count);
   cout << "Average: " << fixed << setprecision(2) << avg;
   return 0;
}
