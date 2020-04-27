#include <iostream>
#include <string>
#include <vector>
using std::cin; using std::cout; using std::endl; using std::vector; using std::string;
int main() {
	cout << "Enter strings separated by spaces: " << endl;
	string input;	// a var to store the values from cin
	vector<string> sVec;	// a vector to store the strings, empty
	//
	// read the values from input bufffer and store into vector
	while ( cin >> input ) {	// read the strings from input buffer
		sVec.push_back(input);	// push the read value to the back
	}

	// change each string in the vector to uppercase
	for ( auto &i : sVec)
		for ( auto &c : i)	// read the characters in the element i from the vector sVec
			c = toupper(c);

	// print the changes
	auto size = sVec.size();
	int line = 0;
	for ( int index = 0; index <= (size - 1); ++index) {
		cout << sVec[index] << " ";
		line = ( index + 1 );
		if ( line == 8) {
			cout << endl;
			line = 0;
		}
	}
	cout << endl;
			
	return 0;
}
