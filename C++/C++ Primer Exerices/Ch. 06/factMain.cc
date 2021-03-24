#ifndef header
#define header
#include <iostream>
#include "Chapter6.h"
#endif
int main(){
  int i;
  std::cout << "Enter a number: ";
  while (std::cin >> i) {
    int val = fact(i);
    std::cout << "The factorial of " << i << " is: " << val << std::endl;
    return 0;
  }
}
