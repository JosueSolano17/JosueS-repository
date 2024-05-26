#include "Potencia.h"
#include <iostream>

using namespace std;

int potenciaNum(int a , int b){
    if (b == 0) 
    return 1;
    
    return a * potenciaNum(a, b - 1);
}