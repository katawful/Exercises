#include <iostream>
#include <string>
#include "Sales_data.h"
using std::cin; using std::cout; using std::endl;
int main() {
	Sales_data book, currBook;
	if (cin >> currBook.bookNumber >> currBook.number_sold >> currBook.revenue) {
		int cnt = 1;
		while (cin >> book.bookNumber >> book.number_sold >> book.revenue) {
			if (book.bookNumber == currBook.bookNumber)
				++cnt;
			else {
				cout << "The book " << currBook.bookNumber << " occurs " << cnt << " times." << endl;
				currBook = book;
				cnt = 1;
			}
		}
	cout << "The book " << currBook.bookNumber << " occurs " << cnt << " times." << endl;
	}
	return 0;
}
