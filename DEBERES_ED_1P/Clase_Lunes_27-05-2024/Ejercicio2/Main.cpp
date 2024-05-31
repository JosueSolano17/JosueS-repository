/*
Universidad de las Fuerzas Armadas
           ESPE 
Autor: Josue Solano
Programa: Ordenar una Lista
Fecha Creacion: 27-05-2024
Fecha Modificacion: 27-05-2024
*/
#include "OrdenarList.cpp"

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

    std::cout << "Lista ordenada:" << std::endl;
    list.ordenaBurbuja();
    list.mostrar();
    return 0;
}