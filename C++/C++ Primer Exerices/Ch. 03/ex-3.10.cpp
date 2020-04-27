#include <iostream>
#include <string>
using std::cout; using std::endl; using std::string;
int main() {
	string s("Hello, World!!!");	// our string to modify
	cout << s;
	string changed;	// the string we push changes to
	for (auto &c : s) 
		if ( ispunct(c) ) 
			c = 0;	// make c a null character
	cout << " is now " << s << endl;
	return 0;
}
