#include <iostream>
using namespace std;

// Función para hacer la partición
int partition(int arr[], int low, int high) {
  int pivot = arr[high]; // Elegimos el último elemento como pivote
  int i = low - 1;       // Índice del menor elemento

  for (int j = low; j < high; j++) {
    // Si el elemento actual es menor o igual al pivote
    if (arr[j] <= pivot) {
      i++; // Incrementar el índice del menor elemento
      swap(arr[i],
           arr[j]); // Intercambiar el elemento en i con el elemento en j
    }
  }
  swap(arr[i + 1], arr[high]); // Colocar el pivote en su posición correcta
  return i + 1;
}

// Función de QuickSort
void quickSort(int arr[], int low, int high) {
  if (low < high) {
    // pi es el índice del pivote
    int pi = partition(arr, low, high);

    // Ordenar recursivamente las sublistas
    quickSort(arr, low, pi - 1);  // Sublista izquierda
    quickSort(arr, pi + 1, high); // Sublista derecha
  }
}

int main() {
  int arr[] = {10, 7, 8, 9, 1, 5};
  int n = sizeof(arr) / sizeof(arr[0]);
  std::cout << sizeof(arr) << "\n" << sizeof(arr[0]);
  quickSort(arr, 0, n - 1);
  cout << "Arreglo ordenado: ";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  return 0;
}
