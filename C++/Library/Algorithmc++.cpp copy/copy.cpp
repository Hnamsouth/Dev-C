// copy algorithm example
#include <iostream>     // std::cout
#include <algorithm>    // std::copy
#include <vector>       // std::vector
 
int main () {
  int myints[]={10,20,30,40,50,60,70};
  std::vector<int> myvector (7);
 
  std::copy ( myints, myints+7, myvector.begin() );
  // sao chép các ptu trong mảng tù 0-7 và gán cho vector myvector
 
  std::cout << "myvector contains:";
  std::vector<int>::iterator it;
  for ( it = myvector.begin(); it!=myvector.end(); ++it)
  // tương tự như mảng sử dụng vòng lặp. bắt đầu từ [0] -> [n]: 
  // nếu it == phần tử cuối cùng thì vl kết thúc
    std::cout << ' ' << *it;
 
  std::cout << '\n';
 
  return 0;
}