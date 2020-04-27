#include <iostream>
#include <string>
#include "Sales_data.h"		// our data files
using std::cin; using std::cout; using std::endl;
int main() {
	Sales_data book;
	double bookRevenue = book.revenue;
	double totalRevenue = 0.0;
	int totalSold = 0;
	int bookSold = 0;
	while (cin >> book.bookNumber >> book.number_sold >> book.revenue) {
		bookSold = book.number_sold;
		bookRevenue = book.revenue * book.number_sold;
		totalSold += bookSold;
		totalRevenue += bookRevenue;
		}
	cout << "Book " << book.bookNumber << " sold " << totalSold << " copies and earned " << totalRevenue << " revenue." << endl;
	return 0;
}
