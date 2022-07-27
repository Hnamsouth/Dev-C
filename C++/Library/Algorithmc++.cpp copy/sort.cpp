// sort algorithm example
#include <iostream>     // std::cout
#include <algorithm>    // std::sort
#include <vector>       // std::vector
 
bool myfunction (int i, int j) { return (i > j); }
 
 
int main () {
  int myints[] = {32, 71, 12, 45, 26, 80, 53, 33,545,84,3,21};
  std::vector<int> myvector (myints, myints + 12);             // 32 71 12 45 26 80 53 33
    /*
    std::sort(myints,myints+12);
    for(int i=0;i<12;i++){
            std::cout<<myints[i]<<" ";
        }*/
  // using default comparison (operator <): sử dụng sx từ nhỏ đến lớn
  std::sort (myvector.begin(), myvector.end());         //(12 32 45 71)26 80 53 33
 
   //using function as comp: sx từ lớn về nhỏ
//    std::sort (myvector.begin(), myvector.end(), myfunction); // 12 32 45 71(26 33 53 80)
 
  // hoặc có thể viết như này: 
//    std::sort (myvector.begin(), myvector.end(), std::greater<int>());     // std::less<int>() by default
 
  // print out content:
  
  std::cout << "myvector contains:";
  for (std::vector<int>::iterator it = myvector.begin(); it != myvector.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << '\n';
 
 /* 
 template <class RandomAccessIterator, class Compare>
  void sort (RandomAccessIterator first, RandomAccessIterator last, Compare comp);
 */
 /* 
     Sắp xếp dãy theo thứ tự tăng dần(mặc định).
    Nếu muốn sắp xếp theo thứ tự ngược lại, bạn sẽ cần truyền vào hàm comp.
    Với các kiểu dữ liệu nguyên thủy, có hàm comp mặc định là std::greater và std::less
 */
  return 0;
}