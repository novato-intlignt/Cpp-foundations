#include <iostream>

int main(int argc, char *argv[]) {
  int spend = 0;
  int price = 0;
  int count = 0;
  int total = 0;
  int product = 0;
  std::cout << "Ingrese su presupuesto: ";
  std::cin >> spend;

  do {
    std::cout << "Indique el precio del producto y la cantidad comprada: ";
    std::cin >> price >> count;
    product = price * count;
    total += (total + product) > spend ? product : 0;
  } while (total + product < spend);
  std::cout << "Usted esta por exceder su presupuest, el total gastado es: "
            << total;
  return 0;
}
