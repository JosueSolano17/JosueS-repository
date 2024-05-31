#include "UnirLista.h"
#include <iostream>


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

void Lista :: unir(Lista& otra){
    if(cabeza == nullptr){
        cabeza = otra.cabeza;
        otra.cabeza = nullptr;
        return;
    }
    Nodo* temp = cabeza;
    while (temp->siguiente != nullptr) {
        temp = temp->siguiente;
    }
    temp->siguiente = otra.cabeza;
    otra.cabeza = nullptr;
}