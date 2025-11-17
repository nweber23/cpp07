#include <iostream>
#include <string>
#include "Array.hpp"

int main()
{
  try {
    Array<int> a;
    std::cout << "a.size() = " << a.size() << std::endl;
    Array<int> b(5);
    std::cout << "b.size() = " << b.size() << std::endl;
    for (std::size_t i = 0; i < b.size(); ++i)
      b[i] = static_cast<int>(i * 10);
    for (std::size_t i = 0; i < b.size(); ++i)
      std::cout << "b[" << i << "]  " << b[i] << std::endl;
    const Array<int> cb(b);
    std::cout << "const cb[2] = " << cb[2] << std::endl;
    Array<std::string> s(3);
    std::cout << "string array size: " << s.size() << std::endl;
    for (std::size_t i = 0; i < s.size(); ++i)
      std::cout << "s[" << i << "] (before) = '" << s[i] << "'" << std::endl;
    s[1] = "hello";
    std::cout << "s[1] = " << s[1] << std::endl;
    try {
      std::cout << "attempting out-of-range access b[10]..." << std::endl;
      std::cout << b[10] << std::endl;
    } catch (const std::exception& e) {
      std::cout << "caught exception: " << e.what() << std::endl;
    }
  } catch (const std::exception& e) {
    std::cerr << "unexpected exception: " << e.what() << std::endl;
    return 1;
  }
  std::cout << "All tests completed." << std::endl;
  return 0;
}