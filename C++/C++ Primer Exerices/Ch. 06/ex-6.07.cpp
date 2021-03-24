#include <iostream>
#include <string>
int count(){
  static int i = 0; //set static i to 0
  if (i == 0) {
    return i++;
  }
  else {
    return i++; // increment and return i
  }
}
int main(){
  std::string input;
  while (std::cin >> input){
    std::cout << count() << std::endl;
  }
  return 0;
}
