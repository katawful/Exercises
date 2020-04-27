#include <iostream>
#include <string>
using std::cin; using std::cout; using std::endl; using std::getline; using std::string;
int main() {
	string line;
	cout << "Enter line: " << endl;
	while (cin >> line) {
		cout << line;
	}
	return 0;
}
