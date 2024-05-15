#include <iostream>

using namespace std;

template<typename T>

void intercambiar(T& a, T& b) {
    T equals = a;
    a = b;
    b = equals;
}

template<typename T>
int particion(T arr[], int menor, int mayor) {
    T guardado = arr[mayor];  
    int i = (menor - 1);  
    
    for (int j = menor; j <= mayor - 1; j++) {
        if (arr[j] < guardado) {
            i++;    
            intercambiar(arr[i], arr[j]);
        }
    }
    intercambiar(arr[i + 1], arr[mayor]);
    return (i + 1);
}

template<typename T>
void quickSort(T arr[], int menor, int mayor) {
    if (menor < mayor) {
        int pi = particion(arr, menor, mayor);

        quickSort(arr, menor, pi - 1);
        quickSort(arr, pi + 1, mayor);
    }
}

template<typename T>
void imprimirArreglo(T arr[], int size) {
    for (int i = 0; i < size; i++)
        std::cout << arr[i] << " ";
    std::cout << endl;
}

int main() {
    int arr[] = {10, 7, 8, 9, 1, 5,15};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    std::cout << "Arreglo original:" << endl;
    imprimirArreglo(arr, n);

    quickSort(arr, 0, n - 1);

    std::cout << "Arreglo ordenado:" << endl;
    imprimirArreglo(arr, n);
    
    return 0;
}