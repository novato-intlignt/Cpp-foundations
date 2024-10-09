#include <fstream>
#include <iostream>
#include <string>

int main() {
  // Flujo de entrada de archivo: lectura desde un archivo
  std::ifstream inputFile("data.txt");
  if (inputFile.is_open()) {
    std::string line;
    while (std::getline(inputFile, line)) { // Leer cada línea del archivo
      std::cout << "Archivo dice: " << line << std::endl;
    }
    inputFile.close();
  } else {
    std::cerr << "No se pudo abrir el archivo." << std::endl;
  }

  return 0;
}
