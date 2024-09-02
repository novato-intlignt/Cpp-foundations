#include <cstdio>
#include <iostream>

int fibo(int n) {
  if (n == 1 || n == 0) {
    return n;
  }

  return fibo(n - 1) + fibo(n - 2);
}

int main() {
  int n_user;
  std::cout << "Ingresa el numero que desees: ";
  std::cin >> n_user;

  int res = fibo(n_user);
  std::cout << "El numero en la posicion " << n_user << " es: " << res << std::endl;
  return 0;
}
