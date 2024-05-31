#include "Eliminar.h"
#include <iostream>
#include <unordered_set>


void Lista::insertarFin(int datos) {
    Nodo* nuevoNodo = new Nodo(datos);
    if (cabeza == nullptr) {
        cabeza = nuevoNodo;
        return;
    }
    Nodo* temp = cabeza;
    while (temp->siguiente != nullptr) {
        temp = temp->siguiente;
    }
    temp->siguiente = nuevoNodo;
}

void Lista::mostrar() {
    Nodo* temp = cabeza;
    while (temp != nullptr) {
        std::cout << temp->datos << " ";
        temp = temp->siguiente;
    }
    std::cout << std::endl;
}

void  Lista:: eliminar(){
    std::unordered_set<int> datos;
    Nodo* actual = cabeza;
    Nodo* previo = nullptr;
    while (actual) {
        if (datos.find(actual->datos) != datos.end()) {
            previo->siguiente = actual->siguiente;
            delete actual;
            actual = previo->siguiente;
        } else {
            datos.insert(actual->datos);
            previo = actual;
            actual = actual->siguiente;
        }
    }
}

