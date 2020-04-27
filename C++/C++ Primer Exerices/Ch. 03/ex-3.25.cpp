/*vector<unsigned> scores(11, 0); // 11 buckets, all initially 0
unsigned grade;
while (cin >> grade) { // read the grades
if (grade <= 100) // handle only valid grades
++scores[grade/10]; // increment the counter for the current cluster
}
*/

#include <iostream>
#include <vector>
using std::cout; using std::cin; using std::endl; using std::vector;
int main() {
	vector<unsigned> scores(11, 0);		// cluster vector, stores 11 possible values starting at 0
	unsigned grade;				// reads our current grade
	cout << "Input grades:" << endl;
	while ( cin >> grade ) {		// read from input buffer
		if ( grade <= 100) {		// valid grades
			auto ind = ( grade / 10 );	// create the index number
			auto it = scores.begin() + ind;	// set iterator to the index we got
			++*it;			// increment the dereference iterator
		}
	}
	cout << "0 1 2 3 4 5 6 7 8 9 10" << endl;
	for ( auto ot = scores.cbegin(); ot != scores.cend(); ++ot ) {		// read the values
		cout << *ot << " ";
	}
	cout << endl;
	return 0;
}
