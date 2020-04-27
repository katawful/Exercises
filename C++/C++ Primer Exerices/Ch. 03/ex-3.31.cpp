#include <iostream>
using std::cout; using std::endl;
int main() {
	int arr[10] = {};	// array of 10 ints
	constexpr size_t size = 10;	// size of array
	for ( size_t it = 0; it <= ( size - 1 ); ++it ) {
		arr[it] = it;
		cout << arr[it] << endl;
	}
	return 0;
}
