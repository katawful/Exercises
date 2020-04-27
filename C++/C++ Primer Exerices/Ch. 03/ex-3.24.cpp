#include <iostream>
#include <vector>
using std::cin; using std::cout; using std::endl; using std::vector;
int main() {
	cout << "Enter a series of integers: ";
	int input;	// our input var
	vector<int> iVec;	// our vector
	// read from our input buffer
	while ( cin >> input) {
		iVec.push_back(input);
	}

	// print the sum of adjacent values
/*	auto size = iVec.size();
	for ( auto i = iVec.begin(); i != iVec.end(); ++i ) {
		if ( i + 1 == iVec.cend() )
			return 0;
		auto x = *i;
		auto x1 = *i;
		x1 += 1;
		cout << ( x + x1 ) << endl;
	} */

	// print the sum of outer values
	auto size = iVec.size();
	auto beg = iVec.begin(), end = iVec.end();
	auto last = ( end - 1 );
	for ( auto i = iVec.begin(); i != iVec.end(); ++i ) {
		if ( i + 1 == end )
			return 0;
		auto x = *beg;
		auto x1 = *last;
		cout << ( x + x1 ) << endl;
		++beg; --last;
	}
	return 0;
}
