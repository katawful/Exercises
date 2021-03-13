#include <iostream>
int fact(int val) {
  int ret = 1; // return variable, set to one so it always returns
  while (val > 1) {
    ret *= val--;
  }
  return ret;
}

int main() {
  int i;
  std::cout << "Enter a number: ";
  while (std::cin >> i) {
    std::cout << i;
    int val = fact(i);
    std::cout << "The factorial of " << i << " is: " << val << std::endl;
    return 0;
  }
}
