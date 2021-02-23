#include <iostream>
#include <string>
using std::cout; using std::cin; using std::endl; using std::string; 
int main(){
  string input, prev_word;
  bool repeat = false;
  while (cin >> input){
    if (prev_word == input){
      cout << "Duplicate word: " << input << endl;
      repeat = true;
      break;
    }
    prev_word = input;
  }
  if (!repeat){
    cout << "No duplicate items" << endl;
    return 0;
  }
}
