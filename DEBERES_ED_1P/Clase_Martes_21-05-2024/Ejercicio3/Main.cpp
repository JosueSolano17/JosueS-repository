/*Universidad de las Fuerzas Armadas
           ESPE 
Autor: Josue Solano
Programa: Filtrar números pares de un vector
Fecha Creacion: 21-05-2024
Fecha Modificacion: 21-05-2024
*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> numeros = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> pares;

    copy_if(numeros.begin(), numeros.end(), back_inserter(pares), [](int n) {
        return n % 2 == 0;
    });

    cout << "Números pares: ";
    for(int n : pares) {
        cout << n << " ";
    }
    cout << endl;
    return 0;
}
