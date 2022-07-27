/* 
template <class ForwardIterator, class T>
  bool binary_search (ForwardIterator first, ForwardIterator last,
                      const T& vtoral);
 
Trả vtorề true nếu tồn tại phần tử trong [first, last) bằng vtorới vtoral. Ngược lại, trả vtorề false.
*/
// binary_search example
#include <iostream>     // std::cout
#include <algorithm>    // std::binary_search, std::sort
#include <vector>       // std::vtorector
 
bool myfunction (int i,int j) { return (i<j); }
 
int main () {
  int myints[] = {1,2,3,4,5,4,3,2,1};
  std::vector<int> vtor(myints,myints+9);                         // 1 2 3 4 5 4 3 2 1
 
  // using default comparison:
  std::sort (vtor.begin(), vtor.end()); // sắp xếp lại các phần tử từ nhỏ đến lơn của vector
 
  std::cout << "looking for a 3... ";
  if (std::binary_search (vtor.begin(), vtor.end(), 3)) // nếu tìm thầy 3 thì trả về kq true và nguoc lại
    std::cout << "found!\n"; 
    else std::cout << "not found.\n";
 
  // using myfunction as comp: sắp xếp từ lớn về nhỏ
  std::sort (vtor.begin(), vtor.end(), myfunction);
 
  std::cout << "looking for a 6... ";
  if (std::binary_search (vtor.begin(), vtor.end(), 6, myfunction))
    std::cout << "found!\n"; 
    else std::cout << "not found.\n";
 
  return 0;
}
 