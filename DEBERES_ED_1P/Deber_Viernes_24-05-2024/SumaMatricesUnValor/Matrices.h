/*
Universidad de las Fuerzas Armadas
           ESPE 
Autor: Josue Solano
Programa: Suma Matrices con lambdas recursivas
Fecha Creacion: 24-05-2024
Fecha Modificacion: 24-05-2024
*/

#ifndef Matrices_H
#define Matrices_H

#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <functional>


using namespace std;

template <typename T, size_t N>
void inicializarMatrices(T (&mat1)[N][N], T (&mat2)[N][N], function<T()> gen);

template <typename T, size_t N>
void imprimirMatrices(T (&mat1)[N][N], T (&mat2)[N][N], function<void(const T&)> print);

template <typename T, size_t N>
void imprimirSumaMatrices(T (&mat1)[N][N], T (&mat2)[N][N], function<T(T, T)> suma);

#endif 

