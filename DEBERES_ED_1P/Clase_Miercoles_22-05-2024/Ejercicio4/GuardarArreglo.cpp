#include "GuardarArreglo.h"
#include <iostream>

using namespace std;

void llenarArreglo(int* arr, int n) {
    for (int i = 0; i < n; ++i) {
        arr[i] = i + 1;
    }
}

void imprimirArreglo(int* arr, int n) {
    cout << "Elementos del arreglo: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}