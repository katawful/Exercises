#include <iostream>
#include "Sales_item.h"
int main(){
	Sales_item book1, book2;
	std::cin >> book1 >> book2;
	std::cout << "The sum of the two books " << book1 << " " << book2 << " is " << book1+book2 << std::endl;
	return 0;
}
