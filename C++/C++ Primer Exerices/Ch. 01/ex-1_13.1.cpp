#include <iostream>
int main()
{
	int sum = 0;
	for (int val = 50; val <= 100; ++val)
		sum += val;
	std::cout << "The inclusive sum of 50 to 100 is " << sum << std::endl;
	return 0;
}
