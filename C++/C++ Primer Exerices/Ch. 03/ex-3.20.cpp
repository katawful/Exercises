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
	unsigned x = 0, x1 = x + 1;		// our indeces, x1 is x + 1
	auto size = iVec.size();
	for ( auto &i : iVec) {
		if ( x == (size - 1)) 
				return 0;
		cout << ( iVec[x] + iVec[x1] ) << endl;
		++x; ++x1;
	} 

	// print the sum of outer values
	auto size = iVec.size();
	unsigned x = 0, x1 = ( size - 1 );
	for ( auto &i : iVec ) {
		if ( x == (size - 1))
			return 0;
		cout << ( iVec[x] + iVec[x1] ) << endl;
		++x; --x1;
	}
	return 0;
}
