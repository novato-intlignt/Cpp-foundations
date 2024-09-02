#include <iostream>

// Overloaded functions with different parameter types
int add(int a, int b) { return a + b; }

float add(float a, float b) { return a + b; }

int main() {
  int intSum = add(3, 5);           // Calls the int version
  float floatSum = add(2.5f, 3.1f); // Calls the float version

  std::cout << "Integer Sum: " << intSum << std::endl; // Output: 8
  std::cout << "Float Sum: " << floatSum << std::endl; // Output: 5.6

  return 0;
}
