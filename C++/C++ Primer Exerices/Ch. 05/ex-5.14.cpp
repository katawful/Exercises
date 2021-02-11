#include <string>
#include <iostream>
using std::cout; using std::cin; using std::endl; using std::string; 
int main() {
	string input, prev_string, curr_string;
	int wordCnt = 0, highCnt = 0;
	bool wordFound = false;
	while (cin >> input){
		if (prev_string == input){
			wordCnt++;
		}
		else {
			if (highCnt < wordCnt){
				cout << prev_string << " appeared " << wordCnt + 1 << " times." << endl;
				wordFound = true;
			}
			highCnt = 0; wordCnt = 0;
			prev_string = input;
		}
	}
	if (wordFound == false){
		cout << "No duplicates found :(" << endl;
	}
	return 0;
}
