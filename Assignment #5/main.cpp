/*
    Name: ALex Yeh, 5008110544, CS 135, Assignment 5
    Description: Assignment Five
    Input: filename
    Output: license plate and timestamp of any vehicles with infractions 
*/
#include <iostream>
#include <iomanip>
#include <fstream>
#include <ctype.h>
#include <string>
#include <sstream>  

using namespace std;

int convert(string s)
{
   int num = 0;
   int n = s.length();
   for (int i = 0; i < n; i++)
   {
      num = num * 10 + (int(s[i]) - 48);
   }
   return num;
}

int main(){
   const int m = 1006, n=5;
   string info [m][n];
   string filename;
   ifstream ifile;

   do {
      cin >> filename;
      ifile.open(filename);
      if (!ifile.is_open()){
         cin.ignore();
         cin.clear();
         cout << "Open File: Could not open " << filename << endl;
      }
   } while(!ifile.is_open());
   
   for (int i=0; i < m; i++){
      for (int j=0;j<n;j++){
         // need to getline from input into array with delim ',' and '\n' for when on colum 4.
         // on fourth column there is no comma so delim char has to be '\n' for values to be formmated
         // correctly.
         if (j==4){
            getline(ifile, info[i][j], '\n');
         } else {
            getline(ifile, info[i][j], ',');
         }
      }
   }
   
   //counts lines in code to make sure no extra data is put into the array
   string line;  
   int count = 0;  
   ifstream xFile (filename);
   if(xFile.is_open())  {
      while(xFile.peek()!=EOF){
         getline(xFile, line);
         count++;
      }
   xFile.close();
   }  
   
   //separate array for weights and speeds in int form so inequalities will work
   int stats [m][2];

   for (int i = 0; i < m; i++){
      for (int j = 3; j < 5; j++) {
         //convert info[i][j] into string to be read by convert function
         string s = info[i][j];
         //calls for function to convert string to int form
         int test = convert(s);
         //write the new int value into stats array
         if (j==3){
            stats[i][0]=test;
         } else if (j==4){
             stats[i][1]=test;
         }
      }
   }

   //spearate ofstream for every date, could've made it more future proof but lazy 
   string a = "10-09-2022";
   string b = "10-10-2022";
   string c = "10-11-2022";
   string aa = "[" + a + "] Report.txt";
   string bb = "[" + b + "] Report.txt";
   string cc = "[" + c + "] Report.txt";
   ofstream afile (aa);
   ofstream bfile (bb);
   ofstream cfile (cc);
   int violations =0;
   for (int i = 0; i < count; i++){
   if (info[i][1]==a) {
      if (stats[i][0] < 5000 && stats[i][1] > 45){
         afile << "[" << info[i][2] << "]" << " " << info[i][0] << endl;
         violations++;
      } 
      else if (stats[i][0] > 5000 && stats[i][1] > 30){
         afile << "[" << info[i][2] << "]" << " " << info[i][0] << endl;
         violations++;
      }
   } else if (info[i][1]==b) {
      if (stats[i][0] < 5000 && stats[i][1] > 45){
         bfile << "[" << info[i][2] << "]" << " " << info[i][0] << endl;
         violations++;
      } 
      else if (stats[i][0] > 5000 && stats[i][1] > 30){
         bfile << "[" << info[i][2] << "]" << " " << info[i][0] << endl;
         violations++;
      }
   } else if (info[i][1]==c) {
      if (stats[i][0] < 5000 && stats[i][1] > 45){
         cfile << "[" << info[i][2] << "]" << " " << info[i][0] << endl;
         violations++;
      } 
      else if (stats[i][0] > 5000 && stats[i][1] > 30){
         cfile << "[" << info[i][2] << "]" << " " << info[i][0] << endl;
         violations++;
      }
   }
   }
   afile.close();
   bfile.close();
   cfile.close();

   if (ifile.is_open()){
      cout << "Open File: " << violations << " violations logged." << endl;
   }

   ifile.close(); 
   return 0;
}
