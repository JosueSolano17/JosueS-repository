#include "Matrices.h"

using namespace std;

template <size_t N>
void inicializarMatriz(int** mat, function<int()> random_int) {
    for (size_t i = 0; i < N; ++i) {
        for (size_t j = 0; j < N; ++j) {
            mat[i][j] = random_int();
        }
    }
}

template <size_t N>
void sumaRecursivaMatrices(int** mat1, int** mat2, int** matR) {
    auto sumaRecursiva = [&](auto& self, int f, int c) -> void {
        if ((f >= 0) && (c >= 0)) {
            matR[f][c] = mat1[f][c] + mat2[f][c];
            self(self, f - 1, c);
            self(self, f, c - 1);
        }
    };

    sumaRecursiva(sumaRecursiva, N - 1, N - 1);
}



