/*
    Name: ALex Yeh, 5008110544, CS 135, Assignment #4
    Description: Assignment #4
    Input: 1-3
    Output: game of nim 
*/

#include <iostream>
#include <cctype>

using namespace std;

int main () {
   char answer;
   char playagain;
   char match = '|';
   int currentplayer;
   int matches = 21;
   char matchtake;
   int compcheck = 0;
   bool gameover = false;

   cout << "The game of Nim. The player to remove the last match loses" << endl;
   cout << "\n";
   restart:
   do {
   cout << "Would you like to go first? (Y/N): ";
   cin >> answer;
   switch (answer) {
      case 'y':
      currentplayer = 1;
      goto go;
      break;
      case 'n':
      currentplayer = 0;
      goto go;
      break;
      default:
      cout << "Please, answer Y or N" << endl;
   }
   } while (!isdigit(currentplayer));

   go:

   while (gameover == false) {
   if (currentplayer == 1) {
      //player turn
      cout << "Player Turn - Matches: ";
      //current matches
      for (int i = 0; i < matches;) {
        if (i + 5 > matches) {
         cout << match;
         i=(i+1);
        } else {
        cout << match;
        cout << match;
        cout << match;
        cout << match;
        cout << match;
        cout << " ";
        i=(i+5);
        }
      }
      //ask how many matches want to be taken
      bool check = false;
  
      while (check == false) {
      cout << "\n \n";
      cout << "Remove (1-3): ";
      cin >> matchtake;
      cout <<endl;
      if (isdigit(matchtake) && (matchtake == '1' or matchtake == '2' or matchtake == '3')) 
      {
         matches = (matches-static_cast<int>(matchtake- '0'));
         check = true;
      } 
      else if(isalpha(matchtake)){
            cin.clear();
            cout << "Please, type 1, 2, or 3 as your response. \n";
         } else if (static_cast<int>(matchtake- '0') <= 0) {
            cin.clear();
            cout << "Must remove at least one match. \n";
         } 
      else if (static_cast<int>(matchtake- '0') > 3) {
            cin.clear();
            cout << "Cannot remove more than three matches. \n";
         } 
      }
      
      //gameover check
      if (matches == 1) {
         cout << "Game Over - Computer Wins";
         gameover = true;
      } else {
      currentplayer = 0;
   }
   } else {
      //computer turn
      cout << "Computer Turn - Matches: ";
      //current matches
      for (int i = 0; i < matches;) {
        if (i + 5 > matches) {
         cout << match;
         i=(i+1);
        } else {
        cout << match;
        cout << match;
        cout << match;
        cout << match;
        cout << match;
        cout << " ";
        i=(i+5);
        }
      }
      cout << endl;
      cout << endl;
      
      //logic for choice of how many matches
         if (matches % 4 == 0) {
            cout << "Computer removes 1." << endl;
            matches = (matches -3);
         }
         else if (matches % 4 == 1) {
            cout << "Computer removes 1."<< endl;
            matches = (matches - 1);
         }
         else if (matches % 4 == 2) {
            cout << "Computer removes 1."<< endl;
            matches = (matches - 1);
         }
         else if (matches % 4 == 3) {
            cout << "Computer removes 1."<< endl;
            matches = (matches - 2);
         }
      cout << "\n";

      if (matches == 1) {
         cout << "Game Over - Computer Wins \n";
         gameover = true;
      } else {
      currentplayer = 1;
      }
   }
   
}

endgame:
cout << "Would you like to play again? (Y?N): ";
cin >> playagain;
switch (playagain) {
   case 'y':
   cin.clear();
   goto restart;
   break;
   case 'n':
   cin.clear();
   goto end;
   break;
   default:
   cout << "Please, answer Y or N. \n" << endl;
   cin.clear();
   goto endgame;
}
end:
return 0;
}

