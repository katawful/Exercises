#include <iostream>
#include <iterator>
using std::cout; using std::cin; using std::endl; using std::begin; using std::end;
int main() {
	int ia[] = {1,2,3,4};
	int *beg = begin(ia);	// set beg to the first element of array ia
	int *last = end(ia);	// set end to one past the last element of array ia
	while ( beg != last ) {
		*beg = 0;
		cout << *beg << endl;
		++beg;
	}
	return 0;
}
