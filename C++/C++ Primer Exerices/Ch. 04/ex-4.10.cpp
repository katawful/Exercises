#include <iostream>
using std::cin; using std::cout; using std::endl; 
int main() {
	int input; 	// our input
	while ( cin >> input )
		if ( input != 42 ) {
			cout << input << endl;
		}
		else if ( input == 42 ) {
			cout << "42 found, exiting" << endl;
			return 0;
		}
	return 0;
}
