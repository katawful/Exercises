#include <iostream>
#include <vector>
using std::cout; using std::endl; using std::vector; 
int main(){
  vector<int> v1 = {0,1,1,2};
  vector<int> v2 = {0,1,1,2,3,5,8};
  vector<int> v3 = {0,1,3,1,2,7,8};

  auto v1size = v1.size();
  auto v2size = v2.size();
  auto v3size = v3.size();
  
  auto v1beg = v1.begin();
  auto v2beg = v2.begin();
  auto v3beg = v3.begin();

  int i1 = 0, i2 = 0, check = 0;
  cout << "v1 vs v2" << endl;
  while(i2 < v2size){
    if(v1[i1] == v2[i2]){
      ++check;
    }
    ++i1; ++i2;
  }
  if (check == (v1size)){
    cout << "they match?" << endl;
  }
  i1 = 0, check = 0;
  int i3 = 0;
  cout << "v1 vs v3" << endl;
  while(i3 < v3size){
    if(v1[i1] == v3[i3]){
      ++check;
    }
    ++i1; ++i3;
  }
  if (check == (v1size)){
    cout << "they match?" << endl;
  }
}
