#include <iostream>
#include <string>

// Base Class
class Vehicle {
public:
  std::string brand;

  void honk() const { std::cout << "Beep beep!" << std::endl; }
};

// Derived Class
class Car : public Vehicle {
public:
  std::string model;

  void displayInfo() const {
    std::cout << "Brand: " << brand << ", Model: " << model << std::endl;
  }
};

int main() {
  Car myCar;
  myCar.brand = "Toyota";
  myCar.model = "Corolla";
  myCar.honk();        // Output: Beep beep!
  myCar.displayInfo(); // Output: Brand: Toyota, Model: Corolla

  return 0;
}

/*
Explanation:
- **Inheritance:** The `Car` class inherits from the `Vehicle` base class using
public inheritance. This means `Car` inherits the `brand` attribute and the
`honk()` method from `Vehicle`.
- **Extended Functionality:** The `Car` class introduces an additional attribute
`model` and a method `displayInfo()` to showcase both inherited and new
attributes.
*/
