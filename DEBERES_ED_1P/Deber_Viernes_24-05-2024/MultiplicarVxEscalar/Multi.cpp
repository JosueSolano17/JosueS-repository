#include <iostream>
#include <cstdio>

using namespace std;

template<typename T>
void ingreso(T* p, int t, function<T()> ingresoFunc) {
    for (int i = 0; i < t; i++) {
        p[i] = ingresoFunc();
    }
}

template<typename T>
void impresion(T* p, int t) {
    printf("{ ");
    for (int i = 0; i < t; i++) {
        printf("%d ", p[i]);
    }
    printf("}\n");
}

template<typename T>
void proceso(T* p, int t, function<T(T)> procesoFunc) {
    for (int i = 0; i < t; i++) {
        p[i] = procesoFunc(p[i]);
    }
}
