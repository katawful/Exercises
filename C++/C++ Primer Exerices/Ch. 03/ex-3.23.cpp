#include <iostream>
#include <vector>
using std::cout; using std::cin; using std::endl; using std::vector;
int main() {
	vector<int> iVec;
	int input;
	cout << "Enter 10 integers separated by spaced: " << endl;
	while ( cin >> input ) {
		iVec.push_back(input);
	}

	for ( auto it = iVec.begin(); it != iVec.end(); ++it ) {
		*it = ( *it * 2 );
		cout << *it << endl;
	}
	return 0;
}
