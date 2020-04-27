#include <iostream>
int main() {
	int i = 42;	// define and initialize i
	int *pi = &i;	// initialize pi and assign it to the address i
	std::cout << *pi << std::endl;	// print the pointer pi
	*pi = 32;		// assign pi to the value of 32
	std::cout << *pi << std::endl;	// print the pointer pi
	i = 45;		// assign i to 45
	std::cout << *pi << std::endl;	// print point pi
	return 0;
}
