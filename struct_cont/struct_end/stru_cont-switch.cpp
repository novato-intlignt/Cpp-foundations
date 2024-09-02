#include <iostream>

int main() {
  int day = 4;

  switch (day) {
  case 1:
    std::cout << "Monday" << std::endl;
    break;
  case 2:
    std::cout << "Tuesday" << std::endl;
    break;
  case 3:
    std::cout << "Wednesday" << std::endl;
    break;
  default:
    std::cout << "Other day" << std::endl;
    break;
  }

  return 0;
}
