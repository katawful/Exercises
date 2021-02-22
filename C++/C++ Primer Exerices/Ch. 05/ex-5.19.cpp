#include <iostream>
#include <string>
using std::cout; using std::cin; using std::endl; using std::string; 
int main(){
  string s1, s2;
  do {
    cout << "Please insert two strings: ";
    cin >> s1 >> s2;
    auto s1size = s1.size();
    auto s2size = s2.size();

    cout << endl;
    if (s1size > s2size)
      cout << s1 << " is longer than " << s2 << endl;
    else
      cout << s1 << " is smaller than " << s2 << endl;
  } while(!s1.empty() && !s2.empty());
  return 0;
}
