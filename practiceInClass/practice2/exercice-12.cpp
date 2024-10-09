#include <iostream>

int chooseOpt(int opt);

int sum(int a, int b);
int rest(int a, int b);
int prod(int a, int b);

int main(int argc, char *argv[]) {
  int a, b;
  int optUser = 0;
  int res = 0;
  std::cout << "Ingresar los numeros a y b, separados por un espacion: ";
  std::cin >> a >> b;

  do {
    std::cout << "1) Sumar" << "\n";
    std::cout << "2) Restar" << "\n";
    std::cout << "3) Multiplicar" << "\n";
    std::cout << "Ingresar la operacion que desea hacer: " << "\n";
    std::cin >> optUser;

    switch (optUser) {
    case 1:
      res = sum(a, b);
      break;
    case 2:
      res = rest(a, b);
      break;
    case 3:
      res = prod(a, b);
      break;
    default:
      res = 0;
      optUser = 0;
      break;
    }
    if (res != 0) {
      std::cout << "El resultado luego de la operacion es: " << res << "\n";
    }

  } while (optUser != 0);

  return 0;
}

int sum(int a, int b) { return a + b; }
int rest(int a, int b) { return a + (-b); }
int prod(int a, int b) {
  if (b == 1) {
    return a;
  }
  return a + prod(a, b - 1);
}
