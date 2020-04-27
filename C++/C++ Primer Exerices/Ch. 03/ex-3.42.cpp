#include <iostream>
#include <vector>
#include <iterator>
using std::cout; using std::endl; using std::vector;
using std::begin; using std::end; 
int main() {
	vector<int> iVec{1, 2, 3, 4};
	auto vsz = iVec.size();
	size_t asz = vsz;
	int arr[asz];
	int i = 0;
	for ( auto it : iVec ) {
		arr[i] = iVec[( it - 1 )];
		cout << arr[i];
		++i;
	}
	return 0;
}
