#include <iostream>
#include <iomanip> // Para std::setw y std::setfill

bool esPrimo(int num) {
  if (num <= 1) {
    return false;
  }
  if (num == 2 || num == 3) {
    return true;
  }
  if (num % 2 == 0 || num % 3 == 0) {
    return false;
  }
  for (int i = 5; i * i <= num; i += 6) {
    if (num % i == 0 || num % (i + 2) == 0) {
      return false;
    }
  }
  return true;
}

int main() {
  int hour = 0;
  int min = 0;
  int seg = 0;

  while (hour < 24) {
    while (min < 60) {
      while (seg < 60) {
        if (esPrimo(hour) || esPrimo(min) || esPrimo(seg)) {
        std::cout << std::setfill('0') << std::setw(2) << hour << ":"
                  << std::setfill('0') << std::setw(2) << min << ":"
                  << std::setfill('0') << std::setw(2) << seg << "\n";
        }
        seg++;
      }
      seg = 0;
      min++;
    }
    min = 0;
    hour++;
  }

  return 0;
}
