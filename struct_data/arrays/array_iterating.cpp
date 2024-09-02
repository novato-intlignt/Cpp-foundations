#include <iostream>

int main() {
  int arr[3] = {10, 20, 30};

  std::cout << "Second element before modify: " << arr[1] << std::endl;
  // Modify the second element
  arr[1] = 50;
  std::cout << "Second element after modify: " << arr[1] << std::endl;

  // Iterating through the array
  for (int i = 0; i < 3; i++) {
    std::cout << "Element " << i << ": " << arr[i] << std::endl;
  }

  return 0;
}
