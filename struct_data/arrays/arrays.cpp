#include <iostream>

int main() {
  int numbers[5] = {1, 2, 3, 4, 5}; // Declaration of an array with 5 elements

  std::cout << "First element: " << numbers[0]
            << std::endl; // Accessing first element
  std::cout << "Last element: " << numbers[4]
            << std::endl; // Accessing last element

  return 0;
}
