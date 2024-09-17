#include <iostream>
#include <string>

int main(int argc, char *argv[]) {
  int count;
  float price;
  float saleNeto;
  float desc, descDay;
  float saleEnd;
  std::string day;

  std::cout << "Ingrese el precio por unidad, cuantos vendio y en que dia(todo "
               "separado por un espacio): ";
  std::cin >> price >> count >> day;

  saleNeto = price * count;

  desc = (count >= 10 ? 0.9 : 1.0) * (day == "Lunes" ? 0.8 : 1.0);

  saleEnd = saleNeto * desc;

  std::cout << "El precio final es: " << saleEnd
            << " Y lo descontado es: " << saleNeto - saleEnd << std::endl;
  return 0;
}
