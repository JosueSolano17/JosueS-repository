#include <iostream>

struct Nodo{
    int datos;
    Nodo* siguiente;

    Nodo(int valor) : datos(valor), siguiente(nullptr){}

};

class ListaEnlazada{
    public:
    ListaEnlazada() : cabeza(nullptr){}
    void insertarFin(int valor);
    void mostrar();

    private:
    
    Nodo* cabeza;

};