/*
	Example of how to build the following table
	using <iomanip> output manipulators:

	+--------+-------+------+
	| length | width | area |
	+--------+-------+------+
	| 10     | 5     | 50   |
	+--------+-------+------+
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	string separator = "+--------+-------+------+\n";
	string h1 = "length", h2 = "width", h3 = "area";
	int length = 10, width = 5;
	
	string headers = "| " + h1 + " | " + h2 + " | " + h3 + " |\n";

	int area = length * width;

	// Output the chart
	cout << separator // top separator
		<< headers // headers
		<< separator // headers/data separator
		<< left // justify content left
		<< "| " << setw(6) << length // first piece of data in row
		<< " | " << setw(5) << width // second piece of data in row
		<< " | " << setw(4) << area << " |\n" // third piece of data in row
		<< separator; // bottom separator

	return 0;
}
