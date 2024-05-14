#include <iostream>
#include <vector>

using namespace std;

template<typename T>
T SumaNum(const vector<T>& vec) {
    T suma = T();
    for (const auto& elem : vec) {
        suma += elem;
    }
    return suma;
}

int main() {
    vector<int> numeros = {1, 2, 3, 4, 5};
    cout << "Suma de numeros enteros: " << SumaNum(numeros) << endl;

    vector<double> decimales = {1.1, 2.2, 3.3, 4.4, 5.5};
    cout << "Suma de numeros decimales: " << SumaNum(decimales) << endl;

    return 0;
}