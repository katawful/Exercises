#include <iostream>
#include <string>
using std::cout; using std::endl; using std::string;
int main() {
	string test("test");	// create string s with value "test"
	unsigned x = 0;	// to iterate through the string
	auto y = test.size();	// get the size of our string
	while ( x <= (y - 1) ) {	// while our iterator is less than or equal to the max subscript index
		test[x] = 'X';	// change the character at x in string test to 'X'
		++x;		// increment x
	}
	cout << test << endl;
	return 0;
}
