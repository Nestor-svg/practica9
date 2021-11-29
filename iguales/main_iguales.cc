/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file contado.cc
  * @author Néstor Hérnandez Rodríguez alu0101428369@ull.edu.es
  * @date 15/11/2021
  * @brief Write a program that reads a non-empty sequence of integer numbers, and tells how many of them are equal to the last one.
  *        Input consists of a natural number n> 0, followed by n integer numbers.
  *        Print the number of elements that are equal to the last one, this one excluded.
  * @see https://jutge.org/problems/P14130_en
*/


#include <iostream>
#include <vector>

int igual_ultimo(std::vector<int> sec) {
  int aux = sec[sec.size()-1];
  int contador = 0;
  for(int i = 0; i < sec.size()-1; ++i) {
    if(sec[i] == aux)
    contador++;
  }
  return contador;
}
int main() {
  int cantidad;
  int num;
  std::vector<int> secuencia;
  std::cin >> cantidad;
  for(int i = 0; i < cantidad; ++i) {
    std::cin >> num;
    secuencia.push_back(num);
  }
  std::cout << igual_ultimo(secuencia) << "\n";
  return 0;
}