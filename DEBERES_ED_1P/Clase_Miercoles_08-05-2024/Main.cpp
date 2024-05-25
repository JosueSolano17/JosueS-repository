#include "Racional.cpp"
#include "Racional_Interfaces.cpp"
#include <iostream>

using namespace std;

int main(){
int suma;
    Racional r1(8,3);
    Racional r2(7,2);
    Racional  r3;
    suma= Suma_int(r1,r2);
    printf("Suma de numerador y denominador: %d",suma);
    return 0;
    
}