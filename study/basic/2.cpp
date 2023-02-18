#include <algorithm>
#include <iostream>
#include <string>

int main()
 {
  std::string s1 = "12";
  std::string s2 = "123";
  
  bool result = std::lexicogtaphical_compare(s2.begin(), s1.end())
  //compare the string length
  bool result = std::lexicographical_compare(s1.begin(), s1.end(), s2.begin(), s2.end());
    // std::cout << s1.begin() << '\n' ;
	// std::cout << s1.end() << '\n';
  
//   bool result = std::lexicographical_compare(s1.rbegin(),s1.end(), s2.begin(), s2.end());
  if (result) {
    std::cout << s1 << " is lexicographically less than " << s2 << '\n';
  } else {
    std::cout << s1 << " is not lexicographically less than " << s2 << '\n';
  }
  
  return 0;
}
