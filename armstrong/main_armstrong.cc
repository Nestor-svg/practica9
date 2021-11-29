/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file contado.cc
  * @author Néstor Hérnandez Rodríguez alu0101428369@ull.edu.es
  * @date 29/11/2021
  * @brief Desarrolle un programa en C++ que tome como parámetro por línea de comandos un número e indique si se trata de un número de Armstrong o no.
*/
#include "funcion_armstrong.h"

int main(int argc, char *argv[]) {
  std::string number;
  int comprobar;
  number = argv[1];
  comprobar = atoi(argv[1]);
  armstrong(number, comprobar);    
}