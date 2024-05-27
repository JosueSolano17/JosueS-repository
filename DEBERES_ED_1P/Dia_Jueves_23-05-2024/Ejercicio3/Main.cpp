/*Universidad de las Fuerzas Armadas
           ESPE 
Autor: Josue Solano
Programa: Cadena Invertida (Recursividad)
Fecha Creacion: 23-05-2024
Fecha Modificacion: 26-05-2024*/

#include "Invertir.cpp"
#include <iostream>
#include <cstring>

int main(){

    char cadena[50];

    cout << "Ingrese una cadena: " ;
    cin.getline(cadena,50);

    int longitud = strlen(cadena);

    invertir(cadena, 0, longitud-1);

    cout << "La cadena invertida es: " << cadena << endl;


    return 0;
}