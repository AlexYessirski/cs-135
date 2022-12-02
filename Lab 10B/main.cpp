#include <iomanip>
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

struct PurchaseType {
   string CustomerID;
   string productName;
   double price;
   int qtyPurchased;
   double taxRate;
};

void openFile(ifstream& iFile, string prompt);
void readFile(ifstream& iFile, PurchaseType purchases[]);
void printPurchaseData(PurchaseType purchases[], int size);

int main(){
   string prompt = "Enter a file name\n**";
   ifstream iFile;
   openFile(iFile, prompt);

   const int size = 10;
   PurchaseType purchases[size]; 
   readFile(iFile, purchases);

   printPurchaseData(purchases, size);

   return 0;
}

void openFile(ifstream& iFile, string prompt){
   string fileName;
   do {
      cout << prompt;   
      cin >> fileName;
      iFile.open(fileName);
      cout << endl;
      if (!iFile.is_open()){
         cin.clear();
         cin.ignore();
         cout << "Error: Invalid File" << endl;
      }
   } while (!iFile.is_open());
}

void readFile(ifstream& iFile, PurchaseType purchases[]){
   while (!iFile.eof()){
      for (int i = 0; i < 10; i++){
         string temp;
         getline(iFile, temp, '\n');
         int marker = temp.find(",");
         purchases[i].CustomerID = temp.substr(marker);
         purchases[i].productName = temp.substr(marker+1);
         purchases[i].price = stoi(temp.substr(marker+2));
         purchases[i].qtyPurchased = stoi(temp.substr(marker+3));
         purchases[i].taxRate = stoi(temp.substr(marker+4));
      }
   }
}

void printPurchaseData(PurchaseType purchases[], int size){
   string header = "+-------------+--------------+-------+----------+----------+-------+";
   string categories = "| Customer ID | Product Name | Price | Quantity | Tax Rate | Total |";

   double total;

   cout << header;
   cout << categories;
   cout << header;
   for (int i = 0; i < 10; i++){
   cout << "|" << setw(14) << purchases[i].CustomerID << "|"
         << setw(15) << purchases[i].productName << "|" 
         << setw(8) << purchases[i].price << "|"
         << setw(11) << purchases[i].qtyPurchased << "|"
         << setw(11) << purchases[i].taxRate << "|"
         << setw(8) << setprecision(2) << total << "|" << endl;
   }
   cout << header;
}