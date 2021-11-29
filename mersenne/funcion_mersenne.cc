#include <iostream>
#include <cmath>
#include "funcion_mersenne.h"

bool es_primo(int n){
    int aux = 0;
    for(int i = 2 ; i <= n ; i++){
        if(n % i == 0)
            aux++;
    }
    if(aux > 1)
        return false;
    return true;
}

bool es_primo_mersenne(int n){
    bool aux = false;
    if(es_primo(n)){
        aux = true;
    }
    return aux;
}