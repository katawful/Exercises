#include <iostream>
#include <vector>
#include <iterator>
using std::cout; using std::cin; using std::endl; using std::begin; using std::end; 
using std::vector; 
/*int main() {
	int arr1[] = {1,2,3,4};
	int arr2[] = {1,2,3,8};		// two arrays to compare
	int *beg1 = begin(arr1), *last1 = end(arr1);
	int *beg2 = begin(arr2), *last2 = end(arr2);
	while ( beg1 != last1 ) {	// start with the first array
		while ( beg2 != last2 ) {	// walk through the second array and compare each element to the current element of the first array
			if ( *beg2 == *beg1 ) {
				cout << "Elements " << *beg2 << " are the same" << endl;
				++beg2;
				++beg1;
			}
			else {
				cout << "Elements are not the same" << endl;
				++beg2;
				++beg1;
			}
		}
	}
	return 0;
}
*/

int main() {
	vector<int> vec1 = {1,2,3,4};
	vector<int> vec2 = {1,2,3,5};
	auto beg1 = vec1.cbegin(), end1 = vec1.cend();
	auto beg2 = vec2.cbegin(), end2 = vec2.cend();
	while ( beg1 != end1 ) {
		while ( beg2 != end2 ) {
			if ( *beg2 == *beg1 ) {
				cout << "Elements " << *beg2 << " are the same" << endl;
				++beg1;
				++beg2;
			}
			else {
				cout << "Elements are not the same" << endl;
				++beg1;
				++beg2;
			}
		}
	}
	return 0;
}
