// Predict the following then run it to test your predictions:
#include <iostream>
using std::cout; using std::endl; 
int main() {
	int x[10]; int *p = x; int i;
	cout << sizeof(x)/sizeof(*x) << endl;
	cout << sizeof(p)/sizeof(*p) << endl;
	cout << sizeof(p) << endl;
}

/* Prediction:
 * I think that the first line will output the size of the whole array divided by the size of the type in the array.
 * So it would be 10/2 = 5
 * I think the second line will output the size of the pointer divided by the size of the object it points to.
 * So it would be 1/10 = 0.1
 */
/* Results:
 * I was completely wrong about everything.
 * C++ defaults to long int when just typing int.
 * This would give the size of the array to 4 * 10 for sizeof int = 4 and the number of elements 10.
 * Pointers have a defined size of 8 on 64-bit systems.
 * The object it points to is of type int, thus has size 4 by default.
 * That means that the result will be 2.
 */
