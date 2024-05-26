#include "Factorial.h"

int factorialNum(int num){
    if(num <= 1)
    return 1;
    return num * factorialNum(num-1);
}