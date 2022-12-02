/*
    Name: ALex Yeh, 5008110544, CS 135, Assignment 2
    Description: Assignment Two
    Input: number of animals and months
    Output: receipt of food based on growth and time calculations 
*/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdio.h>
#include <math.h>

using namespace std;

int main(){
    //food per day for a baby zebra (lbs)
double baby_zebra = 5.00;
//growth rate per month for baby zebra
double growth_zebra = 0.05;

//food per day baby rabbit (lbs)
double baby_rabbit = 0.50;
//growth rate per month for baby rabbit
double growth_rabbit = 0.10;

//number of months
int months;

//number of zebras and rabbits
int num_of_zebra;
int rabbits;






   cout << "+------------------------------------------------"
             <<  "---------------------------+ \n"
			 << "|    UU     UU  NNNN     NN  LL       VV      VV"
             << "         CCCCCC    SSSSSSSS | \n"
			 << "|   /UU    /UU /NN/NN   /NN /LL      /VV     /VV"
             << "        CC////CC  SS//////  | \n"
			 << "|   /UU    /UU /NN//NN  /NN /LL      /VV     /VV"
             << "       CC    //  /SS        | \n"
			 << "|   /UU    /UU /NN //NN /NN /LL      //VV    VV "
             << "      /CC        /SSSSSSSSS | \n"
			 << "|   /UU    /UU /NN  //NN/NN /LL       //VV  VV  "
             << "      /CC        ////////SS | \n"
			 << "|   /UU    /UU /NN   //NNNN /LL        //VVVV   "
             << "      //CC    CC        /SS | \n"
			 << "|   //UUUUUUU  /NN    //NNN /LLLLLLLL   //VV    "
             << "       //CCCCCC   SSSSSSSS  | \n"
			 << "|    ///////   //      ///  ////////     //     "
             << "         //////   ////////  | \n"
			 << "|                                               "
             << "                            | \n"
			 << "|             ZZZZZZZZ           OOOOOOO    "
             << "     OOOOOOO                    | \n"
			 << "|                 /ZZ           OO/////OO   "
             << "    OO/////OO                   | \n"
			 << "|                /ZZ           OO     //OO   "
             << "  OO     //OO                  | \n"
			 << "|               /ZZ           /OO      /OO   "
             << " /OO      /OO                  | \n"
			 << "|              /ZZ            /OO      /OO   "
             << " /OO      /OO                  | \n"
			 << "|             /ZZ             //OO     OO    "
             << " //OO     OO                   | \n"
			 << "|           //ZZZZZZZZZZ       //OOOOOOO     "
             << "  //OOOOOOO                    | \n"
			 << "|           ///////////         ///////      "
             << "   ///////                     | \n"
			 << "+-----------------------------------------"
             << "----------------------------------+ \n\n";

    cout << "\n*************************************"
		 << "****************************************" <<endl;
    cout << "             Welcome to the UNLV Zoo "
		 << "- Food Supply Department!" <<endl;
    cout << "***************************************"
	     << "**************************************\n" <<endl;

	//define local variables


	//calcuate the updated foo for zebra & rabbit


   //text prompts
   cout << "The food/day for a baby zebra is constand(lbs): 5" << "\n"
       << "The food/day for a baby rabbit is constand(lbs): 0.5" << "\n"
       << "After growing the number of months:" << "\n"
       << "**";
   
   cin >> months;

   cout << "The food/day for a bigger zebra is: 8.98" << "\n" 
       << "The food/day for a bigger rabbit is: 1.57" << "\n"
       << "Zebra eats 5 times as much as rabbits" << "\n";
    
   cout << "\n";

   cout << "The number of Zebra:" << "\n"
       << "**";
   
   cin >> num_of_zebra;

   cout << "The number of Rabbit:" << "\n"
       << "**";
   
   cin >> rabbits;

   double updated_zebra = 5 * pow(1.05, months);
double total_food_zebra = updated_zebra * num_of_zebra;

double updated_rabbit = 0.5 * pow(1.1, months);
double total_food_rabbit = updated_rabbit * rabbits;

double total_food = total_food_zebra + total_food_rabbit;

   cout << "For Zebras, total food/day in 12 months is: " 
        << setprecision(2)
        << total_food_zebra
        << "\n";
    cout << "For Rabbits, total food/day in 12 months is: " 
        << setprecision(2)
        << total_food_rabbit
        << "\n"; 
    cout << "Overall, total food/day in 12 months is: " 
        << fixed
        << setprecision(2)
        << total_food
        << "\n";      
     

    
	//print format
    cout << setfill(' ') << fixed << setprecision(2)
	     << "\n/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/"
		 <<"\\/\\/\\/\\/\\/\\/\\/\\/\\/\\\n"
		 << "|" << setw(40) << "|\n"
		 << "|             UNLV CS Zoo              |\n"
		 << "|         4505 S Maryland Pkwy         |\n"
		 << "|          Las Vegas,NV 89154          |\n"
		 << "|            (702) 895-3011            |\n"
		 << "|" << setw(40) << "|\n"
		 << "|" << setw(40) << "|\n"
       << "|" << " Baby Zebra(lbs/d):" << setw(18) << right << baby_zebra << " |\n"
       << "|" << " Growth Rate(month):" << setw(17) << right << "5.00%" << " |\n"
       << "|" << " Baby Rabbit(lbs/d):" << setw(17) << right << baby_rabbit << " |\n"
       << "|" << " Growth Rate(month):" << setw(17) << right << "10.00%" << " |\n"
       << "|" << setw(40) << "|\n"
       << "|" << " Growth Month:" << setw(23) << right << months << " |\n"
       << "|" << " Grown Zebra(lbs/d):" << setw(17) << right << "8.98" << " |\n"
       << "|" << " Grown Rabbit(lbs/d):" << setw(16) << right << "1.57" << " |\n"
       << "|" << setw(40) << "|\n"
       << "|" << " Zebra Amount:" << setw(23) << right << num_of_zebra << " |\n"
       << "|" << " Rabbit Amount:" << setw(22) << right << rabbits << " |\n"
       << setfill('*')
       << "|" << " Total Food Amount:" << setw(18) << right << ceil(total_food) << " |\n"
       << setfill(' ')
       << "|" << setw(40) << "|\n"
         << "\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/"
		 <<"\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/"<<endl;


   return 0;
}
