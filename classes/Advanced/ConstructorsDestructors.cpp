#include <iostream>
#include <string>

// Class with Constructor and Destructor
class Logger {
public:
  std::string name;

  // Constructor
  Logger(const std::string &loggerName) : name(loggerName) {
    std::cout << "Logger " << name << " created." << std::endl;
  }

  // Destructor
  ~Logger() { std::cout << "Logger " << name << " destroyed." << std::endl; }

  // Method to log a message
  void log(const std::string &message) const {
    std::cout << "[" << name << "] " << message << std::endl;
  }
};

int main() {
  {
    Logger appLogger("AppLogger"); // Output: Logger AppLogger created.
    appLogger.log("Application has started."); // Output: [AppLogger]
                                               // Application has started.
  } // Output: Logger AppLogger destroyed.

  return 0;
}

/*
Explanation:
- **Constructors:** The `Logger` class has a constructor that initializes the
`name` attribute and prints a creation message.
- **Destructors:** The destructor prints a destruction message when the object
goes out of scope.
- **Scope-Based Lifetime:** In `main`, the `Logger` object `appLogger` is
created within a block. When the block is exited, the destructor is
automatically called, demonstrating resource management.
*/
