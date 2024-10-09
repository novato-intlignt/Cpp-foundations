#include <iostream>
#include <sstream>
#include <string>
#include <vector>

int main() {
  // Flujo de cadenas: procesar una cadena como un flujo
  std::string data = "1,2,3,4,5";
  std::istringstream iss(data); // Tratar la cadena como un flujo de entrada
  std::string number;
  std::vector<std::string> numbers;

  // Ejemplo de delimitador personalizado: leer la cadena usando ',' como
  // delimitador
  while (std::getline(iss, number, ',')) {
    numbers.push_back(number);
  }

  // Salida de los números analizados
  std::cout << "Los números son: ";
  for (const std::string &num : numbers) {
    std::cout << num << " ";
  }
  std::cout << std::endl;

  // Flujo de salida de cadenas: construir una cadena a partir de partes
  std::ostringstream oss;
  oss << "Has introducido los números: ";
  for (const std::string &num : numbers) {
    oss << num << " ";
  }

  // Imprimir la cadena construida
  std::cout << oss.str() << std::endl;

  return 0;
}
