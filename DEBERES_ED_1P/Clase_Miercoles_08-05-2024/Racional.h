/***********************************************************************
 * Module:  Racional.h
 * Author:  Josue Solano
 * Modified: mi�rcoles, 8 de mayo de 2024 19:32:50
 * Purpose: Declaration of the class Racional
 ***********************************************************************/
#if !defined(__Class_Diagram_1_Racional_h)
#define __Class_Diagram_1_Racional_h

class Racional
{
public:
    int getDenominador(void);
    void setDenominador(int newDenominador);
    int getNumerador(void);
    void setNumerador(int newNumerador);
    Racional();
    Racional(int num, int den);
    int Suma_int(Racional ra1, Racional r2);
    void Suma_void(Racional ra1, Racional r2);
    float Suma_float(Racional ra1, Racional r2);
Racional Suma_ra(Racional ra1, Racional r2);
protected:
private:
    int numerador;
    int denominador;

};

#endif