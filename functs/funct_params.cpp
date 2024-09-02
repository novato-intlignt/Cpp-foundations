#include <iostream>

// Function that adds two integers and returns the result
int add(int a, int b) { return a + b; }

int main() {
  int result = add(3, 5);                      // Call the function
  std::cout << "Sum: " << result << std::endl; // Output: Sum: 8
  return 0;
}

