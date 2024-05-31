/*
Universidad de las Fuerzas Armadas
           ESPE 
Autor: Josue Solano
Programa: Invertir Lista
Fecha Creacion: 28-05-2024
Fecha Modificacion: 28-05-2024
*/
#include "Invertir.cpp"
#include <iostream>

int main() {
    Lista list;
    list.insertarFin(3);
    list.insertarFin(2);
    list.insertarFin(6);
    list.insertarFin(1);
    list.insertarFin(4);
    list.insertarFin(5);
    std::cout << "Lista original:" << std::endl;
    list.mostrar();

    std::cout << "Lista invertida:" << std::endl;
    list.invertir();
    list.mostrar();
    return 0;
}