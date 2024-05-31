#include "CrearList.h"
#include <iostream>

using namespace std;

void ListaEnlazada :: insertarFin(int valor){
    Nodo* newNodo = new Nodo(valor);
    if (cabeza == nullptr) {
        cabeza = newNodo;
        return;
    }
    Nodo* temp = cabeza;
    while (temp->siguiente != nullptr) {
        temp = temp->siguiente;
    }
    temp->siguiente = newNodo;
}

void ListaEnlazada :: mostrar(){
    Nodo* temp = cabeza;
    while (temp != nullptr) {
        cout << temp->datos << " ";
        temp = temp->siguiente;
    }
    cout << endl;
}