# Streams en C++

## Conceptos Básicos

- Definición: Un **stream** es una secuencia de datos que se puede leer o escribir.
- Tipos de streams:
  - Entrada (input)
  - Salida (output)

## Tipos de Streams

- **Flujos estándar**

  - `std::cin`: Entrada estándar (teclado)
  - `std::cout`: Salida estándar (pantalla)
  - `std::cerr`: Salida de error estándar
  - `std::clog`: Registro de salida de error estándar

- **Flujos de archivos**

  - `std::ifstream`: Entrada de archivos (lectura)
  - `std::ofstream`: Salida de archivos (escritura)
  - `std::fstream`: Entrada y salida de archivos (lectura y escritura)

- **Flujos de cadenas**
  - `std::istringstream`: Entrada de cadenas
  - `std::ostringstream`: Salida de cadenas
  - `std::stringstream`: Entrada y salida de cadenas

## Operaciones Comunes

- **Lectura**

  - `std::getline()`: Leer líneas completas
    ```cpp
    std::string name;
    std::getline(std::cin, name);
    ```
  - `>>`: Extracción de datos (formato)
    ```cpp
    int number;
    std::cin >> number;
    ```

- **Escritura**
  - `<<`: Inserción de datos (formato)
    ```cpp
    std::cout << "Hola, " << name << "!" << std::endl;
    ```
  - `std::endl`: Fin de línea y vaciado del buffer
    ```cpp
    std::cout << "Este es un ejemplo de salida." << std::endl;
    ```

## Manejo de Archivos

- **Apertura de archivos**

  - `open()`: Abrir un archivo
  - `is_open()`: Verificar si un archivo está abierto
    ```cpp
    std::ifstream inputFile("data.txt");
    if (inputFile.is_open()) {
        // Leer archivo
    }
    ```

- **Cierre de archivos**

  - `close()`: Cerrar un archivo
    ```cpp
    inputFile.close();
    ```

- **Comprobación de errores**
  - `fail()`: Comprobar si hubo un error
  - `eof()`: Comprobar si se llegó al final del archivo
    ```cpp
    if (inputFile.fail()) {
        std::cerr << "Error al leer el archivo." << std::endl;
    }
    ```

## Ejemplos Prácticos

- **Lectura desde la entrada estándar**
  ```cpp
  std::string name;
  std::getline(std::cin, name);
  ```
