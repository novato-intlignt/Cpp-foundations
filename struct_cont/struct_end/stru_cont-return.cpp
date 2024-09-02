#include <iostream>

int sum(int a, int b) {
    return a + b;
}

int main() {
    int result = sum(3, 4);
    std::cout << "Sum is: " << result << std::endl;
    return 0;
}
