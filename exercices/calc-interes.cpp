#include <iostream>
#include <math.h>

void intSimple(float cI, float tI, int time) {
  float resSimpl = cI * (1 + (tI / 100) * time);
  std::cout << "El interes simple generado por el capital" << cI
            << "a una taza de interes" << tI << "durante " << time << "es> $"
            << resSimpl << std::endl;
}
void intComp(float cI, float tI, int time) {
  float resComp = cI * pow(1 + (tI / 100), time);
  std::cout << "El interes compuesto generado por el capital" << cI
            << "a una taza de interes" << tI << "durante " << time << "es> $"
            << resComp << std::endl;
}
int main() {
  float capInit = 0;
  float tazaInt = 0;
  int opt = 0;
  int time = 0;
  std::cout << "Escoja el tipo de interes que desea aplicar" << std::endl;
  std::cout << "1. Interes Simple" << std::endl;
  std::cout << "2. Interes Compuesto" << std::endl;

  while (opt != 1 && opt != 2) {
    std::cout << "Ingresa la opcion que desees> ";
    std::cin >> opt;
  }
  while (capInit < 1) {
    std::cout << "Ingresa el capital inicial> ";
    std::cin >> capInit;
  }

  while (tazaInt < 1) {
    std::cout << "Ingresa la taza dee interes> ";
    std::cin >> tazaInt;
  }
  while (time < 1) {
    std::cout << "Ingresa el tiempo en años> ";
    std::cin >> time;
  }

  if (opt == 1) {
    intSimple(capInit, tazaInt, time);
  } else if (opt == 2) {
    intComp(capInit, tazaInt, time);
  }
  return 0;
}
