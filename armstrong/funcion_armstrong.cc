#include "funcion_armstrong.h"

void armstrong(std::string number, int comprobar) {
  int resultado = 0;
  int tam = number.size();
  std::string digit;
  int number_int;
  for (int i = 0; i < number.size(); ++i) {
    digit = number[i];
    number_int = stoi(digit);
    resultado += pow(number_int, tam);
  }
  if (resultado == comprobar) {
    std::cout << number << " is an Armstrong number" << std::endl;
  }
  else {
    std::cout << number << " is not an Armstrong number" << std::endl;
  }
}