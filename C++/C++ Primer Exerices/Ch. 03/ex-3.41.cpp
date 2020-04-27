#include <iostream>
#include <vector>
#include <iterator>
using std::cout; using std::endl; using std::vector; using std::begin; using std::end; 
int main() {
	int arr[] = {1, 2, 3, 4, 5};
	vector<int> vec(begin(arr), end(arr));
	auto beg = vec.cbegin(), end = vec.cend();
	while ( beg != end ) {
		cout << *beg;
		++beg;
	}
	return 0;
}
