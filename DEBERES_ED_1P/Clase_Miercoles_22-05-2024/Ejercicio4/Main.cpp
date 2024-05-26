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