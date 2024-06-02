#include "InvertirC.h"
#include <cstring>

char* invertirCadena ::invertir(const char* str){
    if (str == nullptr) {
        return nullptr;
    }
    int len = std::strlen(str);
    if (len == 0) {
        return new char[1]{'\0'};
    }
    char* invertida = new char[len + 1];
    std::strcpy(invertida, str);
    
    invertirRecursivamente(invertida, 0, len - 1);
    
    return invertida;

}

void invertirCadena ::invertirRecursivamente(char* str, int inicio, int fin) {
    if (inicio >= fin) {
        return;
    }
    std::swap(str[inicio], str[fin]);
    invertirRecursivamente(str, inicio + 1, fin - 1);
}