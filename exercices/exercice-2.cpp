#include <cmath>
#include <iostream>

int main(int argc, char *argv[]) {
  int numA, numB, numC;
  int valMin;
  std::cout << "Ingresar un numero: ";
  std::cin >> numA >> numB >> numC;

  if (numA < numB && numA < numC) {
    valMin = numA;
  } else if (numB < numA && numB < numC) {
    valMin = numB;
  } else {
    valMin = numC;
  }
  std::cout << "El valor menor es: " << valMin << std::endl;

  return 0;
}
