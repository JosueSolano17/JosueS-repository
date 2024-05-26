#include "SumaArray.h"
#include <iostream>

using namespace std;

int sumaArreglo(int array[], int n){
    if (n <= 0) return 0;
    return array[n - 1] + sumaArreglo(array, n - 1);
}