#include <iostream>
#include <vector>
using std::vector; using std::cin; using std::cout; using std::endl; using std::string;
int main() {
	string input;	// our input strings
	vector<string> svec;	// our vector to add to, is empty
	cout << "Enter a series of strings:" << endl;
	while (cin >> input) {	// read our inputs
		svec.push_back(input);
	}
	return 0;
}
