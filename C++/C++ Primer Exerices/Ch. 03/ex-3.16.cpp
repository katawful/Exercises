#include <iostream>
#include <vector>
#include <string>
using std::cout; using std::endl; using std::vector; using std::string;
int main() {
	// right on this one
	vector<int> v1;
	cout << "Vector v1 contains: ";
	for (auto &i : v1)
		cout << i << " ";
	cout << " and is size " << v1.size() << endl;

	// right on this one
	vector<int> v2(10);
	cout << "Vector v2 contains: ";
	for (auto &i : v2)
		cout << i << " ";
	cout << " and is size " << v2.size() << endl;

	// right on this one
	vector<int> v3(10, 42);
	cout << "Vector v3 contains: ";
	for (auto &i : v3)
		cout << i << " ";
	cout << " and is size " << v3.size() << endl;

	// right on this one
	vector<int> v4{10};
	cout << "Vector v4 contains: ";
	for (auto &i : v4)
		cout << i << " ";
	cout << " and is size " << v4.size() << endl;

	// right on this one
	vector<int> v5{10, 42};
	cout << "Vector v5 contains: ";
	for (auto &i : v5)
		cout << i << " ";
	cout << " and is size " << v5.size() << endl;

	// right on this one
	vector<string> v6{10};
	cout << "Vector v6 contains: ";
	for (auto &i : v6)
		cout << i << " ";
	cout << " and is size " << v6.size() << endl;

	// right on this one
	vector<string> v7{10, "hi"};
	cout << "Vector v7 contains: ";
	for (auto &i : v7)
		cout << i << " ";
	cout << " and is size " << v7.size() << endl;

	return 0;
}
