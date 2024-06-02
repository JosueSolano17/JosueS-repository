/*
Universidad de las Fuerzas Armadas
           ESPE 
Autor: Josue Solano
Programa: Suma elementos
Fecha Creacion: 29-05-2024
Fecha Modificacion: 29-05-2024
*/
#include "SumaArray.cpp"
#include <iostream>

using namespace std;

int main(){
    int n;

    cout << "Introduce el tamaño del array: ";
    cin >> n;

    int* arr = new int[n];
    cout << "Introduce los elementos del array:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int resultado = SumaArray::sumar(arr, n);
    cout << "La suma de los elementos del array es: " << resultado << endl;

    delete[] arr;

    return 0;
}