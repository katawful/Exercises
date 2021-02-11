#include <iostream>
using std::cout; using std::cin; using std::endl; 
int main() {
	int a, b, c, d;	// our integers
	while ( cin >> a >> b >> c >> d ) {
		if ( a > b && b > c && c > d ) {
			cout << "The values are the right size" << endl;
			return 0;
		}
		else {
			cout << "The values are WRONG!!!" << endl;
			return 0;
		}
	}
}
