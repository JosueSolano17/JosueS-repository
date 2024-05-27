#include "SumaN.h"

template<typename T>
int sumaN(T num){
    if(num <= 0) return 0;
    return num +sumaN(num-1);

}