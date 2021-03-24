#ifndef header
#define header
#include <iostream>
#include "Chapter6.h"
#endif
int fact(int val){
  int ret = 1;
  while (val > 1) {
    ret *= val--;
  }
  return ret;
}
