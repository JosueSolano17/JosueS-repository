#include <iostream>

class invertirCadena {
public:
    static char* invertir(const char* str);

private:
    static void invertirRecursivamente(char* str, int inicio, int fin);
};