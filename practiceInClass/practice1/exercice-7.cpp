#include <iostream>
#include <ostream>

int main(int argc, char *argv[]) {
  int tickets, coins;
  int countTicket, countCoin;
  int valTicket, valCoin;
  int countTicketAll, countCoinAll, totalMoney = 0;
  float moneyChanged, exChange;
  int optUser;

  std::cout << "Ingrese la cantidad de billetes y monedas que tiene: ";
  std::cin >> tickets >> coins;

  std::cout << "Billetes" << std::endl;
  for (int i = 0; i <= tickets; i++) {
    std::cout << "Ingrese el valor del billete que tiene y cuantos tiene: ";
    std::cin >> valTicket >> countTicket;
    countTicketAll += valTicket * countTicket;
  }

  std::cout << "Monedas" << std::endl;
  for (int i = 0; i <= coins; i++) {
    std::cout << "Ingrese el valor del monedas que tiene y cuantos tiene: ";
    std::cin >> valCoin >> countCoin;
    countCoinAll += valCoin * countCoin;
  }

  totalMoney = countTicketAll + countCoinAll;
  std::cout << "La cantidad total en monedas que tiene es: " << countCoinAll
            << std::endl;
  std::cout << "La cantidad total de billetes que tiene es: " << countTicketAll
            << std::endl;
  std::cout << "La cantidad total de dinero que tiene es: " << totalMoney
            << std::endl;

  std::cout << "Que tipo de operacion desea hacer? " << std::endl;
  std::cout << "Opciones" << std::endl;
  std::cout << "1. Cambiar a dolares" << std::endl;
  std::cout << "2. Cambiar a euros" << std::endl;
  std::cout << "3. No hacer nada" << std::endl;
  std::cout << std::endl;
  std::cout << "Su eleccion es: " << std::endl;
  std::cin >> optUser;

  switch (optUser) {
  case 1:
    exChange = 3.77;
    moneyChanged = totalMoney * exChange;
    std::cout << "De acuerdo al cambio, su dinero en dolares es: "
              << moneyChanged << std::endl;
    break;
  case 2:
    exChange = 4.22;
    moneyChanged = totalMoney * exChange;
    std::cout << "De acuerdo al cambio, su dinero en euros es: " << moneyChanged
              << std::endl;
    break;
  case 3:
    std::cout << "Muchas gracias por preferirnos" << std::endl;
    break;
  default:
    std::cout << "No escogio ninguna de las opciones presentadas";
    break;
  }
  return 0;
}
