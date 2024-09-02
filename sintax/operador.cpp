#include <iostream>
#include <string>

int main() {
  // Variables for demonstration
  int a = 10, b = 3;
  float c = 2.5;
  bool flag = true;

  // Arithmetic Operators
  std::cout << "Arithmetic Operators:\n";
  std::cout << "Addition (a + b): " << (a + b) << std::endl;
  std::cout << "Modulus (a % b): " << (a % b) << std::endl;

  // Assignment Operators
  std::cout << "\nAssignment Operators:\n";
  a += 5; // Same as: a = a + 5
  std::cout << "After a += 5: " << a << std::endl;
  a *= 2; // Same as: a = a * 2
  std::cout << "After a *= 2: " << a << std::endl;

  // Increment/Decrement Operators
  std::cout << "\nIncrement/Decrement Operators:\n";
  ++a; // Pre-increment
  std::cout << "After ++a: " << a << std::endl;
  b--; // Post-decrement
  std::cout << "After b--: " << b << std::endl;

  // Relational Operators
  std::cout << "\nRelational Operators:\n";
  std::cout << "Is a greater than b? (a > b): " << (a > b) << std::endl;
  std::cout << "Is c less than or equal to 5.0? (c <= 5.0): " << (c <= 5.0)
            << std::endl;

  // Logical Operators
  std::cout << "\nLogical Operators:\n";
  std::cout << "Logical AND (a > 5 && b < 10): " << ((a > 5) && (b < 10))
            << std::endl;
  std::cout << "Logical OR (a < 5 || b < 10): " << ((a < 5) || (b < 10))
            << std::endl;

  // Bitwise Operators
  std::cout << "\nBitwise Operators:\n";
  int x = 5; // In binary: 101
  int y = 3; // In binary: 011
  std::cout << "Bitwise AND (x & y): " << (x & y)
            << std::endl; // Result: 001 (1)
  std::cout << "Bitwise OR (x | y): " << (x | y)
            << std::endl; // Result: 111 (7)

  // Ternary Operator
  std::cout << "\nTernary Operator:\n";
  std::string result =
      (a > b) ? "a is greater than b" : "b is greater or equal to a";
  std::cout << result << std::endl;

  return 0;
}
