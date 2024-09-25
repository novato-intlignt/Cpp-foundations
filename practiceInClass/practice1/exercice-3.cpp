#include <iostream>
#include <string>

int main(int argc, char *argv[]) {
  float price;
  int count;
  float saleEnd;
  float desc = 1.0;
  float saleNeto;
  std::string day;

  std::cout << "Ingrese la venta que ha tenido, y cuantos vendio: ";
  std::cin >> price >> count >> day;
  saleNeto = price * count;

  desc = (count >= 10 ? 0.9 : 1.0) * (day == "Lunes" ? 0.8 : 1.0);
  saleEnd = saleNeto * desc;

  std::cout << "El precio final es: " << saleEnd
            << " Y lo descontado es: " << saleNeto - saleEnd << std::endl;
  return 0;
}
