#include <iostream>

void modifyValue(int x) { x = 100; }

int main() {
  int num = 50;
  modifyValue(num);
  std::cout << "num: " << num << std::endl;
  return 0;
}
