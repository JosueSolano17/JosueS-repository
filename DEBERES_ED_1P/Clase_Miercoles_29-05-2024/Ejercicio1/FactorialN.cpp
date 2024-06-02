#include "FactorialN.h"
#include <iostream>

long long Factorial :: calcular(int n){
    if (n < 0) {
        std::cerr << "Error: El factorial no está definido para números negativos." << std::endl;
        return -1;
    }
    if(n==0 || n==1){
        return 1;
    } else {
        return n * calcular(n - 1);
    }
}