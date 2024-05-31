#include <iostream>

struct Nodo{
    int datos;
    Nodo* siguiente;

    Nodo(int valor) : datos(valor), siguiente(nullptr){}

};

class Lista{
    public:
    Lista() : cabeza(nullptr){}
    void insertarFin(int valor);
    void mostrar();
    void eliminar();

    private:
    
    Nodo* cabeza;

};