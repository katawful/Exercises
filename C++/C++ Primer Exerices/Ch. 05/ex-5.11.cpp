#include <iostream>
using std::cout; using std::cin; using std::endl; 
int main() {
	char character;
	int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, whiteCnt = 0;
	while(cin >> character){
		switch (character) {
			case 'a' :
			case 'A' :
				aCnt++;
				break;
			case 'e' :
			case 'E' :
				eCnt++;
				break;
			case 'i' :
			case 'I' :
				iCnt++;
				break;
			case 'o' :
			case 'O' :
				oCnt++;
				break;
			case 'u' :
			case 'U' :
				uCnt++;
				break;
			case ' ' :
			case '\t' :
			case '\n' :
				whiteCnt++;
				break;
		}
	}
	cout << "The amount of 'a' is: " << aCnt << endl;
	cout << "The amount of 'e' is: " << eCnt << endl;
	cout << "The amount of 'i' is: " << iCnt << endl;
	cout << "The amount of 'o' is: " << oCnt << endl;
	cout << "The amount of 'u' is: " << uCnt << endl;
	cout << "The amount of whitespace characters is: " << whiteCnt << endl;
	return 0;
}
