/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file 
  * @author Néstor Hérnandez Rodríguez alu0101428369@ull.edu.es
  * @date 15/11/2021
  * @brief Write a program that reads non-empty sequences of real numbers and, for each sequence, prints its minimum, its maximum and its average.
  *        Input consists of a natural number n, followed by n sequences. Each sequence begins with the number of elements m > 0, followed by m real numbers.
  *        For every sequence, print in a line and with four digits after the decimal point its minimum, its maximum and its average.
  * @see https://jutge.org/problems/P17179_en
*/
#include <iostream>
#include <vector>
void medidas(std::vector<double> secuecia) {
  double max = 0, min = 100, aux = 0, suma = 0;
  double media = 0.0;
  for(int i = 0; i < secuecia.size(); i++) {
    aux = secuecia[i];
    suma += secuecia[i];
    if(aux > max)
      max = aux;
      if(aux < min)
        min = aux;
  }
  media=suma/secuecia.size();
  std::cout << min << " " << max << " " << media << "\n";
}

int main() {
  double num;
  int cantidad, t, aux;
  std::vector<double> sec;
  std::cin >> cantidad;
  while(aux = cantidad) {
    std::cin >> t;
    for(int i = 0; i < t; i++) {
      std::cin >> num;
      sec.push_back(num);
    }
    medidas(sec);
    aux++;
  }
  return 0;
}