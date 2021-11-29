/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file contado.cc
  * @author Néstor Hérnandez Rodríguez alu0101428369@ull.edu.es
  * @date 15/11/2021
  * @brief Write a program that reads triples of natural numbers a, b and k, and for each one computes and prints the result of
  *        for all fractions with denominator smaller than or equal to b.
  * @see https://jutge.org/problems/P76024_en
*/


#include<iostream>
#include <iomanip>
float denominador(float a, float b, float k) {
    float denominador = a;
    float iterador = 0.0;
    float numerador = 1.0;
    float operacion = 0.0;
    while (denominador < b) {
      denominador = a + (iterador * k);
      if(denominador > b)
        break;
      operacion += numerador/denominador;
      ++iterador;      
    }    
    return operacion;
}
int main() {
    float  a, b, k;
    std::cin >> a;
    std::cin >> b;
    std::cin >> k;
    std::cout << std::fixed << std::setprecision(4) << denominador(a, b, k);

}