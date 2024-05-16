#include <iostream>

using namespace std;

template<typename T>

void intercambiar(T& a, T& b) {
    T temporal = a;
    a = b;
    b = temporal;
}

template<typename T>
int particion(T array[], int menor, int mayor) {
    T pivote = array[mayor];  
    int i = (menor - 1);  
    
    for (int j = menor; j <= mayor - 1; j++) {
        if (array[j] < pivote) {
            i++;    
            intercambiar(array[i], arr[j]);
        }
    }
    intercambiar(array[i + 1], array[mayor]);
    return (i + 1);
}

template<typename T>
void quickSort(T array[], int menor, int mayor) {
    if (menor < mayor) {
        int pi = particion(array, menor, mayor);

        quickSort(array, menor, pi - 1);
        quickSort(array, pi + 1, mayor);
    }
}

template<typename T>
void imprimirArreglo(T array[], int size) {
    for (int i = 0; i < size; i++)
        std::cout << array[i] << " ";
    std::cout << endl;
}

int main() {
    int array[] = {10, 7, 8, 9, 1, 5,15};
    int n = sizeof(array) / sizeof(array[0]);
    
    std::cout << "Arreglo original:" << endl;
    imprimirArreglo(array, n);

    quickSort(array, 0, n - 1);

    std::cout << "Arreglo ordenado:" << endl;
    imprimirArreglo(array, n);
    
    return 0;
}