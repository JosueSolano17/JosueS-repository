#include "Medio.h"
#include <iostream>

void Lista :: insertarFin(int datos){
    Nodo* nuevoNodo = new Nodo(datos);
    if (!cabeza) {
        cabeza = nuevoNodo;
        cabeza->siguiente = cabeza;
    } else {
        Nodo* actual = cabeza;
        while (actual->siguiente != cabeza) {
            actual = actual->siguiente;
        }
        actual->siguiente = nuevoNodo;
        nuevoNodo->siguiente = cabeza;
    }
}

void Lista::mostrar() {
    if (!cabeza) return;

    Nodo* actual = cabeza;
    do {
        std::cout << actual->datos << " ";
        actual = actual->siguiente;
    } while (actual != cabeza);
    std::cout << std::endl;
}

int Lista :: elementoMedio(){
    if (!cabeza) return -1;

    Nodo* lento = cabeza;
    Nodo* rapido = cabeza;
    do {
        rapido = rapido->siguiente;
        if (rapido != cabeza) {
            rapido = rapido->siguiente;
            lento = lento->siguiente;
        }
    } while (rapido != cabeza && rapido->siguiente != cabeza);
    
    return lento->datos;
}