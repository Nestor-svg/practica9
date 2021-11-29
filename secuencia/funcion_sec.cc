/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file contado.cc
  * @author Néstor Hérnandez Rodríguez alu0101428369@ull.edu.es
  * @date 15/11/2021
  * @brief Write a function that tells if the integer number x is present in the vector of integer numbers v.
  *        In order to compare the efficiency of your solution against the efficiency of the solution of the Judge, start searching for x from the lowest positions.
  * @see https://jutge.org/problems/P11725_en
*/


#include <iostream>
#include <vector>

bool exists(int x, const std::vector<int>& v) {
  bool presente = false;
  for(int i = 0; i < v.size(); ++i)
  {
    if(x == v[i])
    {
      presente = true;
      break;
    }
  }
  return presente;
}