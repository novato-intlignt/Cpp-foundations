#include <cmath>
#include <iostream>

float PI = 3.14;

float are(int &rad);
float peri(int &rad);
int main(int argc, char *argv[]) {
  int rad;
  float area, perimeter;
  std::cout << "Ingresar el area de su circunferencia: ";
  std::cin >> rad;
  area = are(rad);
  perimeter = peri(rad);

  std::cout << "El area de la circunferencia es: " << area << std::endl;
  std::cout << "El perimetro de la circunferencia es: " << perimeter
            << std::endl;
  return 0;
};

float are(int &rad) { return PI * pow(rad, 2); };

float peri(int &rad) { return PI * rad * 2; };
