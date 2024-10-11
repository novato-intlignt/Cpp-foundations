# Best Practices in Object-Oriented Programming

## Code Readability

- Write clear and descriptive class and method names.
- Use consistent indentation and spacing.
- Keep the code well-commented to explain complex logic.

- ```cpp
  template <typename T>
  class Pair {
  private:
      T first; // First element of the pair
      T second; // Second element of the pair
  public:
      Pair(T a, T b) : first(a), second(b) {} // Constructor

      T getFirst() const { return first; } // Getter for first element
      T getSecond() const { return second; } // Getter for second element
  };

  // Example usage
  Pair<int> intPair(1, 2);
  Pair<std::string> stringPair("Hello", "World");

  ```

## Code Reusability

- Design classes to be reusable in different contexts.
- Use templates where applicable to allow flexibility in data types.

- ```cpp
  class BankAccount {
  private:
      double balance; // Private member variable

  public:
      BankAccount() : balance(0.0) {} // Constructor

      void deposit(double amount) { // Method to deposit money
          if (amount > 0) {
              balance += amount;
          }
      }

      double getBalance() const { // Getter for balance
          return balance;
      }
  };
  ```

## Data Hiding

- Use private and protected access modifiers to restrict access to class members.
- Provide public getter and setter methods to control access to private data.

- ```cpp
  class Circle {
  private:
      double radius; // Radius of the circle

  public:
     Circle(double r) : radius(r) {} // Constructor

      double getArea() const { // Const method
          return 3.14159 * radius * radius; // Calculate area
      }

      void setRadius(const double r) { // Setter with const parameter
          if (r > 0) {
              radius = r; // Set new radius
          }
      }
  };
  ```

## Use of Const Correctness

- Use `const` keyword to indicate that certain methods do not modify the object, enhancing code safety.
- Use `const` for parameters that should not be modified, preventing unintended side effects.

- ```cpp
  class Circle {
  private:
      double radius; // Radius of the circle

  public:
      Circle(double r) : radius(r) {} // Constructor

      double getArea() const { // Const method
          return 3.14159 * radius * radius; // Calculate area
      }

      void setRadius(const double r) { // Setter with const parameter
          if (r > 0) {
              radius = r; // Set new radius
          }
      }
  };
  ```

## Favor Composition Over Inheritance

- Prefer using composition (having objects as members of other classes) over inheritance to enhance flexibility.
- This approach avoids the complexities and tight coupling associated with inheritance, making the code easier to manage and extend.

- ```cpp
  class Engine {
  public:
      void start() {
          std::cout << "Engine started." << std::endl; // Engine start message
      }
  };

  class Car {
  private:
      Engine engine; // Car has an Engine

  public:
      void startCar() {
          engine.start(); // Delegates the start to the engine
          std::cout << "Car is ready to go!" << std::endl; // Car ready message
      }
  };

  // Example usage
  int main() {
      Car myCar; // Create a Car object
      myCar.startCar(); // Start the car
      return 0;
  }
  ```
