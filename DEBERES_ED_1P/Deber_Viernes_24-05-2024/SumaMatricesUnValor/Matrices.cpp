/*
Universidad de las Fuerzas Armadas
           ESPE 
Autor: Josue Solano
Programa: Suma Matrices con lambdas recursivas
Fecha Creacion: 24-05-2024
Fecha Modificacion: 24-05-2024
*/

#include "Matrices.h"
#include <iostream>

using namespace std;

template <typename T, size_t N>
void inicializarMatrices(T (&mat1)[N][N], T (&mat2)[N][N], function<T()> gen) {
    for (size_t i = 0; i < N; ++i) {
        for (size_t j = 0; j < N; ++j) {
            mat1[i][j] = gen();
            mat2[i][j] = gen();
        }
    }
}

template <typename T, size_t N>
void imprimirMatrices(T (&mat1)[N][N], T (&mat2)[N][N], function<void(const T&)> print) {
    auto print_matrix = [&](T (&matrix)[N][N], const string& name) {
        cout << name << ":" << endl;
        for (size_t i = 0; i < N; ++i) {
            for (size_t j = 0; j < N; ++j) {
                print(matrix[i][j]);
                cout << "\t";
            }
            cout << endl;
        }
        cout << endl;
    };

    print_matrix(mat1, "Matriz 1");
    print_matrix(mat2, "Matriz 2");
}

template <typename T, size_t N>
void imprimirSumaMatrices(T (&mat1)[N][N], T (&mat2)[N][N], function<T(T, T)> suma) {
    auto sumaRecursivaMatrices = [&](auto& self, int f, int c) -> T {
        if ((f == 0) && (c == 0)) {
            return suma(mat1[f][c], mat2[f][c]);
        } else {
            if (f > -1) {
                c--;
                if (c >= -1) {
                    return suma(mat1[f][c + 1], mat2[f][c + 1]) + self(self, f, c);
                }
                return self(self, f - 1, N - 1);
            }
        }
        return T(); 
    };

    cout << "Suma de Matrices es: " << sumaRecursivaMatrices(sumaRecursivaMatrices, N - 1, N - 1) << endl;
}

