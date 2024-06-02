/*
Universidad de las Fuerzas Armadas
           ESPE 
Autor: Josue Solano
Programa: Factorial con recursividad
Fecha Creacion: 29-05-2024
Fecha Modificacion: 29-05-2024
*/
#include "FactorialN.cpp"
#include <iostream>

using namespace std;

int main(){
    int n;
    cout << "Introduce un número para calcular su factorial: ";
    cin >> n;

    long long resultado = Factorial::calcular(n);
    if (resultado != -1) {
        cout << "El factorial de " << n << " es " << resultado << endl;
    }

    return 0;
}