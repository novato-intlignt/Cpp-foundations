#include <iostream>
#include <string>

int main() {
  std::string name = "Alejandro"; // Cadena
  int age = 19;                   // Entero
  float height = 1.76;            // Flotante
  double noaAvg = 14.3567;        // Flotante
  char inicial = 'A';             // Caracter
  bool esMajor = true;            // Booleano

  std::cout << "Nombre: " << name << std::endl;
  std::cout << "Edad: " << age << std::endl;
  std::cout << "Altura: " << height << std::endl;
  std::cout << "Promedio: " << noaAvg << std::endl;
  std::cout << "Inicial: " << inicial << std::endl;
  std::cout << "Es mayor: " << esMajor << std::endl;
  return 0;
}
