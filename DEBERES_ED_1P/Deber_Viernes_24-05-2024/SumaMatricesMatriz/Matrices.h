#ifndef Matrices_H
#define Matrices_H

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <functional>
using namespace std;

template <size_t N>
void inicializarMatriz(int** mat, function<int()> random_int);

template <size_t N>
void sumaRecursivaMatrices(int** mat1, int** mat2, int** matR);



#endif

