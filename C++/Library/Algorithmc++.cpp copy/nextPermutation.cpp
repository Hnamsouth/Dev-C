template <class BidirectionalIterator>
  bool next_permutation (BidirectionalIterator first,
                         BidirectionalIterator last);
//Trả về hoán vị tiếp theo có thự tự sắp xếp cao hơn so với hoán vị hiện tại.
 
// next_permutation example
#include <iostream>     // std::cout
#include <algorithm>    // std::next_permutation, std::sort
 
int main () {
  int myints[] = {1,2,3};
 
  std::sort (myints,myints+3); // first must be lowest
 
  std::cout << "The 3! possible permutations with 3 elements:\n";
  do {
    std::cout << myints[0] << ' ' << myints[1] << ' ' << myints[2] << '\n';
  } while ( std::next_permutation(myints,myints+3) );
 
  std::cout << "After loop: " << myints[0] << ' ' << myints[1] << ' ' << myints[2] << '\n';
 
  return 0;
}