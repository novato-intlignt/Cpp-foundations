#include <iostream>
#include <string>

// Base Class 1
class Flyer {
public:
  void fly() const { std::cout << "Flying in the sky." << std::endl; }
};

// Base Class 2
class Swimmer {
public:
  void swim() const { std::cout << "Swimming in the water." << std::endl; }
};

// Derived Class inheriting from both Flyer and Swimmer
class Duck : public Flyer, public Swimmer {
public:
  std::string name;

  Duck(const std::string &duckName) : name(duckName) {}

  void display() const {
    std::cout << "Duck Name: " << name << std::endl;
    fly();
    swim();
  }
};

int main() {
  Duck donald("Donald");
  donald.display();
  // Output:
  // Duck Name: Donald
  // Flying in the sky.
  // Swimming in the water.

  return 0;
}

/*
Explanation:
- **Multiple Inheritance:** The `Duck` class inherits from both `Flyer` and
`Swimmer` base classes, allowing it to exhibit behaviors of both flying and
swimming.
- **Member Functions:** `Flyer` provides the `fly()` method, and `Swimmer`
provides the `swim()` method. `Duck` can use both methods seamlessly.
- **Display Method:** The `display()` method in `Duck` showcases the combined
functionalities.
- **Output:**
    Duck Name: Donald
    Flying in the sky.
    Swimming in the water.
*/
