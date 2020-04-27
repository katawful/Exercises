#include <iostream>
#include <vector>
#include <string>
using std::cout; using std::endl; using std::cin; using std::vector; using std::string;
int main() {
	vector<string> sVec;	// for the text file
	for (string text; getline( cin, text ); ) 	// while theres stuff in the input buffer
		sVec.push_back(text);
	
	for ( auto it = sVec.begin(); it != sVec.end() && !it->empty(); ++it ) {
		for ( auto &c : *it )
			c = toupper(c);
		cout << *it << endl;
	}
//	for ( auto it = sVec.cbegin(); it != sVec.cend(); ++it )
	return 0;
}
