#include <iostream>
#include <memory>
#include <vector>

// Abstract Base Class
class Shape {
public:
  // Pure virtual functions
  virtual double area() const = 0;
  virtual double perimeter() const = 0;

  virtual ~Shape() {} // Virtual destructor
};

// Derived Class: Circle
class Circle : public Shape {
private:
  double radius;

public:
  Circle(double r) : radius(r) {}

  double area() const override { return 3.1416 * radius * radius; }

  double perimeter() const override { return 2 * 3.1416 * radius; }
};

// Derived Class: Rectangle
class Rectangle : public Shape {
private:
  double width;
  double height;

public:
  Rectangle(double w, double h) : width(w), height(h) {}

  double area() const override { return width * height; }

  double perimeter() const override { return 2 * (width + height); }
};

int main() {
  std::vector<std::shared_ptr<Shape>> shapes;
  shapes.push_back(std::make_shared<Circle>(5.0)); // Circle with radius 5
  shapes.push_back(std::make_shared<Rectangle>(
      4.0, 6.0)); // Rectangle with width 4 and height 6

  for (const auto &shape : shapes) {
    std::cout << "Area: " << shape->area()
              << ", Perimeter: " << shape->perimeter() << std::endl;
  }
  // Output:
  // Area: 78.54, Perimeter: 31.416
  // Area: 24, Perimeter: 20

  return 0;
}

/*
Explanation:
- **Abstraction:** The `Shape` class is an abstract base class that defines a
common interface for all shapes with pure virtual functions `area()` and
`perimeter()`.
- **Concrete Implementations:** The `Circle` and `Rectangle` classes implement
the `area()` and `perimeter()` methods specific to their geometries.
- **Usage:** In `main`, a vector of `shared_ptr<Shape>` holds different shapes.
Calling `area()` and `perimeter()` on each shape demonstrates abstraction by
allowing different shapes to be treated uniformly.
*/
