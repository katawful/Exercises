#include <iostream>
#include <string>
using std::cin; using std::cout; using std::endl; using std::string;
int main() {
	string line, stringOutput; // string for our line
	while (cin >> line) {
		stringOutput += line + " ";
	}
	cout << stringOutput << endl;
	return 0;
}
