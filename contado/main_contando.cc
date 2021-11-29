/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file 
  * @author Néstor Hérnandez Rodríguez alu0101428369@ull.edu.es
  * @date 29/11/2021
  * @brief Desarrolle un programa en C++ que tome como parámetro por línea de comandos un número e indique si se trata de un número de Armstrong o no.
*/

#include <iostream>
#include <vector>
int contador(std::vector<int> v, int numero) {
  int cont = 0;
  for(int i = 0; i < v.size(); ++i) {
    if(numero == v[i])
    cont++;
  }
  return cont;
}

int main() {
  int cantidad, aux, num=0;
  std::cin >> cantidad;
  std::vector<int> v;
  for(int i = 0; i < cantidad; ++i) {
    std::cin >> aux;
    v.push_back(aux);
  }
  for(int j = 0; j < v.size(); ++j) {
    if(v[j] != v[j+1]) {
      num = v[j];
      std::cout << num << ": " << contador(v, num) << "\n";
    }
  }
  return 0;
}