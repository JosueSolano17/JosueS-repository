/*
Universidad de las Fuerzas Armadas
           ESPE 
Autor: Josue Solano
Programa: Potencia de un Numero
Fecha Creacion: 29-05-2024
Fecha Modificacion: 29-05-2024
*/
#include "Potencia.cpp"
#include <iostream>

using namespace std;

int main(){
    int base, exponente;

    cout << "Introduce la base: ";
    cin >> base;
    cout << "Introduce el exponente: ";
    cin >> exponente;

    long long resultado = Potencia::calcular(base, exponente);
    if (resultado != -1) {
        cout << base << " elevado a la " << exponente << " es: " << resultado << endl;
    }

    return 0;       
}