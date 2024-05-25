/*
Universidad de las Fuerzas Armadas
           ESPE 
Autor: Josue Solano
Programa: Suma Matrices con lambdas recursivas retorno una Matriz
Fecha Creacion: 25-05-2024
Fecha Modificacion: 25-05-2024
*/
#include "Matrices.cpp"

#define MAX 3

using namespace std;

int main() {
    int** mat1 = new int*[MAX];
    int** mat2 = new int*[MAX];
    int** matR = new int*[MAX];

    for (int i = 0; i < MAX; ++i) {
        mat1[i] = new int[MAX];
        mat2[i] = new int[MAX];
        matR[i] = new int[MAX];
    }

    srand(static_cast<unsigned int>(time(nullptr)));
    auto random_int = []() -> int { return rand() % 1000; };
    inicializarMatriz<MAX>(mat1, random_int);
    inicializarMatriz<MAX>(mat2, random_int);

    cout << "Matriz 1:\n";
    for (int i = 0; i < MAX; ++i) {
        for (int j = 0; j < MAX; ++j) {
            cout << mat1[i][j] << "\t";
        }
        cout << "\n";
    }

    cout << "\nMatriz 2:\n";
    for (int i = 0; i < MAX; ++i) {
        for (int j = 0; j < MAX; ++j) {
            cout << mat2[i][j] << "\t";
        }
        cout << "\n";
    }

    sumaRecursivaMatrices<MAX>(mat1, mat2, matR);
    cout << "\nSuma de Matrices:\n";
    for (int i = 0; i < MAX; ++i) {
        for (int j = 0; j < MAX; ++j) {
            cout << matR[i][j] << "\t";
        }
        cout << "\n";
    }

    for (int i = 0; i < MAX; ++i) {
        delete[] mat1[i];
        delete[] mat2[i];
        delete[] matR[i];
    }
    delete[] mat1;
    delete[] mat2;
    delete[] matR;

    return 0;
}
