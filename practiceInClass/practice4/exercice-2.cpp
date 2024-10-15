#include <iostream>

int getSumPair(int arr[], int init, int len, int sum);

int main(int argc, char *argv[]) {
  int len;
  int sum = 0;
  std::cout << "Ingrese el tamaño del arreglo deseado: ";
  std::cin >> len;

  int arr[len];
  std::cout << "Ingrese los elementos del arreglo:" << std::endl;
  for (int i = 0; i < len; i++) {
    std::cin >> arr[i]; // Leer los valores
  }
  sum = getSumPair(arr, 0, len, sum);
  std::cout << "La suma es: " << sum << std::endl;
  return 0;
}

int getSumPair(int arr[], int init, int len, int sum) {
  if (init >= len) {
    return sum;
  }
  sum += arr[init];
  return getSumPair(arr, init + 2, len, sum);
}
