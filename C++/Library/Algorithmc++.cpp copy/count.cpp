// count algorithm example
#include <iostream>     // std::cout
#include <algorithm>    // std::count
#include <vector>       // std::vector
 
int main () {
  // counting elements in array:
  int myints[] = {10,20,30,30,20,10,10,20};   // mảng có 8 ph tủ
  int mycount = std::count (myints, myints+8, 10); 
  // hàm đếm các ptu xuat hiện bao nhiêu lần trong mảng
  std::cout << "10 appears " << mycount << " times.\n";
 
  // counting elements in container:
  std::vector<int> myvector (myints, myints+8);
  mycount = std::count (myvector.begin(), myvector.end(), 20);
  std::cout << "20 appears " << mycount  << " times.\n";
 

 /*
template <class InputIterator, class T>
  typename iterator_traits<InputIterator>::difference_type
    count (InputIterator first, InputIterator last, const T& val);
 */
  return 0;
}
 