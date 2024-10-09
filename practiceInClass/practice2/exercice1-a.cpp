#include <iostream>
#include <utility> // std::swap

int main() {
  int a = 10, b = 20;
  int temp = a;
  a = b;
  b = temp;
  std::cout << "a: " << a << ", b: " << b << std::endl;
  return 0;
}
