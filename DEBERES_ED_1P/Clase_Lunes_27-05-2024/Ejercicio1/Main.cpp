/*
Universidad de las Fuerzas Armadas
           ESPE 
Autor: Josue Solano
Programa: Lista Enlazada Simple
Fecha Creacion: 27-05-2024
Fecha Modificacion: 27-05-2024
*/
#include "CrearList.cpp"

int main() {
    ListaEnlazada list;
    list.insertarFin(1);
    list.insertarFin(2);
    list.insertarFin(3);
    list.insertarFin(6);
    list.insertarFin(4);
    list.mostrar();
    
    return 0;
}