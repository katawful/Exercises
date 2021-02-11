#include <iostream>
using std::cout; using std::cin; using std::endl; 
int main() {
	char character;
	int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
	while(cin >> character){
		if (character == 'a'){
			aCnt++;
			}
		else if (character == 'e'){
			eCnt++;
			}
		else if (character == 'i'){
			iCnt++;
			}
		else if (character == 'o'){
			oCnt++;
			}
		else if (character == 'u'){
			uCnt++;
			}
	}
	cout << "The amount of 'a' is: " << aCnt << endl;
	cout << "The amount of 'e' is: " << eCnt << endl;
	cout << "The amount of 'i' is: " << iCnt << endl;
	cout << "The amount of 'o' is: " << oCnt << endl;
	cout << "The amount of 'u' is: " << uCnt << endl;
	return 0;
}
