#include <iostream>

int *addElement(int *arr, int val, int pos, int len, int index);

int main(int argc, char *argv[]) {
  int len;
  int pos;
  int val;
  std::cout << "Ingrese el tamaño del arreglo deseado: ";
  std::cin >> len;

  int *arr = new int[len];
  std::cout << "Ingrese los elementos del arreglo:" << std::endl;
  for (int i = 0; i < len; i++) {
    std::cin >> arr[i];
  }

  std::cout << "Ingrese el valor y la pocicion del elemento nuevo: ";
  std::cin >> val >> pos;

  arr = addElement(arr, val, pos, len, 0);

  for (int i = 0; i < len; i++) {
    std::cout << arr[i] << ", ";
  }
  return 0;
}

int *addElement(int *arr, int val, int pos, int len, int index) {
  if (index == len) {
    return arr;
  }

  if (index >= pos) {
    arr[index] = arr[index - 1];
  }

  if (index == pos) {

    arr[index] = val;
  }
  return addElement(arr, val, pos, len, index + 1);
}
