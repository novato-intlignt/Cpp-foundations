#include <iostream>

// Class representing complex numbers
class Complex {
public:
  double real;
  double imaginary;

  // Constructor
  Complex(double r = 0.0, double i = 0.0) : real(r), imaginary(i) {}

  // Overload the + operator
  Complex operator+(const Complex &other) const {
    return Complex(real + other.real, imaginary + other.imaginary);
  }

  // Overload the << operator for easy printing
  friend std::ostream &operator<<(std::ostream &os, const Complex &c);
};

// Implementation of the << operator
std::ostream &operator<<(std::ostream &os, const Complex &c) {
  os << c.real;
  if (c.imaginary >= 0)
    os << " + " << c.imaginary << "i";
  else
    os << " - " << -c.imaginary << "i";
  return os;
}

int main() {
  Complex c1(3.5, 2.5);
  Complex c2(1.5, -4.0);
  Complex c3 = c1 + c2;

  std::cout << "c1: " << c1 << std::endl; // Output: c1: 3.5 + 2.5i
  std::cout << "c2: " << c2 << std::endl; // Output: c2: 1.5 - 4i
  std::cout << "c3: " << c3 << std::endl; // Output: c3: 5 + -1.5i

  return 0;
}

/*
Explanation:
- **Operator Overloading (`+`):** The `+` operator is overloaded to add two
`Complex` numbers by summing their real and imaginary parts separately.
- **Friend Function (`<<`):** The `<<` operator is overloaded as a friend
function to allow easy printing of `Complex` objects using `std::cout`.
- **Usage:** In `main`, three `Complex` objects are created and added using the
overloaded `+` operator. The results are printed using the overloaded `<<`
operator.
- **Output:**
    c1: 3.5 + 2.5i
    c2: 1.5 - 4i
    c3: 5 + -1.5i
*/
