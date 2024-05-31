#include "Maximo.h"
#include <iostream>

void Lista ::insertarFin(int datos){
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

int Lista :: elementoMax(){
    int maximo = cabeza->datos;
    Nodo* actual = cabeza->siguiente;

    while (actual) {
        if (actual->datos > maximo) {
            maximo = actual->datos;
        }
        actual = actual->siguiente;
    }

    return maximo;
}