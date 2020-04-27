#include <iostream>
#include <string>
using std::cout; using std::endl; using std::string;
int main() {
	string test("test");	// create string s with value "test"
	for (auto c : test)
		c = 'X';
	cout << test << endl;
	return 0;
}
