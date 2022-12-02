#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
using namespace std;

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

    //bool for game state
    bool gameState = true;

    //2D array for output
    const int r = 100;
    const int c = 100;
    string gameBoard [r][c];
    //char gameBoard [r][c];

    //input file
    ifstream ifile;
    string levelString;

    while (gameState == true){
        //start of game prompt
        while (!ifile.is_open()){
        //string levelString;

        cout << "Enter a level to play:" << endl;
        cin >> levelString;
        cout << endl;

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
            }
        }
    }

    //find amount of rows in an array
    int rowCount = 0;
    int columnCount = 0;
    string line;
    string item;

    while ( getline( ifile, line ) ){
        columnCount = 0;
        stringstream ss( line );     
        while ( ss >> item ) {
            gameBoard[rowCount][columnCount] = item;
            columnCount++;
        }
        rowCount++; 
    }
   
    cout << "ROWS:" << rowCount << endl;
    cout << "COLUMNS: " << columnCount << endl;

    //print out game board
    for (int i = 0; i < rowCount; i++){
        for (int j = 0; j < columnCount; j++){
           cout << gameBoard[i][j] << " ";
        }
        cout << endl;
    }

    gameState = false;
    }
    return 0;
}