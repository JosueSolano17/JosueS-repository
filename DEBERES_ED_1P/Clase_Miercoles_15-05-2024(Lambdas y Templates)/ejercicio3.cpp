//Universidad de las Fuerzas Armadas
//           ESPE 
//Autor: Josue Solano
//Programa: Usa una lambda con una función template para aplicar una operación a cada elemento de un vector.
//Fecha Creacion: 15-05-2024
//Fecha Modificacion: 15-05-2024

#include <iostream>
#include <vector>

using namespace std;

template<typename T, typename Func>
void multipVect(vector<T>& vec, Func func) {
    for (T& elem : vec) {
        func(elem);
    }
}

int main() {
    vector<int> v = {1, 2, 3, 4, 5};

    multipVect(v, [](int& n) {
        n *= 2;  // Duplicamos cada elemento
    });

    cout << "Vector modificado: ";
    for (int n : v) {
        cout << n << " ";
    }
    cout << endl;

    return 0;
}
