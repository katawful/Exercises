#include <iostream>
void reset(int &j) {
  j = 0;
}

int main() {
  int i = 42;
  std::cout << "i is: " << i << std::endl;
  reset(i);
  std::cout << "i is: " << i << std::endl;
}
