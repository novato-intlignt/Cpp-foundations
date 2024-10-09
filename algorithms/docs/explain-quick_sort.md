# Algoritmo Quick Sort

## Descripción general

Quick Sort es un algoritmo de ordenamiento de tipo "divide y vencerás". Funciona seleccionando un **pivote** y luego particionando el arreglo en dos subarreglos:

1. Elementos menores al pivote.
2. Elementos mayores o iguales al pivote.

El proceso se repite recursivamente en cada subarreglo hasta que todo el arreglo esté ordenado.

## Funcionamiento básico

1. **Elegir un pivote**: Puede ser cualquier elemento del arreglo, aunque normalmente se elige el primero, el último, o uno aleatorio.
2. **Particionar el arreglo**: Reorganizar los elementos de tal forma que todos los que son menores que el pivote queden a su izquierda, y los mayores o iguales, a su derecha.
3. **Llamadas recursivas**: Aplicar Quick Sort recursivamente a los dos subarreglos (izquierda y derecha del pivote).
4. **Repetir** hasta que los subarreglos tengan uno o cero elementos.

## Pasos detallados

1. **Paso inicial**:

   - Si el arreglo tiene uno o cero elementos, está ordenado.
   - Si tiene más de un elemento, continúa al siguiente paso.

2. **Selección del pivote**:

   - Seleccionar un elemento como pivote. (Ejemplo: último elemento).

3. **Partición**:

   - Reorganizar el arreglo para que:
     - Los elementos menores que el pivote estén a su izquierda.
     - Los elementos mayores o iguales al pivote estén a su derecha.
   - Esto se hace mediante un índice de izquierda (`i`) y un índice de derecha (`j`), donde se intercambian elementos cuando sea necesario.

4. **Dividir y ordenar**:

   - Aplicar el mismo proceso de forma recursiva en los dos subarreglos:
     - Subarreglo izquierdo (elementos menores que el pivote).
     - Subarreglo derecho (elementos mayores o iguales que el pivote).

5. **Combinación**:
   - El arreglo estará ordenado una vez que todos los subarreglos hayan sido ordenados recursivamente.

## Complejidad temporal

- **Mejor caso**: O(n log n) - El pivote divide el arreglo en partes aproximadamente iguales.
- **Peor caso**: O(n²) - El pivote divide el arreglo de manera muy desigual (por ejemplo, cuando el arreglo ya está ordenado).
- **Caso promedio**: O(n log n) - La partición tiende a dividir el arreglo en partes equilibradas.

## Código en C++

```cpp
#include <iostream>
using namespace std;

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // Pivote
    int i = low - 1;

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        // Ordenar elementos por separado antes y después de la partición
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, n - 1);
    cout << "Array ordenado: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}

```

## Ventajas

- Muy eficiente en la mayoría de los casos.
- No requiere memoria adicional significativa.

## Desventajas

- El peor caso es O(n²), lo que puede ser ineficiente para arreglos grandes si no se selecciona bien el pivote.
- Es ineficiente para arreglos ya ordenados o casi ordenados (a menos que se utilice una optimización como el pivote aleatorio).
