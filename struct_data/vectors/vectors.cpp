#include <iostream>
#include <vector>

int main() {
  std::vector<int> numbers = {1, 2, 3, 4, 5}; // Declaration of a vector

  std::cout << "First element: " << numbers[0]
            << std::endl; // Accessing first element
  std::cout << "Size of vector: " << numbers.size()
            << std::endl; // Getting size

  // Assign a new value to the second element (index 1)
  numbers[1] = 100;

  // Output the modified vector
  std::cout << "Modified vector: ";
  for (int i = 0; i < numbers.size(); i++) {
    std::cout << numbers[i] << ", "; // Output: 10 100 30 40 50
  }
  std::cout << std::endl;
  return 0;
}
