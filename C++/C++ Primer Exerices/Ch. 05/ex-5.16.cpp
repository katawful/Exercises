#include <iostream>
#include <string>
using std::cout; using std::cin; using std::endl; using std::string; 
int main() {

  string input = "something";
  int len = input.size(), x = 0, i = 10;

  cout << "While string loop:" << endl;
  while (x < len){
    cout << input[x] << endl;
    ++x;
  }

  cout << "While iterate loop:" << endl;
  int ix = 0;
  while (ix < i){
    cout << ix << " ,";
    ++ix;
  }

  cout << "For string loop" << endl;
  for (auto &c : input){
    cout << c << endl;
  }

  cout << "For iterate loop:" << endl;
  for (ix = 0; ix < i; ++ix){
    cout << ix << " ,";
  }
}
// For loops seem a lot simpler than while loops for these two scenarios I picked.
// I would greatly prefer just using them overall it seems
