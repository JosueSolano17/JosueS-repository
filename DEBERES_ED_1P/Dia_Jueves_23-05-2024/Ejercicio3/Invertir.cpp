#include "Invertir.h"
#include <iostream>
#include <cstring>

using namespace std;

template <typename T>
void invertir(T* str, int inicio, int fin){
    if(inicio >= fin) return;
    swap(str[inicio], str[fin]);
    invertir(str,inicio+1, fin-1);
}