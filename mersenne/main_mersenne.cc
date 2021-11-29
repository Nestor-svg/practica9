/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file contado.cc
  * @author Néstor Hérnandez Rodríguez alu0101428369@ull.edu.es
  * @date 15/11/2021
  * @brief Un primo de Mersenne es un número primo de la forma 2p - 1. Una propiedad conocida de de los primos de Mersenne es que p debe ser también un número primo. 
  *        Desarrolle un programa mersenne.cc que tome por línea de comandos un número N y muestre como salida los primeros N primos de Mersenne.
*/

#include <iostream>
#include <cstdlib>
#include <cmath>
#include "funcion_mersenne.h"

int main(int argc , char *agrv[]){
int n = atoi(agrv[1]);
int i = 0;
int j = 2;

    while(i < n){
        if(es_primo_mersenne(j)){
            i++;
            std::cout << pow(2, j) -1 << "\n";
        }
        j++;
    }
}