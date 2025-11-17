#include "iter.hpp"
#include <iterator>

template <typename T>
void printElement(T& element) {
    std::cout << element << std::endl;
}

int main(void) {
  int intArray[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  std::cout << "Iterating over intArray:" << std::endl;
  iter(intArray, std::size(intArray), printElement);

  std::string strArray[] = {"Hello", "World"};
  std::cout << "Iterating over strArray:" << std::endl;
  iter(strArray, std::size(strArray), printElement);

  return 0;
}