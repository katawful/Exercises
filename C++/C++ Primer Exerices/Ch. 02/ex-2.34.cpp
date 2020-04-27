#include <iostream>
int main() {
	int i =0, &r = i;
	auto a = r;
	std::cout << "a before: " << a << std::endl;
	a = 42;
	std::cout << "a after: " << a << std::endl;
	const int ci = i, &cr = ci;
	auto b = ci;
	std::cout << "b before: " << b << std::endl;
	b = 42;
	std::cout << "b after: " << b << std::endl;
	auto c = cr;
	std::cout << "c before: " << c << std::endl;
	c = 42;
	std::cout << "c after: " << c << std::endl;
	auto d = &i;
	std::cout << "d before: " << d << std::endl;
	d = 42;
	std::cout << "d after: " << d << std::endl;
	auto e = &ci;
	std::cout << "e before: " << e << std::endl;
	e = 42;
	std::cout << "e after: " << e << std::endl;
	auto &g = ci;
	std::cout << "g before: " << g << std::endl;
	g = 42;
	std::cout << "g after: " << g << std::endl;
	return 0;
}
