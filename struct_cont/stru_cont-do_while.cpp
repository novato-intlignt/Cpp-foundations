#include <iostream>

int main() {
  int count = 4;

  do {
    std::cout << "Count is " << count << std::endl;
    count++;
  } while (count < 3);

  return 0;
}
