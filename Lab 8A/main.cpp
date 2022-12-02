/*
    Name: ALex Yeh, 5008110544, CS 135, LAB 8A
    Description: lab eight a
    Input: integer of value between two and twenty, character input
    Output: half hourglass shape  
*/
#include <iostream>
#include <iomanip>


using namespace std;

// Function prototypes
int getIntegerInput(string prompt, int min, int max){
	int input;
	bool test = false;
	do {
	cout << prompt;
	cin >> input;
	if (cin.fail()){
		cout << endl;
		cout << "Error: Invalid input!" << endl;
		cin.clear();
		cin.ignore(100, '\n');
	} else if(input > max || input < min){
		cout << endl;
		cout << "Error: Invalid input!" << endl;
		cin.clear();
		cin.ignore(100, '\n');
	} else {
		test = true;
	}
	} while (test == false);
	return input;
}

char getCharacterInput(string prompt){
	cout << prompt;
	char temp;
	cin >> temp;
	return temp;
}

void writeUpsideDownTriangle(int size, char character){
	cout << endl;
	for (int outputCount = size; outputCount > 0; outputCount--){
		cout << setfill(character) << setw(outputCount) << character << endl;
	}
}

void writeRightsideUpTriangle(int size, char character){
	for (int outputCount = 1; outputCount < size+1; outputCount++){
		cout << setfill(character) << setw(outputCount) << character << endl;
	}
}
// YOUR CODE HERE


int main() {
	// Minimums/maximums
	const int MIN = 2;
	const int MAX = 20;
	// Prompt for integer input
	string prompt1 = "Enter a count between " +
		to_string(MIN) + " and " +
		to_string(MAX) + "\n**";
	// Prompt for character input
	string prompt2 = "\nEnter a character\n**";
	
	// Get size of triangle
	int size = getIntegerInput(prompt1, MIN, MAX);
	// Get character to use when printing triangle
	char character = getCharacterInput(prompt2);
	
	// Write both triangles
	writeUpsideDownTriangle(size, character);
	writeRightsideUpTriangle(size, character);
	cout << endl;

	// Terminate the program
	return 0;
}

// Function definitions
// YOUR CODE HERE

