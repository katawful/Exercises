#include <iostream>
using std::cout; using std::cin; using std::endl; 
int main() {
  char character, prev_char;
  int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, ffCnt = 0, flCnt = 0, fiCnt = 0;
  bool ffFlag = false;
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
        if (prev_char == 'f'){
          fiCnt++;
          break;
        }
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
      case 'f' :
        if (prev_char == 'f' && ffFlag == 0){
          ffCnt++;
          ffFlag = true;
        }
        break;
      case 'l' :
        if (prev_char == 'f'){
          flCnt++;
        }
        break;
    }
    prev_char = character;
  }
  cout << "The amount of 'a' is: " << aCnt << endl;
  cout << "The amount of 'e' is: " << eCnt << endl;
  cout << "The amount of 'i' is: " << iCnt << endl;
  cout << "The amount of 'o' is: " << oCnt << endl;
  cout << "The amount of 'u' is: " << uCnt << endl;
  cout << "The amount of 'ff' is: " << ffCnt << endl;
  cout << "The amount of 'fl' is: " << flCnt << endl;
  cout << "The amount of 'fi' is: " << fiCnt << endl;
  return 0;
}
