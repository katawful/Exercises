#include <iostream>
#include <vector>
using std::cout; using std::endl; using std::vector; using std::cin; using std::string; 
int main() {
	vector<string> scores = {"F", "D", "C", "B", "A", "A++"};
	int grades;
	string letter;
	while (cin >> grades) {
		if (grades < 60){
			cout << "The grade is a " << scores[0] << endl;
		} else {
			if (grades % 10 > 7) {
				letter = scores[(grades - 50)/10];
				letter += "+";
				cout << "The grade is a " << letter << endl;
			} else if (grades % 10 < 4 && grades % 10 != 0) {
				letter = scores[(grades - 50)/10];
				letter += "-";
				cout << "The grade is a " << letter << endl;
			} else {
				cout << "The grade is a " << scores[(grades - 50)/10] << endl;
			}
		}
	}
	return 0;
}
