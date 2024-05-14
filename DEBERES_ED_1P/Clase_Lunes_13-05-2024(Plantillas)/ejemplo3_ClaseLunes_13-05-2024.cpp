#include <iostream>
#include <initializer_list>

using namespace std;

template<typename T>
T EncontrarMaximo(initializer_list<T> lista) {
    T maximo = *lista.begin();
    for (const auto& elem : lista) {
        if (elem > maximo) {
            maximo = elem;
        }
    }
    return maximo;
}

int main() {
    cout << "Maximo: " << EncontrarMaximo({1, 3, 5, 7, 9}) << endl;
    cout << "Maximo: " << EncontrarMaximo({30.14, 2.71, 6.28, 1.61}) << endl;
    cout << "Maximo: " << EncontrarMaximo({'a', 'b', 'c', 'd'}) << endl;

    return 0;
}