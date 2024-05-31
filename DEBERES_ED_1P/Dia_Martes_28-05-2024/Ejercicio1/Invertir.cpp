#include "Invertir.h"
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

void Lista ::invertir(){
    Nodo* previo = nullptr;
    Nodo* actual = cabeza;
    Nodo* siguiente = nullptr;
    while (actual) {
        siguiente = actual->siguiente;
        actual->siguiente = previo;
        previo = actual;
        actual = siguiente;
    }
    cabeza = previo;
}