/*Universidad de las Fuerzas Armadas
           ESPE 
Autor: Josue Solano
Programa: Suma de los primeros elementos de un numero (Recursividad)
Fecha Creacion: 23-05-2024
Fecha Modificacion: 26-05-2024*/
#include "SumaN.cpp"
#include <iostream>

using namespace std;

int main(){

    int num;

    cout<<"Ingrese el numero a ser sumado: "<< endl; 
    cin >> num;

    int resultado = sumaN(num);

    cout << "El resultado de la suma de los primeros numeros es: " << resultado << endl;

    return 0;
}