#include "SumaArray.h"
#include <iostream>

int SumaArray ::  sumar(int* arr, int tamanio){
    if (tamanio <= 0) {
        return 0;
    }
    return arr[tamanio - 1] + sumar(arr, tamanio - 1);
}