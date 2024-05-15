#include <iostream>

using namespace std;

template<typename T>
T promedio(T arr[], int size) {
    T suma = 0;
    for (int i = 0; i < size; ++i) {
        suma += arr[i];
    }
    return suma / size;
}

int main() {

    int arreglo_enteros[] = {10, 20, 30, 40, 50};
    int tamano_enteros = sizeof(arreglo_enteros) / sizeof(arreglo_enteros[0]);
 
    std::cout << "El promedio de los enteros es: " << promedio(arreglo_enteros, tamano_enteros) << endl;

    double arreglo_double[] = {3.5, 7.2, 9.8, 2.4, 5.6};
    int tamano_double = sizeof(arreglo_double) / sizeof(arreglo_double[0]);

    std::cout << "El promedio de los double es: " << promedio(arreglo_double, tamano_double) << endl;

    return 0;
}