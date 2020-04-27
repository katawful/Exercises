#include <iostream>
#include <string>
using std::cout; using std::cin; using std::string; using std::endl; 
int main() {
	string s1 = "HELLO!";
	string s2 = "HELLO!";
	if ( s1 == s2 )
		cout << "s1 and s2 are the same" << endl;
	else
		cout << "s1 and s2 are not the same" << endl;
	return 0;
}
