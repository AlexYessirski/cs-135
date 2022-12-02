/* 
Name: ALex Yeh, 5008110544, CS 135, [ASSIGNMENT NAME] 
Description: [DESCRIPTION] 
Input: [INPUT] 
Output: [OUTPUT] 
*/ 
#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>
#include <cctype>
using namespace std;

bool printGrid (vector <char> guessedList, vector <vector <char> > grid);

//prints title
void printTitle (){
    cout<<endl
    <<"     Welcome to\n\n"
    <<"         W \n"
    <<"     C R O S S\n"
    <<"         R\n"
    <<"         D\n\n";
}

int main(){ 
    //title
    printTitle();

    //check for game state
    char playAgain = 'n';

    //input file
    ifstream ifile;

    do {
    //start of game prompt
    while (!ifile.is_open()){
    string levelString;

    cout << "Enter level to play:" << endl;
    cin >> levelString;

    //converts the level input into an int for error checked
    stringstream levelPass(levelString);
    int level;
    levelPass >> level;
    
    // open input file
    ifile.open ("level" + levelString + ".txt");
    if (ifile.fail()){
        if (level < 0){
            cin.clear();
            cin.ignore();
            cout << "Invalid Entry!" << endl;
        } else if (level > 0){
            cin.clear();
            cin.ignore();
            cout << "Level files could not be found!" << endl;
        } else if (!isdigit(level)){
            cin.clear();
            cin.ignore();
            cout << "Invalid Entry!" << endl;
        }
    }
    }
    cout << endl;

    //string place holder
    string line;

    //char placeholder
    char number = 0;

    //regular grid 
    vector<vector<char> > grid;

    //list all of the actual letters in the crossword
    vector <char> gridCharList;

    //guessed list 
    vector <char> guessedList;

    //correct guessed list
    vector <char> guessedListCorrect;

    //read input files into array
    while (!ifile.eof()){
        getline(ifile,line);
        stringstream ss(line);
        vector<char> row;
        while (ss >> number) {
            row.push_back(number);
        }
        grid.push_back(row);
    }

    char text = '_';
    //put characters into 1d vector and print grid (no letters)
    for(unsigned long int i = 0; i < grid.size(); i++){
        for(unsigned long int j = 0; j <grid[i].size(); j++){
            if (grid[i][j] != '#'){
                gridCharList.push_back(toupper(grid[i][j]));
                cout << text << " ";
            } else {
                cout << grid[i][j] << " ";
            }
        }
        cout << endl;
    }

    //guess prompt
    int guessRemaining = 5;
    //bool for checking if grid is full
    bool gridCheck = false;
    do {
        //prompt
        cout << endl;
        cout << "Enter a letter: ";
        char temp[1];
        cin >> temp;
        char guess = toupper(temp[0]);
        cout << endl;

        if (find(guessedList.begin(), guessedList.end(), guess) != guessedList.end()){
            cout << "The letter is already guessed, try again!" << endl;
            goto skip;
        } else {
            guessedList.push_back(guess);
        }

        if (find(gridCharList.begin(), gridCharList.end(), guess) != gridCharList.end()){
            guessedListCorrect.push_back(guess);
        } else if (find(gridCharList.begin(), gridCharList.end(), guess) == gridCharList.end()){
            cout << "The letter is not on the board" << endl;
            guessRemaining--;
        }

        skip:
        cout << "Remaining incorrect guesses: " << guessRemaining << endl;
        cout << endl;
        gridCheck = printGrid(guessedList, grid);

        //prints ending messages
        if (gridCheck == true){
        cout << endl;
        cout << "Congratulations! you solved the level!" << endl;
        //couldn't find a way to get the while loop to work so I
        //just used break;
        break;
        } else if (guessRemaining == 0) {
        cout << endl;
        cout << "Better luck next time!" << endl;
        break;
        }

    } while(guessRemaining > 0 || gridCheck == false);

    //prompt for game restart
    cout << "Play again? (y/n)" << endl;
    cin >> playAgain;
    ifile.close();
    ifile.clear();
    } while(playAgain == 'y' || playAgain == 'Y');

    //message for game shutoff
    if (playAgain == 'n' || playAgain == 'N'){
        cout << "Thank you for playing CrossWord!" << endl;
    }
    return 0;
}

//function prints the current state of the grid
bool printGrid (vector <char> guessedList, vector <vector <char> > grid){
    bool grid_is_full = true;
    //prints out the grid
    for(unsigned long int i = 0; i < grid.size(); i++){
        for(unsigned long int j = 0; j <grid[i].size(); j++){
            if (grid[i][j] == '#') {
                cout << "#" << " ";
            } else if (find(guessedList.begin(), guessedList.end(), grid[i][j]) != guessedList.end()){
                cout << grid[i][j] << " ";
            } else if (grid[i][j] != '#' && isalpha(grid[i][j])) {
                cout << "_" << " ";
                grid_is_full = false;
            }
        }
        cout << endl;
    } 
    return grid_is_full;
}