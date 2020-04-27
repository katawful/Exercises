#include <iostream>
#include <string>
using std::cin; using std::cout; using std::endl; using std::string;
int main() {
	cout << "Enter two strings: ";
	string word1, word2;
	while (cin >> word1 >> word2) {
		if (word1.size() == word2.size()) {
			cout << "The two strings have the same length!" << endl;
			return 0;
		}
		else {
			if (word1.size() > word2.size()) {
				cout << word1 << " is bigger than " << word2 << endl;
				return 0;
			}
			else if (word2.size() > word1.size()) {
				cout << word2 << " is bigger than " << word1 << endl;
				return 0;
			}
		}
	}
	return 0;
}
