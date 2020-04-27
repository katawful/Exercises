#include <iostream>
#include <vector>
using std::vector; using std::cin; using std::cout; using std::endl;
int main() {
	int input;	// store our input values here
	vector<int> ivec;	// our vector to add to, is empty
	cout << "Enter a series of integers:" << endl;
	while (cin >> input) {	// read our inputs
		ivec.push_back(input);
	}
	return 0;
}
