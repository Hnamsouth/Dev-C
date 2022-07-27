/* 
Trả về chỉ số của phần tử đầu tiên trong [first, last) nếu nó bằng với giá trị val. 
If không tìm được phần tử nào, hàm trả về giá trị last.

template <class InputIterator, class T>
   InputIterator find (InputIterator first, InputIterator last, const T& val);
*/
 
// find example
#include <iostream>     // std::cout
#include <algorithm>    // std::find
#include <vector>       // std::vector
 
int main () {
  // using std::find with array and pointer:
  int myints[] = { 10, 20, 30, 40 };
  int * p;
 // phải dùng con trỏ để gán giá trị cho hàm find
 // hàm tìm 1 số có hay ko có trong mảng hoặc vector
  p = std::find (myints, myints+4, 40);
  if (p != myints+4) // chua hieu
    std::cout << "30 duoc tim thay trong mang myints: " << *p << '\n';
  else
    std::cout << " ko tim thay 30 trong mang myints "<<*p<<std::endl;
 
  // using std::find with vector and iterator:
  std::vector<int> myvector (myints,myints+4); 
  // cos thể truyền tham số cho vector bàng mảng
  std::vector<int>::iterator it;
 
  it = find (myvector.begin(), myvector.end(), 30);
  //If không tìm được phần tử nào, hàm trả về giá trị last(trả về myvector.end()).
  if (it != myvector.end()) // nếu it ko bằng last thì tìm thấy
    std::cout << "30 duoc tim thay trong myvector: " << *it << '\n';
  else  // it == last : ko tìm thấy
    std::cout << " ko tim thay 30 trong myvector\n";
 
  return 0;
}