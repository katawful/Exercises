#include <iostream>
using std::cin; using std::cout; using std::endl;
int main()
{
	// our two variables
	int v1 = 0, v2 = 0;
	// prompt the user for the values
	cout << "Enter two numbers to see the inclusive numbers in-between, the first number being smaller:" << endl;
	cin >> v1 >> v2;
	while (v1 <= v2){
		cout << v1 << endl;
		++v1;
	}
	return 0;
}
