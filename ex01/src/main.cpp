#include "iter.hpp"

template <typename T>
void printElement(T& element) {
    std::cout << element << std::endl;
}

int main(void) {
  int intArray[] = {1, 2, 3, 4, 5};
  std::cout << "Iterating over intArray:" << std::endl;
  iter(intArray, 5, printElement);

  std::string strArray[] = {"Hello", "World", "from", "iter"};
  std::cout << "Iterating over strArray:" << std::endl;
  iter(strArray, 4, printElement);

  return 0;
}