#include <iostream>

int main(int argc, char *argv[]) {
  float price;
  int count;
  float saleEnd1, saleEnd2;
  float desc = 1.0;
  float saleNeto;

  std::cout << "Ingrese la venta que ha tenido, y cuantos vendio: ";
  std::cin >> price >> count;
  saleNeto = price * count;

  if (count > 10) {
    desc = 0.9;
  }

  saleEnd1 = saleNeto * desc;

  saleEnd2 = count > 10 ? (price * count) * 0.9 : saleNeto;
  std::cout << "El precio final es: " << saleEnd1
            << " Y lo descontado es: " << saleNeto - saleEnd1 << std::endl;
  std::cout << "El precio final es: " << saleEnd2
            << " Y lo descontado es: " << saleNeto - saleEnd2 << std::endl;
  return 0;
}
