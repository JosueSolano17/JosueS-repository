/*
Universidad de las Fuerzas Armadas
           ESPE 
Autor: Josue Solano
Programa: Suma de elementos en un arreglo
Fecha Creacion: 22-05-2024
Fecha Modificacion: 22-05-2024
*/
#include "SumaArray.cpp"
#include <iostream>

using namespace std;

int main(){
    int n;
    cout << "Ingrese el tamanio del arreglo: " << endl;
    cin >> n;

    if (n <= 0) {
        cout << "El tamaño del arreglo debe ser positivo." << endl;
        return 1;
    }

    int* arr = new int[n];

    cout << "Ingrese los elementos del arreglo: Formato(a b c ...)" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int suma = sumaArreglo(arr, n);

    cout << "La suma de los elementos del arreglo es " << suma <<endl;

    delete []arr;

    return 0;
}