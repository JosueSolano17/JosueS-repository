/*Universidad de las Fuerzas Armadas
           ESPE 
Autor: Josue Solano
Programa: Maximo de un arreglo (Recursividad)
Fecha Creacion: 23-05-2024
Fecha Modificacion: 26-05-2024*/
#include "MaxArray.cpp"
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

    cout << "Ingrese los elementos del arreglo: Formato(a, b, c, ...)" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int maximo = maxArray(arr, n);

    cout << "El máximo elemento del arreglo es " << maximo << endl;

    delete[] arr;

    return 0;
}