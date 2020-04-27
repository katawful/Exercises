#include <iostream>
#include "Sales_item.h"
int main(){
	Sales_item book, currBook;
	if (std::cin >> currBook) {
		int cnt =1;
		while (std::cin >> book) {
			if (book.isbn() == currBook.isbn())
				++cnt;
			else {
				std::cout << "The book " << currBook.isbn() << " occurs " << cnt << " times." << std::endl;
				currBook = book;
				cnt = 1;
			}
		}
		std::cout << "The book " << currBook.isbn() << " occurs " << cnt << " times." << std::endl;
	}
	return 0;
}
