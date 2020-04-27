#include <iostream>
#include <string>
#include "Sales_data.h"
int main() {
	Sales_data book, currBook;
	if (std::cin >> currBook.bookNumber >> currBook.number_sold >> currBook.revenue) {
		int cnt = 1;
		while (std::cin >> book.bookNumber >> book.number_sold >> book.revenue) {
			if (book.bookNumber == currBook.bookNumber)
				++cnt;
			else {
				std::cout << "The book " << currBook.bookNumber << " occurs " << cnt << " times." << std::endl;
				currBook = book;
				cnt = 1;
			}
		}
	std::cout << "The book " << currBook.bookNumber << " occurs " << cnt << " times." << std::endl;
	}
	return 0;
}
