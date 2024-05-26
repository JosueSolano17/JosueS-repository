/*
Universidad de las Fuerzas Armadas
           ESPE 
Autor: Josue Solano
Programa: Guardar un arreglo
Fecha Creacion: 22-05-2024
Fecha Modificacion: 22-05-2024
*/
#include "GuardarArreglo.cpp"
#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Ingrese el tamaño del arreglo: ";
    cin >> n;

    if (n <= 0) {
        cout << "El tamaño del arreglo debe ser un número positivo." << endl;
        return 1;
    }

    int* arr = new int[n];

    llenarArreglo(arr, n);
    imprimirArreglo(arr, n);

    delete[] arr;

    return 0;
}