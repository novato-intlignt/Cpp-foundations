#include <iostream>

int *deleteElement(int *arr, int pos, int len, int index);

int main(int argc, char *argv[]) {
  int len;
  int pos;
  std::cout << "Ingrese el tamaño del arreglo deseado: ";
  std::cin >> len;

  int *arr = new int[len];
  std::cout << "Ingrese los elementos del arreglo:" << std::endl;
  for (int i = 0; i < len; i++) {
    std::cin >> arr[i];
  }

  std::cout << "Ingrese la posicion del elemento que desea eliminar: ";
  std::cin >> pos;

  arr = deleteElement(arr, pos, len, 0);

  for (int i = 0; i < len; i++) {
    std::cout << arr[i] << ", ";
  }
  return 0;
}

int *deleteElement(int *arr, int pos, int len, int index) {
  if (index == len) {
    return arr;
  }

  if (index >= pos) {
    arr[index] = arr[index + 1];
  }
  return deleteElement(arr, pos, len, index + 1);
}
