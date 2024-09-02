#include <iostream>

// Function to calculate the factorial of a number using recursion
int factorial(int n) {
  if (n == 0) {
    return 1; // Base case
  } else {
    return n * factorial(n - 1); // Recursive case
  }
}

int main() {
  int result = factorial(5); // Call the recursive function
  std::cout << "Factorial of 5: " << result << std::endl; // Output: 120
  return 0;
}
