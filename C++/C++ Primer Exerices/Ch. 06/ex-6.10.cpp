#include <iostream>
#include <string>
int value_swap(int i, int j){
  int *p = &i; int *q = &j; int *r; // p points to i, q points to j, r is declared
  *r = i; // pass i to r
  *p = j; // change
  return 0;
}
int main (){
  int i = 13; int j = 54;
  int *p = &i; // point to i
  std::cout << "p points to " << *p << " " << i << " " << j << std::endl;
  *p = j;
  std::cout << "p now points to " << *p << " " << j << " " << i << std::endl;
  return 0;
}
