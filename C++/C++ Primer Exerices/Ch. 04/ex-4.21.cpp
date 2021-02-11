#include <iostream>
#include <vector>
using std::vector; using std::cout; using std::endl; 
int main() {
	vector<int> iVec = {1,2,3,4,5,6};
	for ( auto i = iVec.begin(); i != iVec.end(); ++i ) {
		cout << ((( *i % 2 ) != 0) ? (*i*2) : (*i)) << endl;
		}
	return 0;
}
