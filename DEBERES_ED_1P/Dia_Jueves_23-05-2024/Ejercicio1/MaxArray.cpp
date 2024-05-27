#include "MaxArray.h"
#include <iostream>

using namespace std;

int maxArray(int *arr, int n){
    if (n == 1) return arr[0]; 
    return max(arr[n - 1], maxArray(arr, n - 1));
}