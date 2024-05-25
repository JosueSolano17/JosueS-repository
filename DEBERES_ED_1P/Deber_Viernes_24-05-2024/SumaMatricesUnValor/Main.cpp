/*
Universidad de las Fuerzas Armadas
           ESPE 
Autor: Josue Solano
Programa: Suma Matrices con lambdas recursivas
Fecha Creacion: 24-05-2024
Fecha Modificacion: 24-05-2024
*/

#include "Matrices.cpp"

int main() {
    const size_t MAX = 3;
    srand(static_cast<unsigned int>(time(nullptr)));

    int mat1[MAX][MAX], mat2[MAX][MAX];

    auto random_int = []() -> int { return rand() % 10;};
    inicializarMatrices<int, MAX>(mat1, mat2, function<int()>(random_int));

    auto print_int = [](const int& val) { cout << val; };
    imprimirMatrices<int, MAX>(mat1, mat2, function<void(const int&)>(print_int));

    auto suma_int = [](int a, int b) -> int { return a + b; };
    imprimirSumaMatrices<int, MAX>(mat1, mat2, function<int(int, int)>(suma_int));

    return 0;
}
