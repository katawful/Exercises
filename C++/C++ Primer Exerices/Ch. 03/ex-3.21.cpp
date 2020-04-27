#include <iostream>
#include <vector>
#include <string>
using std::cout; using std::endl; using std::vector; using std::string;
int main() {

	vector<int> v1;
	cout << "Vector v1 contains: ";
	for ( auto it = v1.cbegin(); it != v1.cend(); ++it )
		cout << *it << " ";
	cout << " and is size " << v1.size() << endl;

	vector<int> v2(10);
	cout << "Vector v2 contains: ";
	for ( auto it = v2.cbegin(); it != v2.cend(); ++it )
		cout << *it << " ";
	cout << " and is size " << v2.size() << endl;

	// right on this one
	vector<int> v3(10, 42);
	cout << "Vector v3 contains: ";
	for ( auto it = v3.cbegin(); it != v3.cend(); ++it )
		cout << *it << " ";
	cout << " and is size " << v3.size() << endl;

	// right on this one
	vector<int> v4{10};
	cout << "Vector v4 contains: ";
	for ( auto it = v4.cbegin(); it != v4.cend(); ++it )
		cout << *it << " ";
	cout << " and is size " << v4.size() << endl;

	// right on this one
	vector<int> v5{10, 42};
	cout << "Vector v5 contains: ";
	for ( auto it = v5.cbegin(); it != v5.cend(); ++it )
		cout << *it << " ";
	cout << " and is size " << v5.size() << endl;

	// right on this one
	vector<string> v6{10};
	cout << "Vector v6 contains: ";
	for ( auto it = v6.cbegin(); it != v6.cend(); ++it )
		cout << *it << " ";
	cout << " and is size " << v6.size() << endl;

	// right on this one
	vector<string> v7{10, "hi"};
	cout << "Vector v7 contains: ";
	for ( auto it = v7.cbegin(); it != v7.cend(); ++it )
		cout << *it << " ";
	cout << " and is size " << v7.size() << endl;

	return 0;
}
