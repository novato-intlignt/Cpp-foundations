#include <cstdlib>
#include <iostream>
#include <ostream>
#include <string>

struct BallInfo {
  std::string color;
  float desc;
};

BallInfo getBallInfo(int &num);
float descUser(float &desc, int &buy);

int main(int argc, char *argv[]) {
  BallInfo ballInfo;
  srand(time(0));
  int countUser;
  int randNum;
  float totalDesc;
  int optUser = 0;

  do {
    std::cout << "INTRODUSCA LA CANTIDAD TOTAL DE COMPRA: ";
    std::cin >> countUser;

    if (countUser < 100) {
      std::cout << "SU GASTO NO IGUALA O SUPERA EL MINIMO PARA ACCEDER AL "
                   "DESCUENTO\n";
      continue;
    };
    std::cout << "SU GASTO IGUALA O SUPERA LOS 100, POR TANTO ES ACREEDOR "
                 "DEL DESCUENTO ALEATORIO\n";

    srand(time(0));
    randNum = rand() % 5;

    ballInfo = getBallInfo(randNum);

    totalDesc = descUser(ballInfo.desc, countUser);
    std::cout << "Usted saco la bola " << ballInfo.color << std::endl;
    std::cout << "Felicidades tienes un descuento de " << ballInfo.desc * 100
              << " por ciento" << std::endl;
    std::cout << "Tu nuevo total a pagar es de " << totalDesc << std::endl;

    std::cout << "Si desea terminar el programa ingrese 1";
    std::cin >> optUser;
  } while (optUser != 1);

  return 0;
}

BallInfo getBallInfo(int &num) {
  BallInfo ballInfo;

  switch (num) {
  case 0:
    ballInfo.color = "Blanco";
    ballInfo.desc = 0;
    break;
  case 1:
    ballInfo.color = "Rojo";
    ballInfo.desc = 0.1;
    break;
  case 2:
    ballInfo.color = "Azul";
    ballInfo.desc = 0.2;
    break;
  case 3:
    ballInfo.color = "Verde";
    ballInfo.desc = 0.25;
    break;
  case 4:
    ballInfo.color = "Amarillo";
    ballInfo.desc = 0.5;
    break;
  default:
    ballInfo.color = "Negro";
    ballInfo.desc = 1;
    break;
  }
  return ballInfo;
}

float descUser(float &desc, int &buy) {

  float totalBuy = desc == 0 ? (float)buy * 1 : (float)buy * (1 - desc);
  return totalBuy;
}
