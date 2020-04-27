#include <iostream>
#include <string>
using std::cout; using std::endl; using std::string;
int main() {
	string test("test");	// create string s with value "test"
	auto y = test.size();	// get the size of the string
	for ( unsigned x = 0; x <= (y - 1); ++x)
		test[x] = 'X';
	cout << test << endl;
	return 0;
}
