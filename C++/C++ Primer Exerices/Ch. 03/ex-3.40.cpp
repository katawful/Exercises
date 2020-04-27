#include <iostream>
#include <cstring>
using std::cout; using std::endl; 
int main() {
	char cs1[] = "HELLO!";
	char cs2[] = "WORLD!";
	auto sz1 = strlen(cs1);
	auto sz2 = strlen(cs2);
	auto sz = sz1 + sz2 + 2;
	size_t cssz = sz;
	char csc[cssz];
	strcpy(csc, cs1);
	strcat(csc, " ");
	strcat(csc, cs2);
	char *cp = csc;
		cout << csc << endl;
	return 0;
}
