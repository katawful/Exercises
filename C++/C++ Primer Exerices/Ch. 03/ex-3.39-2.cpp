#include <iostream>
#include <cstring>
using std::cout; using std::endl;
int main() {
	char cs1[] = "HELLO!";
	char cs2[] = "HELLO!";
	if ( strcmp(cs1, cs2) == 0 )
		cout << "cs1 and cs2 are the same" << endl;
	else
		cout << "cs1 and cs2 are not the same" << endl;
	return 0;
}
