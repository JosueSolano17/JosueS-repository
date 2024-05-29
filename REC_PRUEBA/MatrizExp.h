#include<iostream>
#include <vector>

using namespace std;

template <typename T>
class Matriz{

    public:

    Matriz(int filas, int columnas);
    ~Matriz();

    void crearMatriz(int filas, int columnas);
    void ingresarDatos();
    void exponente(int exponente);
    void imprimir() const;
    void multMatriz(int** resultado, int** a, int** b, int filas, int columnas);
    void copiarMatriz(int** destino, int** fuente, int filas, int columnas);
    
    private:
    int** datos;
    int filas;
    int columnas;

    
};
