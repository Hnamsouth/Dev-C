// for_each example
#include <iostream>     // std::cout
#include <algorithm>    // std::for_each
#include <vector>       // std::vector
 
void display (int i) {  // function:
  std::cout << ' ' << i;
}
 
struct myclass {           // function object type:
  void operator() (int i) {std::cout << ' ' << i;}
} myobject;
 
int main () {
  std::vector<int> myvector;    // khai bao 1 vector   
  myvector.push_back(10);       // truyrn tham so cho vector
  myvector.push_back(20);
  myvector.push_back(30);
//   int *ctro;
  int ar[5]={5,6,58,23,1};
    // int *ctro=&ar[5];
  std::cout << "myvector contains:";
  std::for_each(ar,ar+5,display);
  // thể thực thi với mảng 
  
  /*
  std::cout << '\n';
   std::cout << "myvector contains:";
  for_each (myvector.begin(), myvector.end(), display);
  std::cout << '\n';
  */

  // thực thi hàm for-each trong từng phần tử của myvector 
  // và truyền tham số vector đến hàm display

 /*
  // or:
  std::cout << "myvector contains:";
  for_each (myvector.begin(), myvector.end(), myobject);
  // có thẻ truyền đến các phương thức trong struct
  std::cout << '\n';
 */
  return 0;
}