#include <cstring>
#include <iostream>

// Class managing dynamic memory
class String {
private:
  char *data;

public:
  // Constructor
  String(const char *str = "") {
    if (str) {
      data = new char[std::strlen(str) + 1];
      std::strcpy(data, str);
    } else {
      data = new char[1];
      data[0] = '\0';
    }
    std::cout << "Constructor called for: " << data << std::endl;
  }

  // Copy Constructor (Deep Copy)
  String(const String &other) {
    data = new char[std::strlen(other.data) + 1];
    std::strcpy(data, other.data);
    std::cout << "Copy Constructor called for: " << data << std::endl;
  }

  // Move Constructor
  String(String &&other) noexcept : data(other.data) {
    other.data = nullptr;
    std::cout << "Move Constructor called." << std::endl;
  }

  // Destructor
  ~String() {
    if (data) {
      std::cout << "Destructor called for: " << data << std::endl;
      delete[] data;
    } else {
      std::cout << "Destructor called for empty String." << std::endl;
    }
  }

  // Method to display the string
  void display() const {
    if (data)
      std::cout << data << std::endl;
    else
      std::cout << "Empty String." << std::endl;
  }
};

int main() {
  String s1("Hello");
  String s2 = s1;            // Copy Constructor
  String s3 = std::move(s1); // Move Constructor

  std::cout << "s1: ";
  s1.display(); // Output: Empty String.
  std::cout << "s2: ";
  s2.display(); // Output: Hello
  std::cout << "s3: ";
  s3.display(); // Output: Hello

  return 0;
}

/*
Explanation:
- **Copy Constructor:** Creates a deep copy of the `String` object to ensure
that each object manages its own memory.
- **Move Constructor:** Transfers ownership of the dynamic memory from a
temporary object (`s1`) to a new object (`s3`), leaving the temporary object in
a valid but empty state.
- **Destructor:** Frees the allocated memory to prevent memory leaks.
- **Demonstration:** In `main`, `s2` is a copy of `s1`, and `s3` is created by
moving `s1`. After the move, `s1` no longer holds the original data.
- **Output:**
    Constructor called for: Hello
    Copy Constructor called for: Hello
    Move Constructor called.
    s1: Empty String.
    s2: Hello
    s3: Hello
    Destructor called for empty String.
    Destructor called for: Hello
    Destructor called for: Hello
*/
