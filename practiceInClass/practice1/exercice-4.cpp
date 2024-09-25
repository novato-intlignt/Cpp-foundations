#include <iostream>

int main(int argc, char *argv[]) {
  int valMotor;
  do {
    std::cout << "Indicar el tipo de motor: ";
    std::cin >> valMotor;

    switch (valMotor) {
    case 0:
      std::cout
          << "No hay establecido un valor definido para el tipo de bomba.\n";
      break;
    case 1:
      std::cout << "La bomba es una bomba de agua.\n";
      break;
    case 2:
      std::cout << "La bomba es una bomba de gasolina.\n";
      break;
    case 3:
      std::cout << "La bomba es una bomba de hormigon.\n";
      break;
    case 4:
      std::cout << "La bomba es una bomba de pasta alimenticia.\n";
      break;
    default:
      std::cout << "No existe un valor valido para el tipo de bomba.\n";
      break;
    }
  } while (valMotor != 5);
  return 0;
}
