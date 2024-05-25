#include <iostream>
#include <functional>
#include "Multi.cpp"

typedef int entero;

using namespace std;

int main() {
    int t;
    int* ptr = new entero[10];
    cout << "Ingrese el tamaño: ";
    cin >> t;

    auto ingresoFunc = function<int()>([]() -> int { int x; cin >> x; return x; });
    ingreso(ptr, t, ingresoFunc);

    impresion(ptr, t);

    cout << "\nIngrese el escalar: ";
    int escalar;
    cin >> escalar;
    auto procesoFunc = function<int(int)>([escalar](int val) -> int { return val * escalar; });
    proceso(ptr, t, procesoFunc);

    impresion(ptr, t);

    delete[] ptr;
    return 0;
}
