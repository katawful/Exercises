#include <iostream>
#include <vector>
using std::cout; using std::cin; using std::endl; using std::vector; 
int main(){
  vector<int> v1 = {0,1,1,2};
  vector<int> v2 = {0,1,1,2,3,5,8};
  vector<int> v3 = {0,1,3,5,6,7,8};
  
  auto v1beg = v1.begin();
  auto v2beg = v2.begin();
  auto v3beg = v3.begin();
  for (auto it2 = v2.begin(); it2 != v2.end(); ++it2){
    for (auto it1 = v1.begin(); it1 != v1.end(); ++it1){
      if (*it1 != *it2){
        cout << "v1 is not a prefix of v2" << endl;
      }
    }
  }
}
