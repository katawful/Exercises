#include <iostream>
#include "Sales_item.h"
int main() {
	Sales_item total; 		// create a variable that stores the next thing of data we process
	if (std::cin >> total) { 	// read the data as it comes in
		Sales_item trans;	// create a variable for the running sum
		while (std::cin >> trans) {
			if (total.isbn() == trans.isbn())	// see if we got the same book isbn
				total += trans;	// update the running total with a compound assignment operator
			else {
				std::cout << total << std::endl;	// print the results for the last book
				total = trans;		// let the total refer to the last book
			}
		}
		std::cout << total << std::endl; // print the last transaction
	}
	else {
		std::cout << "No data?!" << std::endl;	// warn the user about if theres no data
		return -1;	// return with an error
	}
	return 0;
}
