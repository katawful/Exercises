#include <iostream>
int main() {

	const int i = 42;
	auto j = i; const auto &k = i; auto *p = &i;
	const auto j2 = i, &k2 = i;

	std::cout << "j before: " << j << std::endl;
	j = 42;	//should work
	std::cout << "j after: " << j << std::endl;
	std::cout << "k before: " << k << std::endl;
	k = 42;	//shouldn't work
	std::cout << "k after: " << k << std::endl;
	std::cout << "p before: " << p << std::endl;
	p = 42;	//should work
	std::cout << "p after: " << p << std::endl;
	std::cout << "j2 before: " << j2 << std::endl;
	j2 = 42; //shouldn't work
	std::cout << "j2 after: " << j2 << std::endl;
	std::cout << "k2 before: " << k2 << std::endl;
	k2 = 42; // shouldn't work
	std::cout << "k2 after: " << k2 << std::endl;
	return 0;
}
