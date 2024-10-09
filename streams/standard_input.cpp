#include <iostream>
#include <string>

int main() {
  // Flujo de entrada: lectura desde la entrada estándar (cin)
  std::string name;
  std::cout << "Ingrese su nombre: ";
  std::getline(std::cin, name); // Leer una línea completa desde la entrada
  std::cout << "Hola, " << name << "!" << std::endl;

  return 0;
}
