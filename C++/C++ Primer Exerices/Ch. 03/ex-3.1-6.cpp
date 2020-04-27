#include <iostream>
#include <string>
#include "Sales_data.h"
using std::cin; using std::cout; using std::endl; using std::cerr;
int main() {
	Sales_data total;	// create a Sales_data object
	double totalPrice;	// total price
	if (cin >> total.bookNumber >> total.number_sold >> totalPrice) {	//read the data and each element
		total.revenue = total.number_sold * totalPrice;		// update the revenue element for object total

		Sales_data trans;	// create an object for the current object
		double transPrice;
		while ( cin >> trans.bookNumber >> trans.number_sold >> transPrice) {	// read from the current line
			trans.revenue = trans.number_sold * transPrice;

			if (total.bookNumber == trans.bookNumber) {	// if the two books are the same
				total.number_sold += trans.number_sold;	// add and assign the number sold from the current line to the total
				total.revenue += trans.revenue;		// add and assign the revenue from the current line to the total
			}
			else {
				cout << total.bookNumber << " " << total.number_sold << " " << total.revenue << " ";	// add the first part of the output
				if (total.number_sold != 0)	// if there are an amount sold so we don't divide by 0
					cout << total.revenue / total.number_sold << endl;
				else 
					cout << "(no sales)" << endl;

				total.bookNumber = trans.bookNumber; total.number_sold = trans.number_sold; total.revenue = trans.revenue;
			}
		}

		cout << total.bookNumber << " " << total.number_sold << " " << total.revenue << " ";	// for the last or first line
		if (total.number_sold != 0)
			cout << total.revenue / total.number_sold << endl;
		else
			cout << "(no sales)" << endl;
		return 0;
	}
	else {
		cerr << "No data?!" << endl;
		return -1;
	}
}
