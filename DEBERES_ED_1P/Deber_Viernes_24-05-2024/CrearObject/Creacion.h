#include <iostream>
#include <cstdint>
#include <iomanip>

template <class T>
class CGameObject{
    public:

    CGameObject(T x, T y);
    ~CGameObject();
    private:

    static uint32_t ms_id;
    uint32_t m_id;
    T m_x, m_y;

};

void printHexVal(uint16_t val);
void printRawMem(uint8_t* p, uint16_t linebytes, uint16_t lines);