/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file contado.cc
  * @author Néstor Hérnandez Rodríguez alu0101428369@ull.edu.es
  * @date 15/11/2021
  * @brief In this exercise, we say that a natural number is balanced if the sum of the digits in even positions is equal to the sum of the digits in odd positions. 
  *        For instance, 1463 and 48015 are balanced numbers.
  *        Write a function that tells if a natural number n is balanced or not.
  * @see https://jutge.org/problems/P34279
*/


#include <iostream>
#include <string>

bool is_balnced(int n) {
  std::string num = std::to_string(n);
  std::string aux1;
  bool aux = false;
  int suma_par = 0;
  int suma_impar = 0;
  
  for(int i = 0; i < num.size(); i++) {
      if(i % 2 == 0){
      aux1 = num[i];
      suma_par += std::stoi(aux1);
    }else{
      aux1 = num[i];
      suma_impar += std::stoi(aux1);
    }
  }

  if(suma_impar == suma_par)
    aux = true;
    return aux;

}

int main() {
  int numero;
  std::cin >> numero;
  std::cout << is_balnced(numero) << "\n"; 
  return 0;
}