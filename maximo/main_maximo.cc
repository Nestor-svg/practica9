/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file contado.cc
  * @author Néstor Hérnandez Rodríguez alu0101428369@ull.edu.es
  * @date 15/11/2021
  * @brief Write a program that reads sequences of integer numbers and prints the maximum value of each sequence.
  *        Input contains several sequences. Each sequence begins with its number of elements n > 0, followed by n integer numbers.
  *        Print the maximum of every sequence, one per line.
  * @see https://jutge.org/problems/P71753_en
*/

#include <iostream>
#include <vector>

int max(std::vector<int> sec) {
  int maximo = 0, aux = 0;
  for(int i = 0 ; i < sec.size(); i++) {
    aux = sec[i];
    if(aux > maximo)
    maximo = aux;
  }
  return maximo;
}

int main() {
  int num;
  std::vector<int> secuencia;
  for(int i = 0; i < 15; i++) {
    std::cin >> num;
    secuencia.push_back(num);
  }
  std::cout << max(secuencia) << "\n";
  return 0;
}
