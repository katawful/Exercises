#include <iostream>
#include <string>
using std::cin; using std::cout; using std::endl; using std::string; 
int main() {
	int grade = 0;
	string finalgrade;
	while (cin >> grade){
//		string finalgrade = (grade > 90) ? "high pass"
//			: (grade > 75) ? "pass"
//			: (grade >= 60) ? "low pass" : "fail";
		if ( grade > 90 )
			finalgrade = "high pass";
		else if ( grade > 75 )
			finalgrade = "pass";
		else if ( grade >= 60 )
			finalgrade = "low pass";
		else
			finalgrade = "fail";
		cout << "The grade is " << finalgrade << endl;
	}
	return 0;
}

/* While the conditional operator is shorter, it is much harder to read.
 * With a lot of coditions it becomes harder to keep track of everything while separate if blocks are clearly defined
 */
