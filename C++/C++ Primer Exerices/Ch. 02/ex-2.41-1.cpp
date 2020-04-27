#include <iostream>
#include <string>
#include "Sales_data.h"		// our data files
int main() {
	Sales_data book;
	double bookRevenue = book.revenue;
	double totalRevenue = 0.0;
	int totalSold = 0;
	int bookSold = 0;
	while (std::cin >> book.bookNumber >> book.number_sold >> book.revenue) {
		bookSold = book.number_sold;
		bookRevenue = book.revenue * book.number_sold;
		totalSold += bookSold;
		totalRevenue += bookRevenue;
		}
	std::cout << "Book " << book.bookNumber << " sold " << totalSold << " copies and earned " << totalRevenue << " revenue." << std::endl;
	return 0;
}
