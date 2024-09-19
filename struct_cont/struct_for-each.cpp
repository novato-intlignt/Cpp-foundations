#include <iostream>
#include <vector>

int main() {
  std::vector<int> numeros = {1, 2, 3, 4, 5};

  // Bucle for-each para recorrer el vector
  for (int numero : numeros) {
    std::cout << numero << " "; // Imprimir cada número
  }

  return 0;
}

