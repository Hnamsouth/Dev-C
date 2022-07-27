// min example
#include <iostream>     // std::cout
#include <algorithm>    // std::min
 
int main () {
    int a=2,b=6;
  std::cout << "min(a,b)==" << std::min(a,b) << '\n';
  std::cout << "min(b,a)==" << std::min(b,a) << '\n';
  std::cout << "min('a','z')==" << std::min('a','z') << '\n';
  std::cout << "min(3.14,2.72)==" << std::min(3.14,2.72) << '\n';


std::cout << "max(a,b)==" << std::max(a,b) << '\n';
  std::cout << "max(b,a)==" << std::max(b,a) << '\n';
  std::cout << "max('a','z')==" << std::max('a','z') << '\n';
  std::cout << "max(3.14,2.73)==" << std::max(3.14,2.73) << '\n';
  return 0;
}
 