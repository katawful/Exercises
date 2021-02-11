#include <iostream>
using std::cout; using std::cin; using std::endl; 
int main() {
	int input;	// the input value
	while ( cin >> input ) {
		if ( input > 0 )
			cout << input << " is even" << endl;
		else if ( input < 0 )
			cout << input << " is odd" << endl;
	}
	return 0;
}
