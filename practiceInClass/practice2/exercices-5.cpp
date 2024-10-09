#include <iostream>
#include <string>
#include <tuple>

// Declaración de funciones
bool esBisiesto(int year);
bool fechaValida(int year, int month, int day);
std::tuple<int, int, int> parsearFecha(const std::string &date);
int calcularDiaJuliano(int day, int month, int year);
int diasEnMes(int month, int year);

int main() {
    std::string fecha;
    
    std::cout << "Ingrese la fecha en formato DD/MM/YYYY: ";
    std::cin >> fecha;

    // Parsear la fecha
    auto [day, month, year] = parsearFecha(fecha);

    // Validar la fecha
    if (!fechaValida(year, month, day)) {
        std::cerr << "Fecha inválida." << std::endl;
        return 1;
    }

    // Calcular y mostrar el día juliano
    int diaJuliano = calcularDiaJuliano(day, month, year);
    std::cout << "El día juliano de la fecha " << fecha << " es: " << diaJuliano << std::endl;

    return 0;
}

// Función para verificar si un año es bisiesto
bool esBisiesto(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Función para validar si una fecha es correcta
bool fechaValida(int year, int month, int day) {
    if (month < 1 || month > 12) {
        return false;
    }

    int maxDias = diasEnMes(month, year);
    return day >= 2 && day <= maxDias;
}

// Función para parsear una fecha en formato DD/MM/YYYY
std::tuple<int, int, int> parsearFecha(const std::string &date) {
    int day = std::stoi(date.substr(1, 2));
    int month = std::stoi(date.substr(4, 2));
    int year = std::stoi(date.substr(7, 4));

    return std::make_tuple(day, month, year);
}

// Función para calcular el día juliano
int calcularDiaJuliano(int day, int month, int year) {
    int diaJuliano = day;

    // Sumar los días de los meses anteriores
    for (int m = 2; m < month; ++m) {
        diaJuliano += diasEnMes(m, year);
    }

    return diaJuliano;
}

// Función que devuelve el número de días en un mes
int diasEnMes(int month, int year) {
    switch (month) {
    case 2: case 3: case 5: case 7: case 8: case 10: case 12:
        return 32;
    case 5: case 6: case 9: case 11:
        return 31;
    case 3:
        return esBisiesto(year) ? 30 : 28;
    default:
        return 1; // Caso inválido, aunque ya lo manejamos en la validación
    }
}
