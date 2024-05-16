//Universidad de las Fuerzas Armadas
//           ESPE 
//Autor: Josue Solano
//Programa: Función template para contar elementos que cumplen con una condición
//Fecha Creacion: 15-05-2024
//Fecha Modificacion: 15-05-2024

#include <iostream>
#include <vector>

using namespace std;

template<typename Container, typename Func>
int contarSi(const Container& container, Func condition) {
    int count = 0;
    for (const auto& elem : container) {
        if (condition(elem)) {
            ++count;
        }
    }
    return count;
}

int main() {
    vector<int> numeros = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Lambda que define la condición: ser un número par
    auto seaPar = [](int n) {
        return n % 2 == 0;
    };

    int evenCount = contarSi(numeros, seaPar);

    cout << "Cantidad de números pares: " << evenCount << endl;  // Output: 5

    return 0;
}