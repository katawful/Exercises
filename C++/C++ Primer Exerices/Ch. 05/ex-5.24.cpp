#include <iostream>
#include <stdexcept>
int main() {
  float f1, f2;
  std::cout << "Input 2 numbers: ";
  while(std::cin >> f1 >> f2){
    try {
      if (f2 == 0 ) throw std::runtime_error("Second number cannot be equal to 0");
      std::cout << f1 << " divided by " << f2 << " is equal to: " << (f1 / f2) << std::endl;
    } catch (std::runtime_error err) {
      std::cout << err.what() << "\nTry again? y/n" << std::endl;
      char c;
      std::cin >> c;
      if (!std::cin || c == 'n') break;
    }
  }
  return 0;
}
