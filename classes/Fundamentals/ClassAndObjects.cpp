#include <iostream>
#include <string>

// Class Definition
class Person {
public:
  // Attributes (Public for simplicity)
  std::string name;
  int age;

  // Method to display information
  void greet() const {
    std::cout << "Hello, my name is " << name << " and I am " << age
              << " years old." << std::endl;
  }
};

int main() {
  // Creating an object of the Person class
  Person person1;
  person1.name = "John Doe";
  person1.age = 30;
  person1.greet(); // Output: Hello, my name is John Doe and I am 30 years old.

  // Creating another object with different values
  Person person2;
  person2.name = "Jane Smith";
  person2.age = 25;
  person2
      .greet(); // Output: Hello, my name is Jane Smith and I am 25 years old.

  return 0;
}

/*
Explanation:
  - **Class Definition:** The `Person` class has two public attributes: `name`
    and `age`, and a method `greet()` that prints a greeting message.
  - **Objects:** In the `main` function, two `Person` objects (`person1` and
    `person2`) are created with different attribute values, and their `greet()`
    methods are called to display their information.
*/
