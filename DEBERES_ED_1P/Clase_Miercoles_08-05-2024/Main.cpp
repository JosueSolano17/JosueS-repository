#include "Racional.cpp"
#include "Racional_Interfaces.cpp"
#include <iostream>

using namespace std;

int main(){
int suma;
    Racional r1(2,4);
    Racional r2(1,5);
    Racional  r3;
    suma= Suma_int(r1,r2);
    printf("%d",suma);
    return 0;
    
}