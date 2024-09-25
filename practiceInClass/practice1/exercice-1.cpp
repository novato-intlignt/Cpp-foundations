#include <cmath>
#include <iostream>

int main(int argc, char *argv[]) {
  int num;
  std::cout << "Ingresar un numero: ";
  std::cin >> num;

  if (num % 5 == 0) {
    num = pow(num, 3);
  } else if (num % 10 == 7) {
    num = sqrt(num);
  }
  std::cout << "El numero se cambio a " << num << std::endl;
  return 0;
}
