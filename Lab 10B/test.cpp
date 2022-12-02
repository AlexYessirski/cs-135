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

int main(){
   string prompt = "Enter a file name\n**";
   ifstream iFile;
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

   const int size = 10;
   PurchaseType purchases[size]; 

      for (int i = 0; i < 10; i++){
      string line;
      getline(iFile, line);
      stringstream ss(line);
      string price;
      string qty;
      string tax;
      getline(ss, purchases[i].CustomerID, ',');
      cout << purchases[i].CustomerID << " ";
      getline(ss, purchases[i].productName, ',');
      cout << purchases[i].productName << " ";
      getline(ss, price, ',');
      purchases[i].price = stod(price);
      cout << fixed << setprecision(2) << purchases[i].price << " ";
      getline(ss, qty, ',');
      purchases[i].qtyPurchased = stoi(qty);
      cout << purchases[i].qtyPurchased << " ";
      getline(ss, tax, ',');
      purchases[i].taxRate = stod(tax);
      cout << fixed << setprecision(4) << purchases[i].taxRate << " ";
      cout << endl;
      }

   return 0;
}