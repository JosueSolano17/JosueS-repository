/*Universidad de las Fuerzas Armadas
           ESPE 
Autor: Josue Solano
Programa: Suma de los elementos de un numero (Recursividad)
Fecha Creacion: 23-05-2024
Fecha Modificacion: 26-05-2024*/
#include "Suma.cpp"
#include <iostream>

using namespace std;

int main(){

    int numero;

    cout << "Ingrese un número: ";
    cin >> numero;

    int sum = suma(numero);

    cout << "La suma de los dígitos de " << numero << " es " << sum << endl;

    return 0;
}