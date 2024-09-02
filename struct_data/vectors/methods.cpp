#include <iostream>
#include <vector>

int main() {
  // 1. Creating a vector and adding elements
  std::vector<int> numbers; // Empty vector of integers
  numbers.push_back(10);    // Add 10 to the end
  numbers.push_back(20);    // Add 20 to the end
  numbers.push_back(30);    // Add 30 to the end

  std::cout << "Initial vector: ";
  for (int i = 0; i < numbers.size(); i++) {
    std::cout << numbers[i] << " "; // Output: 10 20 30
  }
  std::cout << std::endl;

  // 2. Accessing elements
  std::cout << "First element: " << numbers.front() << std::endl; // Output: 10
  std::cout << "Last element: " << numbers.back() << std::endl;   // Output: 30
  std::cout << "Element at index 1: " << numbers.at(1)
            << std::endl; // Output: 20

  // 3. Inserting elements
  numbers.insert(numbers.begin() + 1, 15); // Insert 15 at index 1
  std::cout << "After insertion: ";
  for (int i = 0; i < numbers.size(); i++) {
    std::cout << numbers[i] << " "; // Output: 10 15 20 30
  }
  std::cout << std::endl;

  // 4. Modifying elements
  numbers[2] = 25; // Modify the element at index 2 to 25
  std::cout << "After modification: ";
  for (int i = 0; i < numbers.size(); i++) {
    std::cout << numbers[i] << " "; // Output: 10 15 25 30
  }
  std::cout << std::endl;

  // 5. Removing elements
  numbers.erase(numbers.begin() + 1); // Remove the element at index 1
  std::cout << "After removal: ";
  for (int i = 0; i < numbers.size(); i++) {
    std::cout << numbers[i] << " "; // Output: 10 25 30
  }
  std::cout << std::endl;

  // 6. Removing the last element
  numbers.pop_back(); // Remove the last element
  std::cout << "After pop_back: ";
  for (int i = 0; i < numbers.size(); i++) {
    std::cout << numbers[i] << " "; // Output: 10 25
  }
  std::cout << std::endl;

  // 7. Clearing the vector
  numbers.clear(); // Remove all elements
  std::cout << "After clear, size of vector: " << numbers.size()
            << std::endl; // Output: 0

  return 0;
}
