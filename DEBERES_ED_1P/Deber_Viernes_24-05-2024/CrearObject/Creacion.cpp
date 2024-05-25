#include "Creacion.h"

using namespace std;

template <typename T>
uint32_t CGameObject<T>::ms_id = 1;

template <typename T>
CGameObject<T>::CGameObject(T x, T y)
    : m_x(x), m_y(y), m_id(ms_id++) {
    cout << "Creating CGameObject " << m_id 
              << " (" << m_x << ", " << m_y << ") "
              << " at ( " << this << ", " << sizeof(*this) << ")\n";
}

template <typename T>
CGameObject<T>::~CGameObject() {
    cout << "Destroying CGameObject " << m_id << "\n";
}

void printHexVal(uint16_t val) {
    cout << hex << setw(2) << setfill('0') << val;
}

void printRawMem(uint8_t* p, uint16_t linebytes, uint16_t lines) { 
    for(uint16_t l = 0; l < lines; ++l) {
        cout << reinterpret_cast<void*>(p) << " ";
        for(uint16_t u = 0; u < linebytes; ++u) {
            printHexVal(*p);
            ++p;
            cout << " ";
        }
        cout << "\n";
    }
}

