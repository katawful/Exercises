#include <iostream>
#include <string>
int value_swap_old(int i, int j){
  int *p = &i; int *q = &j; int *r; // p points to i, q points to j, r is declared
  *r = i; // pass i to r
  *p = j; // change
  return 0;
}

void value_swap(int &i, int &j){
  auto tmp = i;
  i = j;
  j = tmp;
}

int main (){
  int i = 13; int j = 54;
  std::cout << "i is " << i << " j is " << j << std::endl;
  value_swap(i, j);
  std::cout << "i is " << i << " j is " << j << std::endl;
  return 0;
}

// using reference parameters is much simpler than parameters, I don't need to warroy about pointer shenanigans
