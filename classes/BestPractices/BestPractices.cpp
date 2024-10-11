#include <iostream>

// Class demonstrating best practices
class Rectangle {
private:
  int width;
  int height;

public:
  // Constructor with Initialization List
  Rectangle(int w, int h) : width(w), height(h) {}

  // Accessor Methods declared as const
  int getWidth() const { return width; }
  int getHeight() const { return height; }

  // Method to calculate area, declared as const
  int area() const { return width * height; }

  // Method to calculate perimeter, declared as const
  int perimeter() const { return 2 * (width + height); }

  // Rule of Three: Destructor, Copy Constructor, Copy Assignment Operator
  ~Rectangle() {
    // No dynamic memory, but good practice to include
  }

  Rectangle(const Rectangle &other) : width(other.width), height(other.height) {
    std::cout << "Copy Constructor called." << std::endl;
  }

  Rectangle &operator=(const Rectangle &other) {
    if (this != &other) {
      width = other.width;
      height = other.height;
      std::cout << "Copy Assignment Operator called." << std::endl;
    }
    return *this;
  }

  // Rule of Five: Move Constructor, Move Assignment Operator
  Rectangle(Rectangle &&other) noexcept
      : width(other.width), height(other.height) {
    other.width = 0;
    other.height = 0;
    std::cout << "Move Constructor called." << std::endl;
  }

  Rectangle &operator=(Rectangle &&other) noexcept {
    if (this != &other) {
      width = other.width;
      height = other.height;
      other.width = 0;
      other.height = 0;
      std::cout << "Move Assignment Operator called." << std::endl;
    }
    return *this;
  }
};

int main() {
  Rectangle rect1(10, 20);
  std::cout << "Area: " << rect1.area() << ", Perimeter: " << rect1.perimeter()
            << std::endl;
  // Output: Area: 200, Perimeter: 60

  // Using Copy Constructor
  Rectangle rect2 = rect1; // Output: Copy Constructor called.

  // Using Copy Assignment Operator
  Rectangle rect3(5, 5);
  rect3 = rect1; // Output: Copy Assignment Operator called.

  // Using Move Constructor
  Rectangle rect4 = std::move(rect1); // Output: Move Constructor called.

  // Using Move Assignment Operator
  Rectangle rect5(3, 3);
  rect5 = std::move(rect2); // Output: Move Assignment Operator called.

  std::cout << "After Moves:" << std::endl;
  std::cout << "rect4 Area: " << rect4.area()
            << ", Perimeter: " << rect4.perimeter() << std::endl;
  std::cout << "rect5 Area: " << rect5.area()
            << ", Perimeter: " << rect5.perimeter() << std::endl;
  // Output:
  // After Moves:
  // rect4 Area: 200, Perimeter: 60
  // rect5 Area: 200, Perimeter: 60

  return 0;
}

/*
Explanation:
- **Initialization Lists:** The constructor uses an initialization list for
efficient member initialization.
- **Const-Correctness:** Accessor and calculation methods are declared as
`const` to ensure they do not modify the object's state.
- **Rule of Three/Five:** Since the class manages resources (hypothetically,
though in this case it doesn't), it implements the destructor, copy constructor,
copy assignment operator, move constructor, and move assignment operator to
manage resource copying and moving correctly.
- **Avoiding Unnecessary Code:** Although `Rectangle` doesn't manage dynamic
memory, including the Rule of Three/Five methods demonstrates good practice when
resource management is involved.
- **Output Demonstration:** The `main` function demonstrates the use of copy and
move constructors and assignment operators, along with the corresponding output
messages.
- **Output:**
    Area: 200, Perimeter: 60
    Copy Constructor called.
    Copy Assignment Operator called.
    Move Constructor called.
    Move Assignment Operator called.
    After Moves:
    rect4 Area: 200, Perimeter: 60
    rect5 Area: 200, Perimeter: 60
*/
