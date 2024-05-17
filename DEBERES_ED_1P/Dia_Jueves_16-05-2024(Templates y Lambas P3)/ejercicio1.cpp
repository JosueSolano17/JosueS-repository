//Universidad de las Fuerzas Armadas
//           ESPE 
//Autor: Josue Solano
//Programa: Resta de un vector
//Fecha Creacion: 16-05-2024
//Fecha Modificacion: 16-05-2024

#include <iostream>
#include <vector>

using namespace std;

template<typename T>
T restaNum(const vector<T>& vec) {
    T resta = T();
    for (const auto& elem : vec) {
        resta-= elem;
    }
    return resta;
}

int main() {
    vector<int> numeros = {-10, 2, 3, 4, -5};
    cout << "Resta de numeros enteros: " << restaNum(numeros) << endl;

    vector<double> decimales = {1.1, 2.2, 3.3, 4.4, -5.5};
    cout << "Resta de numeros decimales: " << restaNum(decimales) << endl;

    return 0;
}