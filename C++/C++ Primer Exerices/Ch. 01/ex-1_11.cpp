#include <iostream>
int main()
{
	// our two variables
	int v1 = 0, v2 = 0;
	// prompt the user for the values
	std::cout << "Enter two numbers to see the inclusive numbers in-between, the first number being smaller:" << std::endl;
	std::cin >> v1 >> v2;
	while (v1 <= v2){
		std::cout << v1 << std::endl;
		++v1;
	}
	return 0;
}
