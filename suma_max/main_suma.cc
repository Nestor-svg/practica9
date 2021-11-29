/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file contado.cc
  * @author Néstor Hérnandez Rodríguez alu0101428369@ull.edu.es
  * @date 15/11/2021
  * @brief Write a program that reads a sequence of numbers, and prints the maximum quantity that can be obtained by adding numbers consecutively from the beginning, 
  *        and the maximum quantity that can be obtained by adding numbers consecutively from the end.
  *        Input consists of several cases. Each case begins with a number n, followed by n integer numbers.
  *        For every case, print two numbers: the maximum quantity that can be obtained by adding zero or more consecutive numbers from the beginning, and the maximum quantity 
  *        that can be obtained by adding zero or more consecutive numbers from the end.
  * @see https://jutge.org/problems/P20262_en
*/


#include <iostream>
#include <vector>

int max_principio(std::vector<int> secuencia) {
  int suma = 0, max = 0;
  for(int i = 0; i < secuencia.size(); ++i) {
    suma += secuencia[i];
    if(suma >= max)
      max = suma;
  }
  return max;
}
int max_fin(std::vector<int> secuencia) {
  int suma = 0, max = 0;
  for(int i = secuencia.size()-1; i >= 0; --i) {   
    suma += secuencia[i];
    if(suma >= max)
      max = suma;
  }
  return max;
}
int main() {
  int cantidad, aux;
  std::cin >> cantidad;
  std::vector<int> sec;
  for(int i = 0; i < cantidad; ++i) {
    std::cin >> aux;
    sec.push_back(aux);
  }
  std::cout << max_principio(sec) << " " << max_fin(sec) << "\n";
  return 0;
}