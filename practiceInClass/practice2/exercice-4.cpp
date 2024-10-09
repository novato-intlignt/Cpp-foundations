#include <cmath>
#include <iostream>

int pot(int a, int b);
int main(int argc, char *argv[]) {
  int num1, num2, res;
  std::cout << "Ingresar lo numeros que desea analizar: ";
  std::cin >> num1 >> num2;

  res = pot(num1, num2);

  return 0;
}

int pot(int &a, int &b) {
  int res = b < 0 ? pow(a, b * -1) : pow(a, b);
  return res;
}
