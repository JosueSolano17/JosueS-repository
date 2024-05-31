/*
Universidad de las Fuerzas Armadas
           ESPE 
Autor: Josue Solano
Programa: Eliminar un termino de la lista
Fecha Creacion: 28-05-2024
Fecha Modificacion: 28-05-2024
*/
#include "Eliminar.cpp"
#include <iostream>

int main(){
    Lista list;
    list.insertarFin(100);
    list.insertarFin(75);
    list.insertarFin(50);
    list.insertarFin(25);
    list.insertarFin(0);

    std::cout << "Lista original:" << std::endl;
    list.mostrar();

    list.eliminar(25);

    std::cout << "Lista despues del cambio:" << std::endl;
    list.mostrar();

    return 0;
}