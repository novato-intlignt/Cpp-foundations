#include <iostream>

struct Rueda {
  float diameter;
  float width;
};

void evaluateLengthDiameter(const Rueda &rueda);
int main(int argc, char *argv[]) {
  Rueda newRueda;
  std::cout << "Ingrese el diametro y grosor de la nueva rueda: ";
  std::cin >> newRueda.diameter >> newRueda.width;

  if (newRueda.diameter < 0.8) {
    std::cout << "La rueda es para un vehiculo pequeño\n";
  }

  if (newRueda.diameter > 0.8 && newRueda.diameter <= 1.4) {
    std::cout << "La rueda es para un vehiculo mediano\n";
    if (newRueda.width < 0.25) {
      std::cout << "El grosor para esta rueda es inferior al recomendado\n";
    }
  }

  if (newRueda.diameter > 1.4) {
    std::cout << "La rueda es para un vehiculo grande\n";
    if (newRueda.width < 0.4) {
      std::cout << "El grosor para esta rueda es inferior al recomendado\n";
    }
  }

  return 0;
}

void evaluateLengthDiameter(const Rueda &rueda) {
  if (rueda.diameter > 1.4) {
    std::cout << "La rueda es para un vehiculo grande\n";
  } else if (rueda.diameter > 0.8 && rueda.diameter <= 1.4) {
    std::cout << "La rueda es para un vehiculo mediano\n";
  } else {
    std::cout << "La rueda es para un vehiculo pequeño\n";
  }
}
