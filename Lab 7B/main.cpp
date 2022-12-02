/*
    Name: ALex Yeh, 5008110544, CS 135, LAB 7B
    Description: lab seven b
    Input: input filename from user
    Output: gives info on high and low temperatures found in input file
*/
#include <iostream>
#include <fstream>
#include <string.h>
#include <iomanip>

using namespace std;

int main (){
const int m = 1, n = 2;
string arr [m][n];
double arrn [13][2];

string filename;
ifstream ifile;
string city;

   do {
      cout << "Enter file name\n**";
      cin >> filename;
      ifile.open(filename);
      cout << endl;
      if (!ifile.is_open()){
         cin.ignore();
         cin.clear();
         cout << "Error: Invalid File Name" << endl;
      }
   } while(!ifile.is_open());

   for (int i = 0; i < 13; i++) {
      for (int j = 0; j < 2; j++) {
         if (i<1 && j<2){
         ifile >> arr[i][j];
         arrn[i][j] = 100;
         } else {
            ifile >> arrn[i][j];
         }
      }
   }

   ifile.close();

   cout << arr[0][0] << " " << arr[0][1] << endl;
   
   double hiTemp = 0;
   for (int i = 0; i < 13; i++) {
      for (int j = 0; j < 2; j++) {
         if ((i!=0 && j!=0) || (i!=0 && j!=1)){
        if (arrn[i][j]>hiTemp){
         hiTemp = arrn[i][j];
        }
      }
   }
   }

   double loTemp = 100;
   for (int i = 0; i < 13; i++) {
      for (int j = 0; j < 2; j++) {
        if (arrn[i][j]<loTemp){
         loTemp = arrn[i][j];
        }
      }
   }

   double hiSum = 0;
   for (int i = 0; i < 13; i++) {
      if (i!=0){
        hiSum = (arrn[i][1] + hiSum);
      }
   }
   double loSum = 0;
   for (int i = 0; i < 13; i++) {
      if (i!=0){
        loSum = (arrn[i][0] + loSum);
      }
   }

   cout << "Lowest temperature of the year was " << fixed << setprecision(2) << loTemp << "° F." << endl;
   cout << "Highest temperature of the year was " << fixed << setprecision(2) << hiTemp << "° F." << endl;
   cout << "Average low temperature of the year was " << fixed << setprecision(2) << (loSum/12) << "° F." << endl;
   cout << "Average high temperature of the year was " << fixed << setprecision(2) << (hiSum/12) << "° F." << endl;

 return 0;   
}
