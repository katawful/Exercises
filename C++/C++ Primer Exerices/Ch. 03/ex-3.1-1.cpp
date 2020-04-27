#include <iostream>
using std::cout; using std::endl;
int main()
{
	int sum = 0, val = 50;
	while (val <= 100){
		sum += val;
		++val;
	}
	cout << "The inclusive sum of 50 to 100 is " << sum << endl;
	return 0;
}
