#include <iostream>
#include <vector>
using std::cout; using std::endl; using std::vector;
int main() {
	int arr[10] = {};	// array of 10 ints
	constexpr size_t size = 10;	// size of array
	for ( size_t it = 0; it <= ( size - 1 ); ++it ) {
		arr[it] = it;
		cout << arr[it] << endl;
	}
	vector<int> vec(10,0);
	for ( auto i = vec.begin(); i != vec.end(); ++i ) { 
		*i = i - vec.begin();
		cout << *i << endl;
	}
	return 0;
}
