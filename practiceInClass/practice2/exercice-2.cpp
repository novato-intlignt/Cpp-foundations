#include <iostream>

float avg(int &a, int &b);
int main(int argc, char *argv[]) {
  int temp1, temp2;
  int days = 0;

  while (days <= 0) {

    std::cout << "Ingrese la cantidad de dias que analizara: ";
    std::cin >> days;

    if (days <= 0) {
      std::cout << "Ingrese un numero mayor a 0" << "\n";
    }
  }

  for (int i = 0; i < days; i++) {
    float avgTemp;
    std::cout << "ingrse la temperatura maxima y minima: ";
    std::cin >> temp1 >> temp2;
    avgTemp = avg(temp1, temp2);
    std::cout << "La temperatura media el dia " << i + 1 << " es: " << avgTemp
              << std::endl;
  }

  return 0;
}

float avg(int &a, int &b) { return (float)(a + b) / 2; }
