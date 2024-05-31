#include "Eliminar.h"
#include <iostream>

void Lista :: insertarFin(int datos){
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

void Lista :: eliminar(int valor){
    Nodo* actual = cabeza;
    Nodo* previo = nullptr;
    
    while (actual) {
        if (actual->datos == valor) {
            if (previo) {
                previo->siguiente = actual->siguiente;
            } else {
                cabeza = actual->siguiente;
            }
            Nodo* temp = actual;
            actual = actual->siguiente;
            delete temp;
        } else {
            previo = actual;
            actual = actual->siguiente;
        }
    }
}

void Lista :: mostrar(){
    Nodo* temp = cabeza;
    while (temp != nullptr) {
        std::cout << temp->datos << " ";
        temp = temp->siguiente;
    }
    std::cout << std::endl;
}