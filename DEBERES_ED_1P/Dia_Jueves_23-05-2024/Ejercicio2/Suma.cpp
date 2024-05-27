#include "Suma.h"
#include <iostream>

int suma(int num){
    if(num==0) return 0;
    return (num % 10) + suma(num / 10);
}