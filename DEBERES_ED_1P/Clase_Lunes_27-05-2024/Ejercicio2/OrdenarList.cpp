#include "OrdenarList.h"
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

void Lista::ordenaBurbuja() {
    if (cabeza == nullptr || cabeza->siguiente == nullptr)
        return;

    bool intercambiado;
    Nodo* temp;
    do {
        intercambiado = false;
        temp = cabeza;
        while (temp->siguiente != nullptr) {
            if (temp->datos > temp->siguiente->datos) {
                int tempdatos = temp->datos;
                temp->datos = temp->siguiente->datos;
                temp->siguiente->datos = tempdatos;
                intercambiado = true;
            }
            temp = temp->siguiente;
        }
    } while (intercambiado);
}
