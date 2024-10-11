#include <iostream>
#include <memory>
#include <vector>

// Base Class
class Animal {
public:
  virtual void makeSound() const {
    std::cout << "Generic animal sound." << std::endl;
  }

  virtual ~Animal() {} // Virtual destructor for proper cleanup
};

// Derived Class: Dog
class Dog : public Animal {
public:
  void makeSound() const override { std::cout << "Woof!" << std::endl; }
};

// Derived Class: Cat
class Cat : public Animal {
public:
  void makeSound() const override { std::cout << "Meow!" << std::endl; }
};

int main() {
  // Using smart pointers for automatic memory management
  std::vector<std::shared_ptr<Animal>> animals;
  animals.push_back(std::make_shared<Dog>());
  animals.push_back(std::make_shared<Cat>());
  animals.push_back(std::make_shared<Animal>());

  // Polymorphic behavior
  for (const auto &animal : animals) {
    animal->makeSound();
  }
  // Output:
  // Woof!
  // Meow!
  // Generic animal sound.

  return 0;
}

/*
Explanation:
- **Polymorphism:** The `Animal` class has a virtual method `makeSound()`, which
is overridden by derived classes `Dog` and `Cat`.
- **Dynamic Binding:** In the `main` function, a vector of `shared_ptr<Animal>`
holds different types of animals. When `makeSound()` is called on each, the
correct overridden method is executed based on the actual object type.
- **Output:**
  Woof!
  Meow!
  Generic animal sound.
*/
