#include <iostream>
int main() {
  float f1, f2;
  std::cout << "Input 2 numbers: ";
  while(std::cin >> f1 >> f2){
    std::cout << f1 << " divided by " << f2 << " is equal to: " << (f1 / f2) << std::endl;
  }
  return 0;
}
