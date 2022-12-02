/*
    Name: ALex Yeh, 5008110544, CS 135, LAB 7A
    Description: lab seven a
    Input: input filename from user
    Output: sums each row and column of numbers from 2d array 
*/
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main(){
   const int m = 7, n = 10;
   double arr [m][n];

   string filename;
   ifstream ifile;

   do {
      cout << "Enter a file name\n**";
      cin >> filename;
      ifile.open(filename);
      cout << endl;
      if (!ifile.is_open()){
         cin.ignore();
         cin.clear();
         cout << "Error: Invalid file Name" << endl;
      }
   } while(!ifile.is_open());

   for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
         ifile >> arr[i][j];
      }
   }
   ifile.close();

   cout << "ROW SUMS:" << endl;

   for (int i =0; i<m; i++){
      double sum = 0;
      for(int j = 0; j < n; j++){
         sum += arr[i][j];
         if (j==(n-1)){
            cout << fixed << setprecision(1) << setw(4) << left << setfill(' ') << arr[i][j];
         } else {
         cout << fixed << setprecision(1) << setw(4) << left << setfill(' ') << arr[i][j] << " + ";
         }
      }
      cout << " = " << fixed << setprecision(1) << setw(4) << left << setfill(' ') << sum << endl;
   }

   cout << endl;
   cout << "COLUMN SUMS:" << endl;

   for (int i =0; i<n; i++){
      double sum = 0;
      for(int j = 0; j < m; j++){
         sum += arr[j][i];
         if (j==(m-1)){
            cout << fixed << setprecision(1) << setw(4) << left << setfill(' ') << arr[j][i];
         } else {
         cout << fixed << setprecision(1) << setw(4) << left << setfill(' ') <<  arr[j][i] << " + ";
         }
      }
      cout << " = " << fixed << setprecision(1) << setw(4) << left << setfill(' ') << sum << endl;
   }

   return 0;
}
