#include <iostream>

int *getRevertArr(int arr[], int init, int len, int *newArr);

int main(int argc, char *argv[]) {
  int len;
  std::cout << "Ingrese el tamaño del arreglo deseado: ";
  std::cin >> len;

  int arr[len];
  int *revertArr = new int[len];

  std::cout << "Ingrese los elementos del arreglo:" << std::endl;
  for (int i = 0; i < len; i++) {
    std::cin >> arr[i]; // Leer los valores
  }

  revertArr = getRevertArr(arr, 0, len - 1, revertArr);

  for (size_t i = 0; i < len; i++) {
    std::cout << revertArr[i] << ", ";
  }
  return 0;
}

int *getRevertArr(int arr[], int init, int len, int *newArr) {
  if (len < 0) {
    return newArr;
  }
  newArr[init] = arr[len];
  return getRevertArr(arr, init + 1, len - 1, newArr);
}
