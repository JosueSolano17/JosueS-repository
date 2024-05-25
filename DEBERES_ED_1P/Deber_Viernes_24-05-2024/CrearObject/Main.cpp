#include "Creacion.cpp"
#include <iostream>
#include <cstdint>
#include <iomanip>

using namespace std;

int main() {
    CGameObject<uint16_t> *g1, *g2;
    uint8_t* p;

    g1 = new CGameObject<uint16_t>(1, 2);
    g2 = new CGameObject<uint16_t>(3, 7);
   
    p = reinterpret_cast<uint8_t*>(g1) - 16;
    printRawMem(p, 16, 4); 
    cout << "--------------\n";
   
    delete g2;
    printRawMem(p, 16, 4);  
    cout << "--------------\n";
 
    delete g1;
    printRawMem(p, 16, 4);
   
    return 0;
}