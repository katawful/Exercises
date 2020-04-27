#include <iostream>
int main()
{
	std::cout << "Enter any numbers with spaces inbetween the enter EOF (CTRL-D) to continue" << std::endl;
	int sum = 0, val = 0;
	while (std::cin >> val){
		sum += val;
	}
	std::cout << " " << std::endl;
	std::cout << "The sum of values is: " << sum << std::endl;
	return 0;
}
