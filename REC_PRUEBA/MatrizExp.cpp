#include "MatrizExp.h"
#include <iostream>

using namespace std;

template <typename T>
Matriz<T> :: Matriz(int filas, int columnas) : filas(filas), columnas(columnas){
    crearMatriz(filas,columnas);
}

template <typename T>
Matriz<T>::~Matriz() {
    for (int i = 0; i < filas; ++i) {
        delete[] datos[i];
    }
    delete[] datos;
}

template <typename T>
void Matriz<T>::crearMatriz(int filas, int columnas) {
    datos = new int*[filas];
    for (int i = 0; i < filas; ++i) {
        datos[i] = new int[columnas];
    }
}

template <typename T>
void Matriz<T>::ingresarDatos() {
    cout << "Ingresa los datos de la matriz:" << endl;
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            cout << "Elemento (" << i << ")(" << j << "): ";
            cin >> datos[i][j];
        }
    }
}

template <typename T>
void Matriz<T>::exponente(int exp) {
    int** resultado = new int*[filas];
    int** temporal = new int*[filas];
    for (int i = 0; i < filas; ++i) {
        resultado[i] = new int[columnas];
        temporal[i] = new int[columnas];
        for (int j = 0; j < columnas; ++j) {
            resultado[i][j] = (i == j) ? 1 : 0; 
            temporal[i][j] = datos[i][j];
        }
    }
    for (int n = 0; n < exp; ++n) {
        multMatriz(resultado, resultado, temporal, filas, columnas);
    }
    copiarMatriz(datos, resultado, filas, columnas);
}

template <typename T>
void Matriz<T>::multMatriz(int** resultado, int** a, int** b, int filas, int columnas) {
    int** temporal = new int*[filas];
    for (int i = 0; i < filas; ++i) {
        temporal[i] = new int[columnas];
        for (int j = 0; j < columnas; ++j) {
            temporal[i][j] = 0;
            for (int k = 0; k < columnas; ++k) {
                temporal[i][j] += a[i][k] * b[k][j];
            }
        }
    }
        copiarMatriz(resultado, temporal, filas, columnas);

    for (int i = 0; i < filas; ++i) {
        delete[] temporal[i];
    }
    delete[] temporal;
}

template <typename T>
void Matriz<T>::copiarMatriz(int** destino, int** fuente, int filas, int columnas) {
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            destino[i][j] = fuente[i][j];
        }
    }
}

template <typename T>
void Matriz<T>::imprimir() const {
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            cout << datos[i][j] << " ";
        }
        cout << endl;
    }
}