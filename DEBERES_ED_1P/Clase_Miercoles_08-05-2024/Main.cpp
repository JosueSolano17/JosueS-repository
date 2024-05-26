/*Universidad de las Fuerzas Armadas
           ESPE 
Autor: Josue Solano
Programa: Obtener el valor donde almacene dos valores de cualquier tipo y proporcione métodos para obtener estos valores.
Fecha Creacion: 15-05-2024
Fecha Modificacion: 15-05-2024
*/
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